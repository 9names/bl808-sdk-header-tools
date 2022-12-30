struct glb_reg {
/* 0x584 : cgen_s1a + cgen_s1 */
    union {
        struct {
            uint32_t cgen_s1_rsvd0   : 1; /* [    0],        r/w,        0x1 */
            uint32_t reserved_1      : 1; /* [    1],       rsvd,        0x0 */
            uint32_t cgen_s1_gpip    : 1; /* [    2],        r/w,        0x1 */
            uint32_t cgen_s1_sec_dbg : 1; /* [    3],        r/w,        0x1 */
            uint32_t cgen_s1_sec_eng : 1; /* [    4],        r/w,        0x1 */
            uint32_t cgen_s1_tz      : 1; /* [    5],        r/w,        0x1 */
            uint32_t cgen_s1_rsvd6   : 1; /* [    6],        r/w,        0x1 */
            uint32_t cgen_s1_ef_ctrl : 1; /* [    7],        r/w,        0x1 */
            uint32_t cgen_s1_rsvd8   : 1; /* [    8],        r/w,        0x1 */
            uint32_t cgen_s1_rsvd9   : 1; /* [    9],        r/w,        0x1 */
            uint32_t cgen_s1_rsvd10  : 1; /* [   10],        r/w,        0x1 */
            uint32_t cgen_s1_sf_ctrl : 1; /* [   11],        r/w,        0x1 */
            uint32_t cgen_s1_dma     : 1; /* [   12],        r/w,        0x0 */
            uint32_t cgen_s1_rsvd13  : 1; /* [   13],        r/w,        0x0 */
            uint32_t cgen_s1_rsvd14  : 1; /* [   14],        r/w,        0x1 */
            uint32_t cgen_s1_rsvd15  : 1; /* [   15],        r/w,        0x1 */
            uint32_t cgen_s1a_uart0  : 1; /* [   16],        r/w,        0x1 */
            uint32_t cgen_s1a_uart1  : 1; /* [   17],        r/w,        0x1 */
            uint32_t cgen_s1a_spi    : 1; /* [   18],        r/w,        0x0 */
            uint32_t cgen_s1a_i2c    : 1; /* [   19],        r/w,        0x0 */
            uint32_t cgen_s1a_pwm    : 1; /* [   20],        r/w,        0x0 */
            uint32_t cgen_s1a_timer  : 1; /* [   21],        r/w,        0x1 */
            uint32_t cgen_s1a_ir     : 1; /* [   22],        r/w,        0x0 */
            uint32_t cgen_s1a_cks    : 1; /* [   23],        r/w,        0x0 */
            uint32_t cgen_s1a_rsvd8  : 1; /* [   24],        r/w,        0x1 */
            uint32_t cgen_s1a_i2c1   : 1; /* [   25],        r/w,        0x1 */
            uint32_t cgen_s1a_uart2  : 1; /* [   26],        r/w,        0x0 */
            uint32_t cgen_s1a_rsvd11 : 1; /* [   27],        r/w,        0x1 */
            uint32_t cgen_s1a_rsvd12 : 1; /* [   28],        r/w,        0x1 */
            uint32_t cgen_s1a_rsvd13 : 1; /* [   29],        r/w,        0x0 */
            uint32_t cgen_s1a_rsvd14 : 1; /* [   30],        r/w,        0x0 */
            uint32_t cgen_s1a_rsvd15 : 1; /* [   31],        r/w,        0x1 */
        } BF;
        uint32_t WORD;
    } cgen_cfg1;

    /* 0x588 : cgen_s1_ext + cgen_s3 */
    union {
        struct {
            uint32_t cgen_s0                 : 1; /* [    0],        r/w,        0x1 */
            uint32_t reserved_1_3            : 3; /* [ 3: 1],       rsvd,        0x0 */
            uint32_t cgen_s2_wifi            : 1; /* [    4],        r/w,        0x1 */
            uint32_t reserved_5_9            : 5; /* [ 9: 5],       rsvd,        0x0 */
            uint32_t cgen_s3_bt_ble2         : 1; /* [   10],        r/w,        0x1 */
            uint32_t cgen_s3_m1542           : 1; /* [   11],        r/w,        0x1 */
            uint32_t reserved_12_15          : 4; /* [15:12],       rsvd,        0x0 */
            uint32_t cgen_s1_ext_emi_misc    : 1; /* [   16],        r/w,        0x1 */
            uint32_t cgen_s1_ext_psram0_ctrl : 1; /* [   17],        r/w,        0x1 */
            uint32_t cgen_s1_ext_psram_ctrl  : 1; /* [   18],        r/w,        0x1 */
            uint32_t cgen_s1_ext_usb         : 1; /* [   19],        r/w,        0x1 */
            uint32_t cgen_s1_ext_mix2        : 1; /* [   20],        r/w,        0x1 */
            uint32_t cgen_s1_ext_audio       : 1; /* [   21],        r/w,        0x1 */
            uint32_t cgen_s1_ext_sdh         : 1; /* [   22],        r/w,        0x1 */
            uint32_t cgen_s1_ext_emac        : 1; /* [   23],        r/w,        0x1 */
            uint32_t cgen_s1_ext_dma2        : 1; /* [   24],        r/w,        0x1 */
            uint32_t cgen_s1_ext_rsvd9       : 1; /* [   25],        r/w,        0x1 */
            uint32_t cgen_s1_ext_rsvd10      : 1; /* [   26],        r/w,        0x1 */
            uint32_t cgen_s1_ext_rsvd11      : 1; /* [   27],        r/w,        0x1 */
            uint32_t reserved_28_31          : 4; /* [31:28],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } cgen_cfg2;

    /* 0x58C : cgen_cfg3 */
    union {
        struct {
            uint32_t cgen_mm_wifipll_160m  : 1;  /* [    0],        r/w,        0x1 */
            uint32_t cgen_mm_wifipll_240m  : 1;  /* [    1],        r/w,        0x1 */
            uint32_t cgen_mm_wifipll_320m  : 1;  /* [    2],        r/w,        0x1 */
            uint32_t cgen_mm_aupll_div1    : 1;  /* [    3],        r/w,        0x1 */
            uint32_t cgen_mm_aupll_div2    : 1;  /* [    4],        r/w,        0x1 */
            uint32_t cgen_emi_cpupll_400m  : 1;  /* [    5],        r/w,        0x1 */
            uint32_t cgen_emi_cpupll_200m  : 1;  /* [    6],        r/w,        0x1 */
            uint32_t cgen_emi_wifipll_320m : 1;  /* [    7],        r/w,        0x1 */
            uint32_t cgen_emi_aupll_div1   : 1;  /* [    8],        r/w,        0x1 */
            uint32_t cgen_top_cpupll_80m   : 1;  /* [    9],        r/w,        0x1 */
            uint32_t cgen_top_cpupll_100m  : 1;  /* [   10],        r/w,        0x1 */
            uint32_t cgen_top_cpupll_160m  : 1;  /* [   11],        r/w,        0x1 */
            uint32_t cgen_top_cpupll_400m  : 1;  /* [   12],        r/w,        0x1 */
            uint32_t cgen_top_wifipll_240m : 1;  /* [   13],        r/w,        0x1 */
            uint32_t cgen_top_wifipll_320m : 1;  /* [   14],        r/w,        0x1 */
            uint32_t cgen_top_aupll_div2   : 1;  /* [   15],        r/w,        0x1 */
            uint32_t cgen_top_aupll_div1   : 1;  /* [   16],        r/w,        0x1 */
            uint32_t reserved_17_31        : 15; /* [31:17],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } cgen_cfg3;
};