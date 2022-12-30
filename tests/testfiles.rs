#[cfg(test)]
mod tests {
    use bl808_sdk_header_tools::*;
    #[test]
    fn test_fragment() {
        let header = r"
struct glb_reg {
    /* 0x0 : soc_info0 */
    union {
        struct {
            uint32_t reserved_0_26 : 27; /* [26: 0],       rsvd,        0x0 */
            uint32_t chip_rdy      : 1;  /* [   27],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } soc_info0;

    /* 0xAE4 : gpio_cfg136 */
    union {
        struct {
            uint32_t reg2_gpio_0_o  : 1; /* [    0],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg136;
";
        let mut lines = header.lines();
        let mut linenum = 0;

        // first line is blank, should still be in nomatch state
        let (state, parseresult) = parse(
            ParseState::NoMatch,
            lines.next().unwrap().to_string(),
            linenum,
        );
        assert_eq!(state, ParseState::NoMatch);
        assert!(parseresult.is_none());
        linenum += 1;

        // 2nd line is "struct glb_reg {"
        let (state, parseresult) = parse(
            ParseState::NoMatch,
            lines.next().unwrap().to_string(),
            linenum,
        );
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
        linenum += 1;

        // 3nd line is "/* 0x0 : soc_info0 */"
        let (state, parseresult) = parse(
            ParseState::BlockName,
            lines.next().unwrap().to_string(),
            linenum,
        );
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
        linenum += 1;

        // 4th line is "union {"
        let (state, parseresult) = parse(
            ParseState::BlockAddr,
            lines.next().unwrap().to_string(),
            linenum,
        );
        assert_eq!(state, ParseState::UnionStr);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "union {");
                }
                ParseResult::Capture(_) => panic!("Should contain match"),
            }
        };
        linenum += 1;

        // 5th line is "        struct {"
        let (state, parseresult) = parse(
            ParseState::UnionStr,
            lines.next().unwrap().to_string(),
            linenum,
        );
        assert_eq!(state, ParseState::StructStr);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "struct {");
                }
                ParseResult::Capture(_) => panic!("Should contain match"),
            }
        };
        linenum += 1;

        // 5th line is "uint32_t reserved_0_26 : 27; /* [26: 0],       rsvd,        0x0 */"
        let (state, parseresult) = parse(
            ParseState::StructStr,
            lines.next().unwrap().to_string(),
            linenum,
        );
        assert_eq!(state, ParseState::StructStr);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(_) => panic!("Should contain capture"),
                ParseResult::Capture(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "reserved_0_26");
                    assert_eq!(r_iter.next().unwrap(), "27");
                    assert_eq!(r_iter.next().unwrap(), "26: 0");
                    assert_eq!(r_iter.next().unwrap(), "rsvd");
                    assert_eq!(r_iter.next().unwrap(), "0x0");
                }
            }
        };
        linenum += 1;

        // 6th line is "uint32_t chip_rdy      : 1;  /* [   27],          r,        0x0 */"
        let (state, parseresult) = parse(
            ParseState::StructStr,
            lines.next().unwrap().to_string(),
            linenum,
        );
        assert_eq!(state, ParseState::StructStr);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(_) => panic!("Should contain capture"),
                ParseResult::Capture(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "chip_rdy");
                    assert_eq!(r_iter.next().unwrap(), "1");
                    assert_eq!(r_iter.next().unwrap(), "27");
                    assert_eq!(r_iter.next().unwrap(), "r");
                    assert_eq!(r_iter.next().unwrap(), "0x0");
                }
            }
        };
        linenum += 1;

        // 7th line is "} BF;"
        let (state, parseresult) = parse(
            ParseState::StructStr,
            lines.next().unwrap().to_string(),
            linenum,
        );
        assert_eq!(state, ParseState::Size);
        assert!(parseresult.is_some());
        linenum += 1;
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "} BF;");
                }
                ParseResult::Capture(_) => panic!("Should contain match"),
            }
        };

        // 8th line is "uint32_t WORD;"
        let (state, parseresult) =
            parse(ParseState::Size, lines.next().unwrap().to_string(), linenum);
        assert_eq!(state, ParseState::Name);
        assert!(parseresult.is_some());
        if let Some(x) = parseresult {
            match x {
                ParseResult::Match(r) => {
                    let mut r_iter = r.iter();
                    assert_eq!(r_iter.next().unwrap(), "uint32_t WORD;");
                }
                ParseResult::Capture(_) => panic!("Should contain match"),
            }
        };
    }
}
