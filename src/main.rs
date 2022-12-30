use bl808_sdk_header_tools::{parse, ParseState};
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

fn main() -> anyhow::Result<()> {
    let subscriber = FmtSubscriber::builder()
        .with_max_level(Level::TRACE)
        .with_ansi(false)
        .finish();
    tracing::subscriber::set_global_default(subscriber).expect("setting default subscriber failed");
    let f = std::fs::read("sources/headers/glb_clocks.h")?;

    let mut state = ParseState::NoMatch;

    for (linenum, l) in f.split(|b| b == &b'\n').enumerate() {
        let l = String::from_utf8_lossy(l);
        let (newstate, _parse_result) = parse(state, l.to_string(), linenum);
        state = newstate
    }
    Ok(())
}
