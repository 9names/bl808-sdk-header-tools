#[cfg(test)]
mod tests {
    use bl808_sdk_header_tools::*;

    #[test]
    fn parse_register_comment() {
        let teststring = String::from("    /* 0x0 : soc_info0 */");
        let (state, parseresult) = parse(ParseState::BlockName, teststring, 0);
        assert_eq!(state, ParseState::BlockAddr);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(_) => panic!("Should contain capture"),
                ParseResult::Capture(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "0x0");
                    assert_eq!(r_iter.next().unwrap(), "soc_info0");
                }
            }
        };
    }

    #[test]
    fn parse_register_comment2() {
        let teststring = String::from("    /* 0xA0 : bus_cfg0 */");
        let (state, parseresult) = parse(ParseState::BlockName, teststring, 0);
        assert_eq!(state, ParseState::BlockAddr);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(_) => panic!("Should contain capture"),
                ParseResult::Capture(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "0xA0");
                    assert_eq!(r_iter.next().unwrap(), "bus_cfg0");
                }
            }
        };
    }

    #[test]
    fn parse_register_field() {
        let teststring =
            String::from("uint32_t reserved_0_26 : 27; /* [26: 0],       rsvd,        0x0 */");
        let (state, parseresult) = parse(ParseState::StructStr, teststring, 0);
        assert_eq!(state, ParseState::StructStr);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(_) => panic!("Should contain capture"),
                ParseResult::Capture(r) => {
                    let mut r_iter = r.iter();
                    // assert_eq!(r_iter.next().unwrap(), "uint32_t");
                    assert_eq!(r_iter.next().unwrap(), "reserved_0_26");
                    assert_eq!(r_iter.next().unwrap(), "27");
                    assert_eq!(r_iter.next().unwrap(), "26: 0");
                    assert_eq!(r_iter.next().unwrap(), "rsvd");
                    assert_eq!(r_iter.next().unwrap(), "0x0");
                }
            }
        };
    }

    #[test]
    fn parse_register_field2() {
        let teststring =
            String::from("uint32_t chip_rdy      : 1;  /* [   27],          r,        0x0 */");
        let (state, parseresult) = parse(ParseState::StructStr, teststring, 0);
        assert_eq!(state, ParseState::StructStr);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(_) => panic!("Should contain capture"),
                ParseResult::Capture(r) => {
                    let mut r_iter = r.iter();
                    // assert_eq!(r_iter.next().unwrap(), "uint32_t");
                    assert_eq!(r_iter.next().unwrap(), "chip_rdy");
                    assert_eq!(r_iter.next().unwrap(), "1");
                    assert_eq!(r_iter.next().unwrap(), "   27");
                    assert_eq!(r_iter.next().unwrap(), "r");
                    assert_eq!(r_iter.next().unwrap(), "0x0");
                }
            }
        };
    }

    #[test]
    fn parse_union() {
        let teststring = String::from("    union {");
        let (state, parseresult) = parse(ParseState::BlockAddr, teststring, 0);
        assert_eq!(state, ParseState::UnionStr);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "    union {");
                }
                ParseResult::Capture(r) => panic!("Should contain match"),
            }
        };
    }

    #[test]
    fn parse_struct() {
        let teststring = String::from("        struct {");
        let (state, parseresult) = parse(ParseState::UnionStr, teststring, 0);
        assert_eq!(state, ParseState::StructStr);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "        struct {");
                }
                ParseResult::Capture(r) => panic!("Should contain match"),
            }
        };
    }

    #[test]
    fn parse_peri_struct() {
        let teststring = String::from("struct glb_reg {");
        let (state, parseresult) = parse(ParseState::NoMatch, teststring, 0);
        assert_eq!(state, ParseState::BlockName);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(_) => panic!("Should contain capture"),
                ParseResult::Capture(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "glb_reg");
                }
            }
        };
    }

    #[test]
    fn parse_bf() {
        let teststring = String::from("        } BF;");
        let (state, parseresult) = parse(ParseState::Field, teststring, 0);
        assert_eq!(state, ParseState::Size);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "        } BF;");
                }
                ParseResult::Capture(r) => panic!("Should contain match"),
            }
        };
    }

    #[test]
    fn parse_word() {
        let teststring = String::from("        uint32_t WORD;");
        let (state, parseresult) = parse(ParseState::Size, teststring, 0);
        assert_eq!(state, ParseState::Name);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "        uint32_t WORD;");
                }
                ParseResult::Capture(r) => panic!("Should contain match"),
            }
        };
    }

    #[test]
    fn parse_end_of_struct() {
        let teststring = String::from("    } soc_info0;");
        let (state, parseresult) = parse(ParseState::Name, teststring, 0);
        assert_eq!(state, ParseState::BlockName);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(_) => panic!("Should contain capture"),
                ParseResult::Capture(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "soc_info0");
                }
            }
        };
    }
}
