use bl808_sdk_header_tools::{parse, ParseResult, ParseState};
use core::fmt;
use tracing::Level;
use tracing_subscriber::FmtSubscriber;

#[macro_export]
macro_rules! regex {
    ($re:literal) => {{
        ::ref_thread_local::ref_thread_local! {
            static managed REGEX: ::regex::Regex = ::regex::Regex::new($re).unwrap();
        }
        <REGEX as ::ref_thread_local::RefThreadLocal<::regex::Regex>>::borrow(&REGEX)
    }};
}

#[derive(Debug)]
struct Field {
    name: String,
    // description: String,
    lsb: String,
    msb: String,
}

impl Field {
    fn new() -> Field {
        Field {
            name: "".to_string(),
            // description: "".to_string(),
            lsb: "".to_string(),
            msb: "".to_string(),
        }
    }
}

impl fmt::Display for Field {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(
            f,
            "        <field>
            <name>{}</name>
            <description></description>
            <lsb>{}</lsb>
            <msb>{}</msb>
        </field>\n",
            self.name, self.lsb, self.msb,
        )
    }
}

#[derive(Debug)]
struct Register {
    name: String,
    description: String,
    address_offset: String,
    fields: Vec<Field>,
}

impl Register {
    fn new() -> Register {
        Register {
            name: "".to_string(),
            description: "".to_string(),
            address_offset: "".to_string(),
            fields: vec![],
        }
    }
}

impl fmt::Display for Register {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(
            f,
            "<register>
    <name>{}</name>
    <description>{}</description>
    <fields>\n",
            self.name, self.description,
        )?;

        for field in &self.fields {
            write!(f, "{field}")?;
        }
        write!(f, "    </fields>\n</register>\n")
    }
}

fn main() -> anyhow::Result<()> {
    let subscriber = FmtSubscriber::builder()
        .with_max_level(Level::TRACE)
        .with_ansi(false)
        .finish();
    tracing::subscriber::set_global_default(subscriber).expect("setting default subscriber failed");
    let f = std::fs::read("sources/headers/glb_clocks.h")?;

    let mut state = ParseState::NoMatch;
    let mut register: Option<Register> = None;
    let mut registers = vec![];

    for (linenum, l) in f.split(|b| b == &b'\n').enumerate() {
        let l = String::from_utf8_lossy(l);
        let (newstate, parse_result) = parse(state, l.to_string(), linenum);
        match newstate {
            ParseState::NoMatch => todo!(),
            ParseState::BlockName => {
                if let Some(parse) = parse_result {
                    match parse {
                        ParseResult::Match(m) => panic!("Not expecting match, got {m:?}"),
                        ParseResult::Capture(c) => {
                            if let Some(reg) = register.as_mut() {
                                reg.name = c[0].clone();
                            }
                        }
                    }
                }
            }
            ParseState::BlockAddr => {
                if let Some(parse) = parse_result {
                    if let Some(reg) = register {
                        registers.push(reg);
                    }
                    let mut reg = Register::new();
                    match parse {
                        ParseResult::Match(m) => panic!("Not expecting match, got {m:?}"),
                        ParseResult::Capture(c) => {
                            reg.address_offset = c[0].clone();
                            reg.description = c[1].clone();
                        }
                    }
                    register = Some(reg);
                }
            }
            ParseState::UnionStr => {}
            ParseState::StructStr => {
                if let Some(parse) = parse_result {
                    let mut field = Field::new();
                    match parse {
                        ParseResult::Match(_m) => {
                            // panic!("Not expecting match, got {m:?}")
                        }
                        ParseResult::Capture(c) => {
                            field.name = c[0].clone();
                            // c[1] is number of bits, we don't need that.
                            if c[2].contains(':') {
                                let mut c_arr = c[2].split(':');
                                let msb = c_arr.next();
                                let lsb = c_arr.next();
                                field.msb = msb.unwrap().to_string();
                                field.lsb = lsb.unwrap().to_string();
                            } else {
                                field.msb = c[2].clone();
                                field.lsb = c[2].clone();
                            }
                            field.name = c[0].clone();
                        }
                    }
                    if let Some(reg) = register.as_mut() {
                        reg.fields.push(field);
                    }
                }
            }
            ParseState::Field => {
                if let Some(parse) = parse_result {
                    match parse {
                        ParseResult::Match(m) => panic!("Not expecting match, got {m:?}"),
                        ParseResult::Capture(c) => {
                            let mut field = Field::new();
                            field.name = c[0].clone();
                            // c[1] is number of bits, we don't need that.
                            if c[2].contains(':') {
                                let mut c_arr = c[2].split(':');
                                let msb = c_arr.next();
                                let lsb = c_arr.next();
                                field.msb = msb.unwrap().to_string();
                                field.lsb = lsb.unwrap().to_string();
                            } else {
                                field.msb = c[2].clone();
                                field.lsb = c[2].clone();
                            }
                            field.name = c[0].clone();
                            if !field.lsb.is_empty() {
                                if let Some(reg) = register.as_mut() {
                                    reg.fields.push(field);
                                }
                            }
                        }
                    }
                } else {
                    panic!("No parse result");
                }
            }
            ParseState::Size => {}
            ParseState::Name => {
                if let Some(parse) = parse_result {
                    match parse {
                        ParseResult::Match(_m) => {
                            //panic!("Not expecting match, got {n:?}")
                        }
                        ParseResult::Capture(c) => {
                            if let Some(reg) = register.as_mut() {
                                reg.name = c[0].clone();
                            }
                        }
                    }
                }
            }
        }
        state = newstate
    }
    if let Some(reg) = register {
        registers.push(reg);
    }

    for reg in registers {
        println!("{}\n", reg);
    }

    Ok(())
}
