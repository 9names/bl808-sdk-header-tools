
struct glb_reg {
    /* 0x0 : soc_info0 */
    union {
        struct {
            uint32_t reserved_0_26 : 27; /* [26: 0],       rsvd,        0x0 */
            uint32_t chip_rdy      : 1;  /* [   27],          r,        0x0 */
            uint32_t glb_id        : 4;  /* [31:28],          r,        0x6 */
        } BF;
        uint32_t WORD;
    } soc_info0;

    /* 0x4  reserved */
    uint8_t RESERVED0x4[76];

    /* 0x50 : core_cfg16 */
    union {
        struct {
            uint32_t np_int_sta0 : 32; /* [31: 0],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } core_cfg16;

    /* 0x54 : core_cfg17 */
    union {
        struct {
            uint32_t np_int_sta1 : 32; /* [31: 0],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } core_cfg17;

    /* 0x58 : core_cfg18 */
    union {
        struct {
            uint32_t np_int_mask0 : 32; /* [31: 0],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } core_cfg18;

    /* 0x5C : core_cfg19 */
    union {
        struct {
            uint32_t np_int_mask1 : 32; /* [31: 0],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } core_cfg19;

    /* 0x60 : core_cfg20 */
    union {
        struct {
            uint32_t np_int_clr0 : 32; /* [31: 0],        w1c,        0x0 */
        } BF;
        uint32_t WORD;
    } core_cfg20;

    /* 0x64 : core_cfg21 */
    union {
        struct {
            uint32_t np_int_clr1 : 32; /* [31: 0],        w1c,        0x0 */
        } BF;
        uint32_t WORD;
    } core_cfg21;

    /* 0x68 : core_cfg22 */
    union {
        struct {
            uint32_t reg_e902_int_en0 : 32; /* [31: 0],        r/w, 0xffffffff */
        } BF;
        uint32_t WORD;
    } core_cfg22;

    /* 0x6C : core_cfg23 */
    union {
        struct {
            uint32_t reg_e902_int_en1 : 32; /* [31: 0],        r/w, 0xffffffff */
        } BF;
        uint32_t WORD;
    } core_cfg23;

    /* 0x70 : core_cfg24 */
    union {
        struct {
            uint32_t sts_e902_int_bus_0 : 32; /* [31: 0],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } core_cfg24;

    /* 0x74 : core_cfg25 */
    union {
        struct {
            uint32_t sts_e902_int_bus_1 : 32; /* [31: 0],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } core_cfg25;

    /* 0x78  reserved */
    uint8_t RESERVED0x78[24];

    /* 0x90 : sys_cfg0 */
    union {
        struct {
            uint32_t reg_pll_en       : 1; /* [    0],        r/w,        0x1 */
            uint32_t reg_fclk_en      : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_hclk_en      : 1; /* [    2],        r/w,        0x1 */
            uint32_t reg_bclk_en      : 1; /* [    3],        r/w,        0x1 */
            uint32_t reserved_4_5     : 2; /* [ 5: 4],       rsvd,        0x0 */
            uint32_t hbn_root_clk_sel : 2; /* [ 7: 6],          r,        0x0 */
            uint32_t reg_hclk_div     : 8; /* [15: 8],        r/w,        0x0 */
            uint32_t reg_bclk_div     : 8; /* [23:16],        r/w,        0x0 */
            uint32_t reserved_24_31   : 8; /* [31:24],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } sys_cfg0;

    /* 0x94 : sys_cfg1 */
    union {
        struct {
            uint32_t reg_bclk_div_act_pulse     : 1; /* [    0],        w1p,        0x0 */
            uint32_t reg_bclk_div_bypass        : 1; /* [    1],        r/w,        0x0 */
            uint32_t sts_bclk_prot_done         : 1; /* [    2],          r,        0x1 */
            uint32_t reserved_3                 : 1; /* [    3],       rsvd,        0x0 */
            uint32_t reg_bclk_sw_done_cnt       : 4; /* [ 7: 4],        r/w,        0x5 */
            uint32_t reserved_8_15              : 8; /* [15: 8],       rsvd,        0x0 */
            uint32_t reg_pico_clk_div_act_pulse : 1; /* [   16],        w1p,        0x0 */
            uint32_t reg_pico_clk_div_bypass    : 1; /* [   17],        r/w,        0x0 */
            uint32_t sts_pico_clk_prot_done     : 1; /* [   18],          r,        0x1 */
            uint32_t reserved_19                : 1; /* [   19],       rsvd,        0x0 */
            uint32_t reg_pico_clk_sw_done_cnt   : 4; /* [23:20],        r/w,        0x5 */
            uint32_t fclk_sw_state              : 3; /* [26:24],          r,        0x0 */
            uint32_t reserved_27_31             : 5; /* [31:27],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } sys_cfg1;

    /* 0x98  reserved */
    uint8_t RESERVED0x98[8];

    /* 0xA0 : bus_cfg0 */
    union {
        struct {
            uint32_t rg_apb2_pck_force : 16; /* [15: 0],        r/w,     0xffff */
            uint32_t reserved_16_31    : 16; /* [31:16],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } bus_cfg0;

    /* 0xa4  reserved */
    uint8_t RESERVED0xa4[60];

    /* 0xE0 : emi_cfg0 */
    union {
        struct {
            uint32_t reserved_0_8    : 9; /* [ 8: 0],       rsvd,        0x0 */
            uint32_t reg_emi_clk_en  : 1; /* [    9],        r/w,        0x1 */
            uint32_t reserved_10_13  : 4; /* [13:10],       rsvd,        0x0 */
            uint32_t reg_emi_clk_sel : 3; /* [16:14],        r/w,        0x0 */
            uint32_t reserved_17_21  : 5; /* [21:17],       rsvd,        0x0 */
            uint32_t reg_emi_clk_div : 2; /* [23:22],        r/w,        0x0 */
            uint32_t reserved_24_31  : 8; /* [31:24],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } emi_cfg0;

    /* 0xe4  reserved */
    uint8_t RESERVED0xe4[12];

    /* 0xF0 : rtc_cfg0 */
    union {
        struct {
            uint32_t cpu_rtc_div    : 17; /* [16: 0],        r/w,       0x10 */
            uint32_t reserved_17    : 1;  /* [   17],       rsvd,        0x0 */
            uint32_t cpu_rtc_en     : 1;  /* [   18],        r/w,        0x0 */
            uint32_t cpu_rtc_sel    : 1;  /* [   19],        r/w,        0x1 */
            uint32_t reserved_20_31 : 12; /* [31:20],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } rtc_cfg0;

    /* 0xf4  reserved */
    uint8_t RESERVED0xf4[28];

    /* 0x110 : adc_cfg0 */
    union {
        struct {
            uint32_t gpadc_32m_clk_div : 6;  /* [ 5: 0],        r/w,        0x2 */
            uint32_t reserved_6        : 1;  /* [    6],       rsvd,        0x0 */
            uint32_t gpadc_32m_clk_sel : 1;  /* [    7],        r/w,        0x0 */
            uint32_t gpadc_32m_div_en  : 1;  /* [    8],        r/w,        0x1 */
            uint32_t reserved_9_31     : 23; /* [31: 9],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } adc_cfg0;

    /* 0x114  reserved */
    uint8_t RESERVED0x114[12];

    /* 0x120 : dac_cfg0 */
    union {
        struct {
            uint32_t gpdaca_rstn_ana : 1;  /* [    0],        r/w,        0x1 */
            uint32_t gpdacb_rstn_ana : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reserved_2_6    : 5;  /* [ 6: 2],       rsvd,        0x0 */
            uint32_t gpdac_test_en   : 1;  /* [    7],        r/w,        0x0 */
            uint32_t gpdac_ref_sel   : 1;  /* [    8],        r/w,        0x0 */
            uint32_t gpdac_test_sel  : 3;  /* [11: 9],        r/w,        0x0 */
            uint32_t reserved_12_23  : 12; /* [23:12],       rsvd,        0x0 */
            uint32_t gpdac_reserved  : 8;  /* [31:24],        r/w,        0xf */
        } BF;
        uint32_t WORD;
    } dac_cfg0;

    /* 0x124 : dac_cfg1 */
    union {
        struct {
            uint32_t gpdac_a_en     : 1;  /* [    0],        r/w,        0x0 */
            uint32_t gpdac_ioa_en   : 1;  /* [    1],        r/w,        0x0 */
            uint32_t reserved_2_17  : 16; /* [17: 2],       rsvd,        0x0 */
            uint32_t gpdac_a_rng    : 2;  /* [19:18],        r/w,        0x3 */
            uint32_t gpdac_a_outmux : 3;  /* [22:20],        r/w,        0x0 */
            uint32_t reserved_23_31 : 9;  /* [31:23],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } dac_cfg1;

    /* 0x128 : dac_cfg2 */
    union {
        struct {
            uint32_t gpdac_b_en     : 1;  /* [    0],        r/w,        0x0 */
            uint32_t gpdac_iob_en   : 1;  /* [    1],        r/w,        0x0 */
            uint32_t reserved_2_17  : 16; /* [17: 2],       rsvd,        0x0 */
            uint32_t gpdac_b_rng    : 2;  /* [19:18],        r/w,        0x3 */
            uint32_t gpdac_b_outmux : 3;  /* [22:20],        r/w,        0x0 */
            uint32_t reserved_23_31 : 9;  /* [31:23],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } dac_cfg2;

    /* 0x12C : dac_cfg3 */
    union {
        struct {
            uint32_t gpdac_b_data   : 10; /* [ 9: 0],        r/w,        0x0 */
            uint32_t reserved_10_15 : 6;  /* [15:10],       rsvd,        0x0 */
            uint32_t gpdac_a_data   : 10; /* [25:16],        r/w,        0x0 */
            uint32_t reserved_26_31 : 6;  /* [31:26],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } dac_cfg3;

    /* 0x130 : dma_cfg0 */
    union {
        struct {
            uint32_t reserved_0_23 : 24; /* [23: 0],       rsvd,        0x0 */
            uint32_t dma_clk_en    : 8;  /* [31:24],        r/w,       0xff */
        } BF;
        uint32_t WORD;
    } dma_cfg0;

    /* 0x134 : dma_cfg1 */
    union {
        struct {
            uint32_t reserved_0_23 : 24; /* [23: 0],       rsvd,        0x0 */
            uint32_t dma2_clk_en   : 8;  /* [31:24],        r/w,       0xff */
        } BF;
        uint32_t WORD;
    } dma_cfg1;

    /* 0x138 : dma_cfg2 */
    union {
        struct {
            uint32_t reg_dma_cn_sel : 32; /* [31: 0],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } dma_cfg2;

    /* 0x13c  reserved */
    uint8_t RESERVED0x13c[4];

    /* 0x140 : ir_cfg0 */
    union {
        struct {
            uint32_t reserved_0_15  : 16; /* [15: 0],       rsvd,        0x0 */
            uint32_t ir_clk_div     : 6;  /* [21:16],        r/w,        0xf */
            uint32_t reserved_22    : 1;  /* [   22],       rsvd,        0x0 */
            uint32_t ir_clk_en      : 1;  /* [   23],        r/w,        0x1 */
            uint32_t reserved_24_31 : 8;  /* [31:24],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } ir_cfg0;

    /* 0x144 : ir_cfg1 */
    union {
        struct {
            uint32_t led_din_reg          : 1;  /* [    0],        r/w,        0x0 */
            uint32_t led_din_sel          : 1;  /* [    1],        r/w,        0x0 */
            uint32_t led_din_polarity_sel : 1;  /* [    2],        r/w,        0x0 */
            uint32_t reserved_3           : 1;  /* [    3],       rsvd,        0x0 */
            uint32_t leddrv_ibias         : 4;  /* [ 7: 4],        r/w,        0x8 */
            uint32_t ir_rx_gpio_sel       : 4;  /* [11: 8],        r/w,        0x0 */
            uint32_t reserved_12_30       : 19; /* [30:12],       rsvd,        0x0 */
            uint32_t pu_leddrv            : 1;  /* [   31],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } ir_cfg1;

    /* 0x148  reserved */
    uint8_t RESERVED0x148[8];

    /* 0x150 : uart_cfg0 */
    union {
        struct {
            uint32_t uart_clk_div      : 3;  /* [ 2: 0],        r/w,        0x7 */
            uint32_t reserved_3        : 1;  /* [    3],       rsvd,        0x0 */
            uint32_t uart_clk_en       : 1;  /* [    4],        r/w,        0x1 */
            uint32_t reserved_5_6      : 2;  /* [ 6: 5],       rsvd,        0x0 */
            uint32_t hbn_uart_clk_sel  : 1;  /* [    7],          r,        0x0 */
            uint32_t reserved_8_21     : 14; /* [21: 8],       rsvd,        0x0 */
            uint32_t hbn_uart_clk_sel2 : 1;  /* [   22],          r,        0x0 */
            uint32_t reserved_23       : 1;  /* [   23],       rsvd,        0x0 */
            uint32_t uart2_io_sel      : 1;  /* [   24],        r/w,        0x0 */
            uint32_t reserved_25_31    : 7;  /* [31:25],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uart_cfg0;

    /* 0x154 : uart_cfg1 */
    union {
        struct {
            uint32_t uart_sig_0_sel : 4; /* [ 3: 0],        r/w,        0x0 */
            uint32_t uart_sig_1_sel : 4; /* [ 7: 4],        r/w,        0x1 */
            uint32_t uart_sig_2_sel : 4; /* [11: 8],        r/w,        0x2 */
            uint32_t uart_sig_3_sel : 4; /* [15:12],        r/w,        0x3 */
            uint32_t uart_sig_4_sel : 4; /* [19:16],        r/w,        0x4 */
            uint32_t uart_sig_5_sel : 4; /* [23:20],        r/w,        0x5 */
            uint32_t uart_sig_6_sel : 4; /* [27:24],        r/w,        0x6 */
            uint32_t uart_sig_7_sel : 4; /* [31:28],        r/w,        0x7 */
        } BF;
        uint32_t WORD;
    } uart_cfg1;

    /* 0x158 : uart_cfg2 */
    union {
        struct {
            uint32_t uart_sig_8_sel  : 4;  /* [ 3: 0],        r/w,        0x8 */
            uint32_t uart_sig_9_sel  : 4;  /* [ 7: 4],        r/w,        0x9 */
            uint32_t uart_sig_10_sel : 4;  /* [11: 8],        r/w,        0xa */
            uint32_t uart_sig_11_sel : 4;  /* [15:12],        r/w,        0xb */
            uint32_t reserved_16_31  : 16; /* [31:16],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uart_cfg2;

    /* 0x15c  reserved */
    uint8_t RESERVED0x15c[20];

    /* 0x170 : sf_cfg0 */
    union {
        struct {
            uint32_t reserved_0_7   : 8;  /* [ 7: 0],       rsvd,        0x0 */
            uint32_t sf_clk_div     : 3;  /* [10: 8],        r/w,        0x3 */
            uint32_t sf_clk_en      : 1;  /* [   11],        r/w,        0x1 */
            uint32_t sf_clk_sel     : 2;  /* [13:12],        r/w,        0x2 */
            uint32_t sf_clk_sel2    : 2;  /* [15:14],        r/w,        0x0 */
            uint32_t reserved_16_31 : 16; /* [31:16],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } sf_cfg0;

    /* 0x174  reserved */
    uint8_t RESERVED0x174[12];

    /* 0x180 : i2c_cfg0 */
    union {
        struct {
            uint32_t reserved_0_15  : 16; /* [15: 0],       rsvd,        0x0 */
            uint32_t i2c_clk_div    : 8;  /* [23:16],        r/w,       0xff */
            uint32_t i2c_clk_en     : 1;  /* [   24],        r/w,        0x1 */
            uint32_t i2c_clk_sel    : 1;  /* [   25],        r/w,        0x0 */
            uint32_t reserved_26_31 : 6;  /* [31:26],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } i2c_cfg0;

    /* 0x184  reserved */
    uint8_t RESERVED0x184[12];

    /* 0x190 : i2s_cfg0 */
    union {
        struct {
            uint32_t reg_i2s_ref_clk_div    : 6;  /* [ 5: 0],        r/w,        0x1 */
            uint32_t reg_i2s_di_ref_clk_sel : 1;  /* [    6],        r/w,        0x0 */
            uint32_t reg_i2s_ref_clk_en     : 1;  /* [    7],        r/w,        0x1 */
            uint32_t reg_i2s_do_ref_clk_sel : 1;  /* [    8],        r/w,        0x0 */
            uint32_t reserved_9_31          : 23; /* [31: 9],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } i2s_cfg0;

    /* 0x194  reserved */
    uint8_t RESERVED0x194[28];

    /* 0x1B0 : spi_cfg0 */
    union {
        struct {
            uint32_t spi_clk_div    : 5;  /* [ 4: 0],        r/w,        0x3 */
            uint32_t reserved_5_7   : 3;  /* [ 7: 5],       rsvd,        0x0 */
            uint32_t spi_clk_en     : 1;  /* [    8],        r/w,        0x1 */
            uint32_t spi_clk_sel    : 1;  /* [    9],        r/w,        0x0 */
            uint32_t reserved_10_15 : 6;  /* [15:10],       rsvd,        0x0 */
            uint32_t spi_swap_set   : 4;  /* [19:16],        r/w,        0x0 */
            uint32_t reserved_20_31 : 12; /* [31:20],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } spi_cfg0;

    /* 0x1b4  reserved */
    uint8_t RESERVED0x1b4[12];

    /* 0x1C0 : qdec_cfg0 */
    union {
        struct {
            uint32_t reserved_0_31 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } qdec_cfg0;

    /* 0x1c4  reserved */
    uint8_t RESERVED0x1c4[12];

    /* 0x1D0 : pwm_cfg0 */
    union {
        struct {
            uint32_t reg_pwm1_io_sel : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_pwm2_io_sel : 1;  /* [    1],        r/w,        0x0 */
            uint32_t reserved_2_31   : 30; /* [31: 2],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } pwm_cfg0;

    /* 0x1d4  reserved */
    uint8_t RESERVED0x1d4[12];

    /* 0x1E0 : pdm_cfg0 */
    union {
        struct {
            uint32_t reg_pdm_io_sel : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_31  : 31; /* [31: 1],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } pdm_cfg0;

    /* 0x1e4  reserved */
    uint8_t RESERVED0x1e4[108];

    /* 0x250 : dig_clk_cfg0 */
    union {
        struct {
            uint32_t dig_32k_div            : 11; /* [10: 0],        r/w,      0x3e8 */
            uint32_t reserved_11            : 1;  /* [   11],       rsvd,        0x0 */
            uint32_t dig_32k_en             : 1;  /* [   12],        r/w,        0x1 */
            uint32_t dig_32k_comp           : 1;  /* [   13],        r/w,        0x0 */
            uint32_t reserved_14_15         : 2;  /* [15:14],       rsvd,        0x0 */
            uint32_t dig_512k_div           : 7;  /* [22:16],        r/w,       0x3e */
            uint32_t reserved_23            : 1;  /* [   23],       rsvd,        0x0 */
            uint32_t dig_512k_en            : 1;  /* [   24],        r/w,        0x1 */
            uint32_t dig_512k_comp          : 1;  /* [   25],        r/w,        0x1 */
            uint32_t reserved_26_27         : 2;  /* [27:26],       rsvd,        0x0 */
            uint32_t dig_clk_src_sel        : 2;  /* [29:28],        r/w,        0x0 */
            uint32_t reserved_30            : 1;  /* [   30],       rsvd,        0x0 */
            uint32_t reg_en_platform_wakeup : 1;  /* [   31],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } dig_clk_cfg0;

    /* 0x254 : dig_clk_cfg1 */
    union {
        struct {
            uint32_t reg_mm_muxpll_160m_sel  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_mm_muxpll_240m_sel  : 1;  /* [    1],        r/w,        0x0 */
            uint32_t reg_mm_muxpll_320m_sel  : 1;  /* [    2],        r/w,        0x0 */
            uint32_t reserved_3_7            : 5;  /* [ 7: 3],       rsvd,        0x0 */
            uint32_t reg_top_muxpll_80m_sel  : 2;  /* [ 9: 8],        r/w,        0x0 */
            uint32_t reg_top_muxpll_160m_sel : 2;  /* [11:10],        r/w,        0x0 */
            uint32_t reserved_12_31          : 20; /* [31:12],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } dig_clk_cfg1;

    /* 0x258 : dig_clk_cfg2 */
    union {
        struct {
            uint32_t chip_clk_out_0_sel  : 2;  /* [ 1: 0],        r/w,        0x0 */
            uint32_t chip_clk_out_1_sel  : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t chip_clk_out_2_sel  : 2;  /* [ 5: 4],        r/w,        0x0 */
            uint32_t chip_clk_out_3_sel  : 2;  /* [ 7: 6],        r/w,        0x0 */
            uint32_t chip_clk_out_0_en   : 1;  /* [    8],        r/w,        0x1 */
            uint32_t chip_clk_out_1_en   : 1;  /* [    9],        r/w,        0x1 */
            uint32_t chip_clk_out_2_en   : 1;  /* [   10],        r/w,        0x1 */
            uint32_t chip_clk_out_3_en   : 1;  /* [   11],        r/w,        0x1 */
            uint32_t gpio_tmr_clk_sel    : 2;  /* [13:12],        r/w,        0x0 */
            uint32_t gpio_mm_tmr_clk_sel : 2;  /* [15:14],        r/w,        0x0 */
            uint32_t reserved_16_31      : 16; /* [31:16],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } dig_clk_cfg2;

    /* 0x25C : dig_clk_cfg3 */
    union {
        struct {
            uint32_t dsi_txclkesc_sel : 1;  /* [    0],        r/w,        0x0 */
            uint32_t csi_txclkesc_sel : 1;  /* [    1],        r/w,        0x0 */
            uint32_t reserved_2_31    : 30; /* [31: 2],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } dig_clk_cfg3;

    /* 0x260 : rf_cfg0 */
    union {
        struct {
            uint32_t reserved_0_8           : 9;  /* [ 8: 0],       rsvd,        0x0 */
            uint32_t cfg_inv_rf2_test_clk_o : 1;  /* [    9],        r/w,        0x1 */
            uint32_t reserved_10_31         : 22; /* [31:10],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } rf_cfg0;

    /* 0x264  reserved */
    uint8_t RESERVED0x264[124];

    /* 0x2E0 : dbg_cfg0 */
    union {
        struct {
            uint32_t reg_dbg_ll_ctrl : 30; /* [29: 0],        r/w,        0x0 */
            uint32_t reg_dbg_ll_sel  : 2;  /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } dbg_cfg0;

    /* 0x2E4 : dbg_cfg1 */
    union {
        struct {
            uint32_t reg_dbg_lh_ctrl : 30; /* [29: 0],        r/w,        0x0 */
            uint32_t reg_dbg_lh_sel  : 2;  /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } dbg_cfg1;

    /* 0x2E8 : dbg_cfg2 */
    union {
        struct {
            uint32_t reg_dbg_hl_ctrl : 30; /* [29: 0],        r/w,        0x0 */
            uint32_t reg_dbg_hl_sel  : 2;  /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } dbg_cfg2;

    /* 0x2EC : dbg_cfg3 */
    union {
        struct {
            uint32_t reg_dbg_hh_ctrl : 30; /* [29: 0],        r/w,        0x0 */
            uint32_t reg_dbg_hh_sel  : 2;  /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } dbg_cfg3;

    /* 0x2F0 : dbg_cfg4 */
    union {
        struct {
            uint32_t debug_oe : 1;  /* [    0],        r/w,        0x0 */
            uint32_t debug_i  : 31; /* [31: 1],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } dbg_cfg4;

    /* 0x2f4  reserved */
    uint8_t RESERVED0x2f4[12];

    /* 0x300 : mbist_cfg0 */
    union {
        struct {
            uint32_t mbist_mode    : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_31 : 31; /* [31: 1],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mbist_cfg0;

    /* 0x304  reserved */
    uint8_t RESERVED0x304[28];

    /* 0x320 : bmx_cfg0 */
    union {
        struct {
            uint32_t reg_bmx_timeout_en  : 5; /* [ 4: 0],        r/w,        0x0 */
            uint32_t reg_bmx_arb_mode    : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_bmx_timeout_clr : 1; /* [    6],        r/w,        0x0 */
            uint32_t reg_h_wthre_hw2ext  : 2; /* [ 8: 7],        r/w,        0x0 */
            uint32_t bmx_busy_option_dis : 1; /* [    9],        r/w,        0x0 */
            uint32_t bmx_gating_dis      : 1; /* [   10],        r/w,        0x0 */
            uint32_t sts_bmx_timeout_sts : 5; /* [15:11],          r,        0x0 */
            uint32_t pds_apb_cfg         : 8; /* [23:16],        r/w,        0x0 */
            uint32_t hbn_apb_cfg         : 8; /* [31:24],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } bmx_cfg0;

    /* 0x324 : bmx_cfg1 */
    union {
        struct {
            uint32_t reg_bmx_berr_int_en : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_mcu_berr_int_en : 1;  /* [    1],        r/w,        0x0 */
            uint32_t reserved_2_15       : 14; /* [15: 2],       rsvd,        0x0 */
            uint32_t reg_bmx_qos_cpu     : 1;  /* [   16],        r/w,        0x0 */
            uint32_t reg_bmx_qos_sdu     : 1;  /* [   17],        r/w,        0x0 */
            uint32_t reg_bmx_qos_sec0    : 1;  /* [   18],        r/w,        0x0 */
            uint32_t reg_bmx_qos_sec1    : 1;  /* [   19],        r/w,        0x0 */
            uint32_t reg_bmx_qos_sec2    : 1;  /* [   20],        r/w,        0x0 */
            uint32_t reg_bmx_qos_dma     : 1;  /* [   21],        r/w,        0x0 */
            uint32_t reg_bmx_qos_cci     : 1;  /* [   22],        r/w,        0x0 */
            uint32_t reg_bmx_qos_pldma   : 1;  /* [   23],        r/w,        0x0 */
            uint32_t reg_bmx_qos_blem    : 1;  /* [   24],        r/w,        0x0 */
            uint32_t reg_bmx_qos_emacA   : 1;  /* [   25],        r/w,        0x0 */
            uint32_t reg_bmx_qos_dma2    : 1;  /* [   26],        r/w,        0x0 */
            uint32_t reg_bmx_qos_sdhm    : 1;  /* [   27],        r/w,        0x0 */
            uint32_t bmx_dbg_sel         : 4;  /* [31:28],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } bmx_cfg1;

    /* 0x328 : bmx_cfg2 */
    union {
        struct {
            uint32_t reg_bmx_berr_en : 14; /* [13: 0],        r/w,     0x3fff */
            uint32_t reserved_14_15  : 2;  /* [15:14],       rsvd,        0x0 */
            uint32_t reg_mcu_berr_en : 1;  /* [   16],        r/w,        0x1 */
            uint32_t reserved_17_31  : 15; /* [31:17],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } bmx_cfg2;

    /* 0x32C : bmx_cfg3 */
    union {
        struct {
            uint32_t reg_bmx_berr_clr   : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_bmx_berr_last  : 1; /* [    1],        r/w,        0x0 */
            uint32_t reserved_2_7       : 6; /* [ 7: 2],       rsvd,        0x0 */
            uint32_t reg_mcu_berr_clr   : 1; /* [    8],        r/w,        0x0 */
            uint32_t reg_mcu_berr_last  : 1; /* [    9],        r/w,        0x0 */
            uint32_t reserved_10_15     : 6; /* [15:10],       rsvd,        0x0 */
            uint32_t sts_bmx_berr       : 1; /* [   16],          r,        0x0 */
            uint32_t sts_mcu_berr       : 1; /* [   17],          r,        0x0 */
            uint32_t reserved_18_23     : 6; /* [23:18],       rsvd,        0x0 */
            uint32_t sts_bmx_berr_write : 1; /* [   24],          r,        0x0 */
            uint32_t sts_mcu_berr_write : 1; /* [   25],          r,        0x0 */
            uint32_t reserved_26_31     : 6; /* [31:26],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } bmx_cfg3;

    /* 0x330 : bmx_cfg4 */
    union {
        struct {
            uint32_t sts_bmx_berr_src : 14; /* [13: 0],          r,        0x0 */
            uint32_t reserved_14_15   : 2;  /* [15:14],       rsvd,        0x0 */
            uint32_t sts_mcu_berr_src : 1;  /* [   16],          r,        0x0 */
            uint32_t reserved_17_23   : 7;  /* [23:17],       rsvd,        0x0 */
            uint32_t sts_mcu_berr_id  : 8;  /* [31:24],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } bmx_cfg4;

    /* 0x334 : bmx_cfg5 */
    union {
        struct {
            uint32_t sts_bmx_berr_addr : 32; /* [31: 0],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } bmx_cfg5;

    /* 0x338 : bmx_cfg6 */
    union {
        struct {
            uint32_t sts_mcu_berr_addr : 32; /* [31: 0],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } bmx_cfg6;

    /* 0x33c  reserved */
    uint8_t RESERVED0x33c[4];

    /* 0x340 : audio_cfg0 */
    union {
        struct {
            uint32_t reg_audio_pdm_clk_div : 6; /* [ 5: 0],        r/w,        0x3 */
            uint32_t reserved_6            : 1; /* [    6],       rsvd,        0x0 */
            uint32_t reg_audio_pdm_clk_en  : 1; /* [    7],        r/w,        0x1 */
            uint32_t reg_audio_adc_clk_div : 6; /* [13: 8],        r/w,        0x3 */
            uint32_t reserved_14           : 1; /* [   14],       rsvd,        0x0 */
            uint32_t reg_audio_adc_clk_en  : 1; /* [   15],        r/w,        0x1 */
            uint32_t reg_audio_dac_clk_div : 6; /* [21:16],        r/w,        0x3 */
            uint32_t reserved_22           : 1; /* [   22],       rsvd,        0x0 */
            uint32_t reg_audio_dac_clk_en  : 1; /* [   23],        r/w,        0x1 */
            uint32_t reserved_24_30        : 7; /* [30:24],       rsvd,        0x0 */
            uint32_t reg_audio_auto_div_en : 1; /* [   31],        r/w,        0x1 */
        } BF;
        uint32_t WORD;
    } audio_cfg0;

    /* 0x344 : audio_cfg1 */
    union {
        struct {
            uint32_t reg_padc_clk_div : 10; /* [ 9: 0],        r/w,       0x60 */
            uint32_t reg_padc_clk_en  : 1;  /* [   10],        r/w,        0x1 */
            uint32_t reserved_11_31   : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } audio_cfg1;

    /* 0x348  reserved */
    uint8_t RESERVED0x348[72];

    /* 0x390 : eth_cfg0 */
    union {
        struct {
            uint32_t reserved_0_4          : 5;  /* [ 4: 0],       rsvd,        0x0 */
            uint32_t cfg_sel_eth_ref_clk_o : 1;  /* [    5],        r/w,        0x0 */
            uint32_t cfg_inv_eth_ref_clk_o : 1;  /* [    6],        r/w,        0x1 */
            uint32_t cfg_inv_eth_tx_clk    : 1;  /* [    7],        r/w,        0x1 */
            uint32_t reserved_8_9          : 2;  /* [ 9: 8],       rsvd,        0x0 */
            uint32_t cfg_inv_eth_rx_clk    : 1;  /* [   10],        r/w,        0x1 */
            uint32_t reserved_11_31        : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } eth_cfg0;

    /* 0x394  reserved */
    uint8_t RESERVED0x394[140];

    /* 0x420 : cam_cfg0 */
    union {
        struct {
            uint32_t reserved_0_26           : 27; /* [26: 0],       rsvd,        0x0 */
            uint32_t reg_cam_ref_clk_en      : 1;  /* [   27],        r/w,        0x0 */
            uint32_t reg_cam_ref_clk_src_sel : 2;  /* [29:28],        r/w,        0x0 */
            uint32_t reg_cam_ref_clk_div     : 2;  /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } cam_cfg0;

    /* 0x424  reserved */
    uint8_t RESERVED0x424[12];

    /* 0x430 : sdh_cfg0 */
    union {
        struct {
            uint32_t reserved_0_8    : 9;  /* [ 8: 0],       rsvd,        0x0 */
            uint32_t reg_sdh_clk_div : 3;  /* [11: 9],        r/w,        0x0 */
            uint32_t reg_sdh_clk_sel : 1;  /* [   12],        r/w,        0x0 */
            uint32_t reg_sdh_clk_en  : 1;  /* [   13],        r/w,        0x1 */
            uint32_t reserved_14_31  : 18; /* [31:14],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } sdh_cfg0;

    /* 0x434  reserved */
    uint8_t RESERVED0x434[92];

    /* 0x490 : tzc_cfg0 */
    union {
        struct {
            uint32_t reserved_0_11           : 12; /* [11: 0],       rsvd,        0x0 */
            uint32_t tzc_glb_pwron_rst_lock  : 1;  /* [   12],          r,        0x0 */
            uint32_t tzc_glb_cpu_reset_lock  : 1;  /* [   13],          r,        0x0 */
            uint32_t tzc_glb_sys_reset_lock  : 1;  /* [   14],          r,        0x0 */
            uint32_t tzc_glb_cpu2_reset_lock : 1;  /* [   15],          r,        0x0 */
            uint32_t reserved_16_20          : 5;  /* [20:16],       rsvd,        0x0 */
            uint32_t tzc_glb_pwr_lock        : 1;  /* [   21],          r,        0x0 */
            uint32_t tzc_glb_int_lock        : 1;  /* [   22],          r,        0x0 */
            uint32_t reserved_23             : 1;  /* [   23],       rsvd,        0x0 */
            uint32_t tzc_glb_cpupll_lock     : 1;  /* [   24],          r,        0x0 */
            uint32_t tzc_glb_misc_lock       : 1;  /* [   25],          r,        0x0 */
            uint32_t tzc_glb_sram_lock       : 1;  /* [   26],          r,        0x0 */
            uint32_t tzc_glb_swrst_lock      : 1;  /* [   27],          r,        0x0 */
            uint32_t tzc_glb_bmx_lock        : 1;  /* [   28],          r,        0x0 */
            uint32_t tzc_glb_dbg_lock        : 1;  /* [   29],          r,        0x0 */
            uint32_t tzc_glb_mbist_lock      : 1;  /* [   30],          r,        0x0 */
            uint32_t tzc_glb_clk_lock        : 1;  /* [   31],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } tzc_cfg0;

    /* 0x494  reserved */
    uint8_t RESERVED0x494[124];

    /* 0x510 : glb_parm_cfg0 */
    union {
        struct {
            uint32_t reg_bd_en              : 1; /* [    0],        r/w,        0x0 */
            uint32_t reserved_1             : 1; /* [    1],       rsvd,        0x0 */
            uint32_t uart_swap_set          : 4; /* [ 5: 2],        r/w,        0x0 */
            uint32_t reserved_6_7           : 2; /* [ 7: 6],       rsvd,        0x0 */
            uint32_t swap_sflash_io_3_io_0  : 1; /* [    8],        r/w,        0x1 */
            uint32_t sel_embedded_sflash    : 1; /* [    9],        r/w,        0x1 */
            uint32_t reserved_10            : 1; /* [   10],       rsvd,        0x0 */
            uint32_t reg_sel_psram0_x16     : 1; /* [   11],        r/w,        0x1 */
            uint32_t reg_spi_0_master_mode  : 1; /* [   12],        r/w,        0x0 */
            uint32_t reg_spi_0_swap         : 1; /* [   13],        r/w,        0x0 */
            uint32_t reg_sel_dbi_type_c     : 1; /* [   14],        r/w,        0x0 */
            uint32_t ant_switch_sel         : 1; /* [   15],        r/w,        0x0 */
            uint32_t reserved_16            : 1; /* [   16],       rsvd,        0x0 */
            uint32_t p1_adc_test_with_cci   : 1; /* [   17],        r/w,        0x0 */
            uint32_t p2_dac_test_with_cci   : 1; /* [   18],        r/w,        0x0 */
            uint32_t p3_cci_use_io_2_5      : 1; /* [   19],        r/w,        0x0 */
            uint32_t p4_adc_test_with_jtag  : 1; /* [   20],        r/w,        0x0 */
            uint32_t p5_dac_test_with_jtag  : 1; /* [   21],        r/w,        0x0 */
            uint32_t p6_sdh_use_io_0_5      : 1; /* [   22],        r/w,        0x0 */
            uint32_t p7_jtag_use_io_2_5     : 1; /* [   23],        r/w,        0x0 */
            uint32_t reserved_24            : 1; /* [   24],       rsvd,        0x0 */
            uint32_t rf1_test_mode          : 2; /* [26:25],        r/w,        0x0 */
            uint32_t reg_mm_spi_master_mode : 1; /* [   27],        r/w,        0x0 */
            uint32_t reg_mm_spi_swap        : 1; /* [   28],        r/w,        0x0 */
            uint32_t audio_test_mode        : 1; /* [   29],        r/w,        0x0 */
            uint32_t sel_rf_audio_test      : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } glb_parm_cfg0;

    /* 0x514  reserved */
    uint8_t RESERVED0x514[12];

    /* 0x520 : debug_cfg0 */
    union {
        struct {
            uint32_t reserved_0_31 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } debug_cfg0;

    /* 0x524 : debug_cfg1 */
    union {
        struct {
            uint32_t reserved_0_19      : 20; /* [19: 0],       rsvd,        0x0 */
            uint32_t debug_ndreset_gate : 1;  /* [   20],        r/w,        0x0 */
            uint32_t reserved_21_31     : 11; /* [31:21],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } debug_cfg1;

    /* 0x528  reserved */
    uint8_t RESERVED0x528[8];

    /* 0x530 : reset_sts0 */
    union {
        struct {
            uint32_t top_reset_recorder     : 7;  /* [ 6: 0],          r,        0x0 */
            uint32_t clr_top_reset_recorder : 1;  /* [    7],        r/w,        0x0 */
            uint32_t reserved_8_31          : 24; /* [31: 8],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } reset_sts0;

    /* 0x534  reserved */
    uint8_t RESERVED0x534[12];

    /* 0x540 : swrst_s1_ext + swrst_s3 + swrst_s2 */
    union {
        struct {
            uint32_t swrst_s00                : 1; /* [    0],        r/w,        0x0 */
            uint32_t swrst_s01                : 1; /* [    1],        r/w,        0x0 */
            uint32_t reserved_2_3             : 2; /* [ 3: 2],       rsvd,        0x0 */
            uint32_t swrst_s20                : 1; /* [    4],        r/w,        0x0 */
            uint32_t reserved_5_7             : 3; /* [ 7: 5],       rsvd,        0x0 */
            uint32_t swrst_s30                : 1; /* [    8],        r/w,        0x0 */
            uint32_t swrst_s31                : 1; /* [    9],        r/w,        0x0 */
            uint32_t swrst_s32                : 1; /* [   10],        r/w,        0x0 */
            uint32_t swrst_s33                : 1; /* [   11],        r/w,        0x0 */
            uint32_t reserved_12_15           : 4; /* [15:12],       rsvd,        0x0 */
            uint32_t swrst_s1_ext_emi_misc    : 1; /* [   16],        r/w,        0x0 */
            uint32_t swrst_s1_ext_psram0_ctrl : 1; /* [   17],        r/w,        0x0 */
            uint32_t swrst_s1_ext_psram1_ctrl : 1; /* [   18],        r/w,        0x0 */
            uint32_t swrst_s1_ext_usb         : 1; /* [   19],        r/w,        0x0 */
            uint32_t swrst_s1_ext_mix2        : 1; /* [   20],        r/w,        0x0 */
            uint32_t swrst_s1_ext_audio       : 1; /* [   21],        r/w,        0x0 */
            uint32_t swrst_s1_ext_sdh         : 1; /* [   22],        r/w,        0x0 */
            uint32_t swrst_s1_ext_emac        : 1; /* [   23],        r/w,        0x0 */
            uint32_t swrst_s1_ext_dma2        : 1; /* [   24],        r/w,        0x0 */
            uint32_t reserved_25_31           : 7; /* [31:25],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } swrst_cfg0;

    /* 0x544 : swrst_s1 */
    union {
        struct {
            uint32_t swrst_s10  : 1; /* [    0],        r/w,        0x0 */
            uint32_t swrst_s11  : 1; /* [    1],        r/w,        0x0 */
            uint32_t swrst_s12  : 1; /* [    2],        r/w,        0x0 */
            uint32_t swrst_s13  : 1; /* [    3],        r/w,        0x0 */
            uint32_t swrst_s14  : 1; /* [    4],        r/w,        0x0 */
            uint32_t swrst_s15  : 1; /* [    5],        r/w,        0x0 */
            uint32_t swrst_s16  : 1; /* [    6],        r/w,        0x0 */
            uint32_t swrst_s17  : 1; /* [    7],        r/w,        0x0 */
            uint32_t swrst_s18  : 1; /* [    8],        r/w,        0x0 */
            uint32_t swrst_s19  : 1; /* [    9],        r/w,        0x0 */
            uint32_t swrst_s1a  : 1; /* [   10],        r/w,        0x0 */
            uint32_t swrst_s1b  : 1; /* [   11],        r/w,        0x0 */
            uint32_t swrst_s1c  : 1; /* [   12],        r/w,        0x0 */
            uint32_t swrst_s1d  : 1; /* [   13],        r/w,        0x0 */
            uint32_t swrst_s1e  : 1; /* [   14],        r/w,        0x0 */
            uint32_t swrst_s1f  : 1; /* [   15],        r/w,        0x0 */
            uint32_t swrst_s1a0 : 1; /* [   16],        r/w,        0x0 */
            uint32_t swrst_s1a1 : 1; /* [   17],        r/w,        0x0 */
            uint32_t swrst_s1a2 : 1; /* [   18],        r/w,        0x0 */
            uint32_t swrst_s1a3 : 1; /* [   19],        r/w,        0x0 */
            uint32_t swrst_s1a4 : 1; /* [   20],        r/w,        0x0 */
            uint32_t swrst_s1a5 : 1; /* [   21],        r/w,        0x0 */
            uint32_t swrst_s1a6 : 1; /* [   22],        r/w,        0x0 */
            uint32_t swrst_s1a7 : 1; /* [   23],        r/w,        0x0 */
            uint32_t swrst_s1a8 : 1; /* [   24],        r/w,        0x0 */
            uint32_t swrst_s1a9 : 1; /* [   25],        r/w,        0x0 */
            uint32_t swrst_s1aa : 1; /* [   26],        r/w,        0x0 */
            uint32_t swrst_s1ab : 1; /* [   27],        r/w,        0x0 */
            uint32_t swrst_s1ac : 1; /* [   28],        r/w,        0x0 */
            uint32_t swrst_s1ad : 1; /* [   29],        r/w,        0x0 */
            uint32_t swrst_s1ae : 1; /* [   30],        r/w,        0x0 */
            uint32_t swrst_s1af : 1; /* [   31],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } swrst_cfg1;

    /* 0x548 : swrst_cfg2 */
    union {
        struct {
            uint32_t reg_ctrl_pwron_rst     : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_ctrl_cpu_reset     : 1;  /* [    1],        r/w,        0x0 */
            uint32_t reg_ctrl_sys_reset     : 1;  /* [    2],        r/w,        0x0 */
            uint32_t reg_ctrl_pico_reset    : 1;  /* [    3],        r/w,        0x0 */
            uint32_t reg_ctrl_cpu2_reset    : 1;  /* [    4],        r/w,        0x1 */
            uint32_t reg_ctrl_chip_reset    : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reg_wl_wdt_reset_mm_en : 1;  /* [    6],        r/w,        0x0 */
            uint32_t reg_mmwdt2wl_rst_msk   : 1;  /* [    7],        r/w,        0x1 */
            uint32_t reserved_8_23          : 16; /* [23: 8],       rsvd,        0x0 */
            uint32_t pka_clk_sel            : 1;  /* [   24],        r/w,        0x0 */
            uint32_t reserved_25_27         : 3;  /* [27:25],       rsvd,        0x0 */
            uint32_t reg_ctrl_reset_dummy   : 4;  /* [31:28],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } swrst_cfg2;

    /* 0x54C : Disable hreset */
    union {
        struct {
            uint32_t reserved_0_1   : 2; /* [ 1: 0],       rsvd,        0x0 */
            uint32_t disrst_s12     : 1; /* [    2],        r/w,        0x0 */
            uint32_t reserved_3     : 1; /* [    3],       rsvd,        0x0 */
            uint32_t disrst_s14     : 1; /* [    4],        r/w,        0x0 */
            uint32_t reserved_5_7   : 3; /* [ 7: 5],       rsvd,        0x0 */
            uint32_t disrst_s18     : 1; /* [    8],        r/w,        0x0 */
            uint32_t reserved_9_10  : 2; /* [10: 9],       rsvd,        0x0 */
            uint32_t disrst_s1b     : 1; /* [   11],        r/w,        0x0 */
            uint32_t reserved_12_15 : 4; /* [15:12],       rsvd,        0x0 */
            uint32_t disrst_s1a0    : 1; /* [   16],        r/w,        0x0 */
            uint32_t disrst_s1a1    : 1; /* [   17],        r/w,        0x0 */
            uint32_t disrst_s1a2    : 1; /* [   18],        r/w,        0x0 */
            uint32_t disrst_s1a3    : 1; /* [   19],        r/w,        0x0 */
            uint32_t disrst_s1a4    : 1; /* [   20],        r/w,        0x0 */
            uint32_t disrst_s1a5    : 1; /* [   21],        r/w,        0x0 */
            uint32_t disrst_s1a6    : 1; /* [   22],        r/w,        0x0 */
            uint32_t disrst_s1a7    : 1; /* [   23],        r/w,        0x0 */
            uint32_t disrst_s1a8    : 1; /* [   24],        r/w,        0x0 */
            uint32_t disrst_s1a9    : 1; /* [   25],        r/w,        0x0 */
            uint32_t disrst_s1aa    : 1; /* [   26],        r/w,        0x0 */
            uint32_t reserved_27_31 : 5; /* [31:27],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } swrst_cfg3;

    /* 0x550  reserved */
    uint8_t RESERVED0x550[48];

    /* 0x580 : cgen_m */
    union {
        struct {
            uint32_t cgen_m_cpu    : 1;  /* [    0],        r/w,        0x1 */
            uint32_t cgen_m_sdu    : 1;  /* [    1],        r/w,        0x1 */
            uint32_t cgen_m_sec    : 1;  /* [    2],        r/w,        0x1 */
            uint32_t cgen_m_dma    : 1;  /* [    3],        r/w,        0x1 */
            uint32_t cgen_m_cci    : 1;  /* [    4],        r/w,        0x1 */
            uint32_t reserved_5_31 : 27; /* [31: 5],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } cgen_cfg0;

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

    /* 0x590  reserved */
    uint8_t RESERVED0x590[48];

    /* 0x5C0 : hw_rsv0 */
    union {
        struct {
            uint32_t rsvd_31_0 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } hw_rsv0;

    /* 0x5C4 : hw_rsv1 */
    union {
        struct {
            uint32_t rsvd_31_0 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } hw_rsv1;

    /* 0x5C8 : hw_rsv2 */
    union {
        struct {
            uint32_t rsvd_31_0 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } hw_rsv2;

    /* 0x5CC : hw_rsv3 */
    union {
        struct {
            uint32_t rsvd_31_0 : 32; /* [31: 0],       rsvd, 0xffffffff */
        } BF;
        uint32_t WORD;
    } hw_rsv3;

    /* 0x5d0  reserved */
    uint8_t RESERVED0x5d0[48];

    /* 0x600 : reg_sram_ret */
    union {
        struct {
            uint32_t cr_mcu_cache_ret : 2;  /* [ 1: 0],        r/w,        0x0 */
            uint32_t cr_mcu_hsram_ret : 4;  /* [ 5: 2],        r/w,        0x0 */
            uint32_t reserved_6_7     : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t cr_wb_ram_ret    : 1;  /* [    8],        r/w,        0x0 */
            uint32_t cr_misc_ram_ret  : 2;  /* [10: 9],        r/w,        0x0 */
            uint32_t reserved_11_31   : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } sram_cfg0;

    /* 0x604 : reg_sram_slp */
    union {
        struct {
            uint32_t cr_mcu_cache_slp : 2;  /* [ 1: 0],        r/w,        0x0 */
            uint32_t cr_mcu_hsram_slp : 4;  /* [ 5: 2],        r/w,        0x0 */
            uint32_t cr_mcu_rom_slp   : 2;  /* [ 7: 6],        r/w,        0x0 */
            uint32_t cr_wb_ram_slp    : 1;  /* [    8],        r/w,        0x0 */
            uint32_t cr_misc_ram_slp  : 2;  /* [10: 9],        r/w,        0x0 */
            uint32_t reserved_11_31   : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } sram_cfg1;

    /* 0x608 : reg_sram_parm */
    union {
        struct {
            uint32_t cr_mcu_cache_dvse : 1;  /* [    0],        r/w,        0x0 */
            uint32_t cr_mcu_hsram_dvse : 1;  /* [    1],        r/w,        0x0 */
            uint32_t cr_mcu_rom_dvse   : 1;  /* [    2],        r/w,        0x0 */
            uint32_t cr_wb_ram_dvse    : 1;  /* [    3],        r/w,        0x0 */
            uint32_t cr_misc_ram_dvse  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t cr_ocram_dvse     : 1;  /* [    5],        r/w,        0x0 */
            uint32_t cr_wram_dvse      : 1;  /* [    6],        r/w,        0x0 */
            uint32_t reserved_7        : 1;  /* [    7],       rsvd,        0x0 */
            uint32_t cr_mcu_cache_nap  : 1;  /* [    8],        r/w,        0x0 */
            uint32_t cr_mcu_hsram_nap  : 1;  /* [    9],        r/w,        0x0 */
            uint32_t reserved_10       : 1;  /* [   10],       rsvd,        0x0 */
            uint32_t cr_wb_ram_nap     : 1;  /* [   11],        r/w,        0x0 */
            uint32_t cr_misc_ram_nap   : 1;  /* [   12],        r/w,        0x0 */
            uint32_t cr_ocram_nap      : 1;  /* [   13],        r/w,        0x0 */
            uint32_t cr_wram_nap       : 1;  /* [   14],        r/w,        0x0 */
            uint32_t reserved_15_31    : 17; /* [31:15],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } sram_cfg2;

    /* 0x60C : sram_cfg3 */
    union {
        struct {
            uint32_t em_sel         : 8;  /* [ 7: 0],        r/w,        0x3 */
            uint32_t reserved_8_27  : 20; /* [27: 8],       rsvd,        0x0 */
            uint32_t reg_vram_sel   : 2;  /* [29:28],        r/w,        0x0 */
            uint32_t reserved_30_31 : 2;  /* [31:30],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } sram_cfg3;

    /* 0x610 : reg_sram_parm2 */
    union {
        struct {
            uint32_t cr_mcu_cache_dvs : 4; /* [ 3: 0],        r/w,        0xc */
            uint32_t cr_mcu_hsram_dvs : 4; /* [ 7: 4],        r/w,        0xc */
            uint32_t cr_mcu_rom_dvs   : 4; /* [11: 8],        r/w,        0xc */
            uint32_t cr_wb_ram_dvs    : 4; /* [15:12],        r/w,        0xc */
            uint32_t cr_misc_ram_dvs  : 4; /* [19:16],        r/w,        0xc */
            uint32_t cr_ocram_dvs     : 4; /* [23:20],        r/w,        0xc */
            uint32_t cr_wram_dvs      : 4; /* [27:24],        r/w,        0xc */
            uint32_t reserved_28_31   : 4; /* [31:28],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } sram_cfg4;

    /* 0x614  reserved */
    uint8_t RESERVED0x614[12];

    /* 0x620 : psram_cfg0 */
    union {
        struct {
            uint32_t reserved_0_26      : 27; /* [26: 0],       rsvd,        0x0 */
            uint32_t reg_psramB_clk_en  : 1;  /* [   27],        r/w,        0x1 */
            uint32_t reg_psramB_clk_sel : 2;  /* [29:28],        r/w,        0x0 */
            uint32_t reg_psramB_clk_div : 2;  /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } psram_cfg0;

    /* 0x624  reserved */
    uint8_t RESERVED0x624[156];

    /* 0x6C0 : ldo28cis */
    union {
        struct {
            uint32_t pu_ldo28cis           : 1; /* [    0],        r/w,        0x1 */
            uint32_t ldo28cis_bypass       : 1; /* [    1],        r/w,        0x0 */
            uint32_t ldo28cis_pulldown     : 1; /* [    2],        r/w,        0x0 */
            uint32_t ldo28cis_pulldown_sel : 1; /* [    3],        r/w,        0x0 */
            uint32_t ldo28cis_bm           : 3; /* [ 6: 4],        r/w,        0x5 */
            uint32_t reserved_7            : 1; /* [    7],       rsvd,        0x0 */
            uint32_t ldo28cis_cc           : 3; /* [10: 8],        r/w,        0x3 */
            uint32_t ldo28cis_ocp_out      : 1; /* [   11],          r,        0x0 */
            uint32_t ldo28cis_ocp_th       : 3; /* [14:12],        r/w,        0x3 */
            uint32_t ldo28cis_ocp_en       : 1; /* [   15],        r/w,        0x1 */
            uint32_t ldo28cis_sstart_delay : 3; /* [18:16],        r/w,        0x2 */
            uint32_t ldo28cis_sstart_en    : 1; /* [   19],        r/w,        0x1 */
            uint32_t ldo28cis_vout_sel     : 4; /* [23:20],        r/w,        0x3 */
            uint32_t ldo28cis_vout_trim    : 4; /* [27:24],        r/w,        0x8 */
            uint32_t reserved_28_31        : 4; /* [31:28],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } ldo28cis;

    /* 0x6C4 : ldo18io */
    union {
        struct {
            uint32_t reserved_0_31 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } ldo18io;

    /* 0x6C8 : ldo15cis */
    union {
        struct {
            uint32_t pu_ldo15cis           : 1; /* [    0],        r/w,        0x1 */
            uint32_t ldo15cis_bypass       : 1; /* [    1],        r/w,        0x0 */
            uint32_t ldo15cis_pulldown     : 1; /* [    2],        r/w,        0x0 */
            uint32_t ldo15cis_pulldown_sel : 1; /* [    3],        r/w,        0x0 */
            uint32_t ldo15cis_bm           : 3; /* [ 6: 4],        r/w,        0x2 */
            uint32_t reserved_7            : 1; /* [    7],       rsvd,        0x0 */
            uint32_t ldo15cis_cc           : 3; /* [10: 8],        r/w,        0x3 */
            uint32_t ldo15cis_ocp_out      : 1; /* [   11],          r,        0x0 */
            uint32_t ldo15cis_ocp_th       : 3; /* [14:12],        r/w,        0x3 */
            uint32_t ldo15cis_ocp_en       : 1; /* [   15],        r/w,        0x1 */
            uint32_t ldo15cis_sstart_delay : 3; /* [18:16],        r/w,        0x2 */
            uint32_t ldo15cis_sstart_en    : 1; /* [   19],        r/w,        0x1 */
            uint32_t ldo15cis_vout_sel     : 4; /* [23:20],        r/w,        0x8 */
            uint32_t ldo15cis_vout_trim    : 4; /* [27:24],        r/w,        0x8 */
            uint32_t reserved_28_31        : 4; /* [31:28],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } ldo15cis;

    /* 0x6CC : ldo18flash */
    union {
        struct {
            uint32_t pu_ldo18flash           : 1; /* [    0],        r/w,        0x0 */
            uint32_t ldo18flash_bypass       : 1; /* [    1],        r/w,        0x0 */
            uint32_t ldo18flash_pulldown     : 1; /* [    2],        r/w,        0x0 */
            uint32_t ldo18flash_pulldown_sel : 1; /* [    3],        r/w,        0x0 */
            uint32_t ldo18flash_bm           : 3; /* [ 6: 4],        r/w,        0x3 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t ldo18flash_cc           : 3; /* [10: 8],        r/w,        0x3 */
            uint32_t ldo18flash_ocp_out      : 1; /* [   11],          r,        0x0 */
            uint32_t ldo18flash_ocp_th       : 3; /* [14:12],        r/w,        0x3 */
            uint32_t ldo18flash_ocp_en       : 1; /* [   15],        r/w,        0x1 */
            uint32_t ldo18flash_sstart_delay : 3; /* [18:16],        r/w,        0x3 */
            uint32_t ldo18flash_sstart_en    : 1; /* [   19],        r/w,        0x1 */
            uint32_t ldo18flash_vout_sel     : 4; /* [23:20],        r/w,        0x3 */
            uint32_t ldo18flash_vout_trim    : 4; /* [27:24],        r/w,        0x7 */
            uint32_t reserved_28_31          : 4; /* [31:28],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } ldo18flash;

    /* 0x6D0 : ldo12uhs */
    union {
        struct {
            uint32_t pu_ldo12uhs           : 1; /* [    0],        r/w,        0x0 */
            uint32_t ldo12uhs_bypass       : 1; /* [    1],        r/w,        0x0 */
            uint32_t ldo12uhs_pulldown     : 1; /* [    2],        r/w,        0x0 */
            uint32_t ldo12uhs_pulldown_sel : 1; /* [    3],        r/w,        0x0 */
            uint32_t ldo12uhs_bm           : 3; /* [ 6: 4],        r/w,        0x2 */
            uint32_t reserved_7            : 1; /* [    7],       rsvd,        0x0 */
            uint32_t ldo12uhs_cc           : 3; /* [10: 8],        r/w,        0x3 */
            uint32_t ldo12uhs_ocp_out      : 1; /* [   11],          r,        0x0 */
            uint32_t ldo12uhs_ocp_th       : 3; /* [14:12],        r/w,        0x3 */
            uint32_t ldo12uhs_ocp_en       : 1; /* [   15],        r/w,        0x1 */
            uint32_t ldo12uhs_sstart_delay : 3; /* [18:16],        r/w,        0x2 */
            uint32_t ldo12uhs_sstart_en    : 1; /* [   19],        r/w,        0x1 */
            uint32_t ldo12uhs_vout_sel     : 4; /* [23:20],        r/w,        0x3 */
            uint32_t ldo12uhs_vout_trim    : 4; /* [27:24],        r/w,        0x8 */
            uint32_t reserved_28_31        : 4; /* [31:28],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } ldo12uhs;

    /* 0x6d4  reserved */
    uint8_t RESERVED0x6d4[28];

    /* 0x6F0 : proc_mon */
    union {
        struct {
            uint32_t pu_proc_mon         : 1;  /* [    0],        r/w,        0x0 */
            uint32_t osc_en_rvt          : 1;  /* [    1],        r/w,        0x0 */
            uint32_t osc_en_lvt          : 1;  /* [    2],        r/w,        0x0 */
            uint32_t osc_sel             : 1;  /* [    3],        r/w,        0x0 */
            uint32_t rstn_ringcount      : 1;  /* [    4],        r/w,        0x0 */
            uint32_t rstn_refcount       : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_7        : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t refcount_div_onehot : 4;  /* [11: 8],        r/w,        0x4 */
            uint32_t ring_freq           : 16; /* [27:12],          r,        0x0 */
            uint32_t ring_freq_rdy       : 1;  /* [   28],          r,        0x0 */
            uint32_t reserved_29_31      : 3;  /* [31:29],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } proc_mon;

    /* 0x6f4  reserved */
    uint8_t RESERVED0x6f4[12];

    /* 0x700 : dll_cfg0 */
    union {
        struct {
            uint32_t reserved_0_31 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } dll_cfg0;

    /* 0x704  reserved */
    uint8_t RESERVED0x704[140];

    /* 0x790 : mipi_pll_cfg0 */
    union {
        struct {
            uint32_t mipipll_sdm_rstb  : 1;  /* [    0],        r/w,        0x1 */
            uint32_t reserved_1        : 1;  /* [    1],       rsvd,        0x0 */
            uint32_t mipipll_fbdv_rstb : 1;  /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_4      : 2;  /* [ 4: 3],       rsvd,        0x0 */
            uint32_t pu_mipipll_fbdv   : 1;  /* [    5],        r/w,        0x1 */
            uint32_t reserved_6_7      : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t pu_mipipll_cp     : 1;  /* [    8],        r/w,        0x1 */
            uint32_t pu_mipipll_sfreg  : 1;  /* [    9],        r/w,        0x0 */
            uint32_t pu_mipipll        : 1;  /* [   10],        r/w,        0x0 */
            uint32_t reserved_11_31    : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mipi_pll_cfg0;

    /* 0x794 : mipi_pll_cfg1 */
    union {
        struct {
            uint32_t mipipll_even_div_ratio : 7; /* [ 6: 0],        r/w,       0x32 */
            uint32_t mipipll_even_div_en    : 1; /* [    7],        r/w,        0x0 */
            uint32_t mipipll_refdiv_ratio   : 4; /* [11: 8],        r/w,        0x2 */
            uint32_t reserved_12_15         : 4; /* [15:12],       rsvd,        0x0 */
            uint32_t mipipll_refclk_sel     : 2; /* [17:16],        r/w,        0x0 */
            uint32_t reserved_18_19         : 2; /* [19:18],       rsvd,        0x0 */
            uint32_t mipipll_vg11_sel       : 2; /* [21:20],        r/w,        0x1 */
            uint32_t reserved_22_23         : 2; /* [23:22],       rsvd,        0x0 */
            uint32_t mipipll_vg13_sel       : 2; /* [25:24],        r/w,        0x1 */
            uint32_t reserved_26_31         : 6; /* [31:26],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mipi_pll_cfg1;

    /* 0x798 : mipi_pll_cfg2 */
    union {
        struct {
            uint32_t mipipll_sel_cp_bias   : 1;  /* [    0],        r/w,        0x1 */
            uint32_t reserved_1_3          : 3;  /* [ 3: 1],       rsvd,        0x0 */
            uint32_t mipipll_icp_5u        : 2;  /* [ 5: 4],        r/w,        0x3 */
            uint32_t mipipll_icp_1u        : 2;  /* [ 7: 6],        r/w,        0x0 */
            uint32_t mipipll_int_frac_sw   : 1;  /* [    8],        r/w,        0x0 */
            uint32_t mipipll_cp_startup_en : 1;  /* [    9],        r/w,        0x1 */
            uint32_t mipipll_cp_opamp_en   : 1;  /* [   10],        r/w,        0x1 */
            uint32_t mipipll_cp_ota_en     : 1;  /* [   11],        r/w,        0x1 */
            uint32_t mipipll_pfd_en        : 1;  /* [   12],        r/w,        0x1 */
            uint32_t reserved_13_31        : 19; /* [31:13],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mipi_pll_cfg2;

    /* 0x79C : mipi_pll_cfg3 */
    union {
        struct {
            uint32_t mipipll_c4_en        : 1;  /* [    0],        r/w,        0x1 */
            uint32_t reserved_1_3         : 3;  /* [ 3: 1],       rsvd,        0x0 */
            uint32_t mipipll_r4           : 2;  /* [ 5: 4],        r/w,        0x1 */
            uint32_t reserved_6_7         : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t mipipll_r4_short     : 1;  /* [    8],        r/w,        0x0 */
            uint32_t reserved_9_11        : 3;  /* [11: 9],       rsvd,        0x0 */
            uint32_t mipipll_c3           : 2;  /* [13:12],        r/w,        0x2 */
            uint32_t mipipll_cz           : 2;  /* [15:14],        r/w,        0x2 */
            uint32_t mipipll_rz           : 3;  /* [18:16],        r/w,        0x1 */
            uint32_t mipipll_lf_test_en   : 1;  /* [   19],        r/w,        0x0 */
            uint32_t mipipll_fast_lock_en : 1;  /* [   20],        r/w,        0x1 */
            uint32_t reserved_21_31       : 11; /* [31:21],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mipi_pll_cfg3;

    /* 0x7A0 : mipi_pll_cfg4 */
    union {
        struct {
            uint32_t mipipll_sel_sample_clk  : 2;  /* [ 1: 0],        r/w,        0x1 */
            uint32_t reserved_2_3            : 2;  /* [ 3: 2],       rsvd,        0x0 */
            uint32_t mipipll_sel_fb_clk      : 2;  /* [ 5: 4],        r/w,        0x1 */
            uint32_t reserved_6_7            : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t mipipll_lock_det_en     : 1;  /* [    8],        r/w,        0x1 */
            uint32_t mipipll_lock_clk_sel    : 2;  /* [10: 9],        r/w,        0x1 */
            uint32_t reserved_11             : 1;  /* [   11],       rsvd,        0x0 */
            uint32_t mipipll_lock_clk_inv_en : 1;  /* [   12],        r/w,        0x0 */
            uint32_t reserved_13_14          : 2;  /* [14:13],       rsvd,        0x0 */
            uint32_t mipipll_lock_win_sel    : 2;  /* [16:15],        r/w,        0x1 */
            uint32_t reserved_17_31          : 15; /* [31:17],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mipi_pll_cfg4;

    /* 0x7A4 : mipi_pll_cfg5 */
    union {
        struct {
            uint32_t mipipll_vco_speed          : 3;  /* [ 2: 0],        r/w,        0x5 */
            uint32_t mipipll_vco_vdd_ctrl       : 2;  /* [ 4: 3],        r/w,        0x2 */
            uint32_t mipipll_vco_vdd_ctrl_extra : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6                 : 1;  /* [    6],       rsvd,        0x0 */
            uint32_t mipipll_vco_postdiv_sel    : 3;  /* [ 9: 7],        r/w,        0x0 */
            uint32_t mipipll_vco_postdiv_clk_en : 1;  /* [   10],        r/w,        0x1 */
            uint32_t reserved_11_31             : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mipi_pll_cfg5;

    /* 0x7A8 : mipi_pll_cfg6 */
    union {
        struct {
            uint32_t mipipll_sdmin      : 19; /* [18: 0],        r/w,    0x25800 */
            uint32_t reserved_19_23     : 5;  /* [23:19],       rsvd,        0x0 */
            uint32_t mipipll_sdm_bypass : 1;  /* [   24],        r/w,        0x0 */
            uint32_t reserved_25_31     : 7;  /* [31:25],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mipi_pll_cfg6;

    /* 0x7AC : mipi_pll_cfg7 */
    union {
        struct {
            uint32_t mipipll_sdm_order_sel : 1;  /* [    0],        r/w,        0x1 */
            uint32_t mipipll_sdm_dith_sel  : 2;  /* [ 2: 1],        r/w,        0x0 */
            uint32_t reserved_3_31         : 29; /* [31: 3],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mipi_pll_cfg7;

    /* 0x7B0 : mipi_pll_cfg8 */
    union {
        struct {
            uint32_t mipipll_dc_tp_out_en    : 1;  /* [    0],        r/w,        0x0 */
            uint32_t mipipll_ten             : 1;  /* [    1],        r/w,        0x0 */
            uint32_t mipipll_ten_sfreg       : 1;  /* [    2],        r/w,        0x0 */
            uint32_t reserved_3              : 1;  /* [    3],       rsvd,        0x0 */
            uint32_t mipipll_dten_ckin       : 1;  /* [    4],        r/w,        0x0 */
            uint32_t mipipll_dten_fref       : 1;  /* [    5],        r/w,        0x0 */
            uint32_t mipipll_dten_fsdm       : 1;  /* [    6],        r/w,        0x0 */
            uint32_t mipipll_dten_pupll      : 1;  /* [    7],        r/w,        0x0 */
            uint32_t mipipll_dten_pll_locked : 1;  /* [    8],        r/w,        0x0 */
            uint32_t reserved_9              : 1;  /* [    9],       rsvd,        0x0 */
            uint32_t mipipll_dtest_pull_down : 1;  /* [   10],        r/w,        0x1 */
            uint32_t reserved_11_31          : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mipi_pll_cfg8;

    /* 0x7B4 : mipi_pll_cfg9 */
    union {
        struct {
            uint32_t mipipll_ssc_en            : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_3              : 3;  /* [ 3: 1],       rsvd,        0x0 */
            uint32_t mipipll_ssc_cnt           : 8;  /* [11: 4],        r/w,       0x64 */
            uint32_t mipipll_ssc_gain          : 3;  /* [14:12],        r/w,        0x5 */
            uint32_t reserved_15               : 1;  /* [   15],       rsvd,        0x0 */
            uint32_t mipipll_ssc_start_gate_en : 1;  /* [   16],        r/w,        0x1 */
            uint32_t reserved_17_31            : 15; /* [31:17],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } mipi_pll_cfg9;

    /* 0x7b8  reserved */
    uint8_t RESERVED0x7b8[24];

    /* 0x7D0 : uhs_pll_cfg0 */
    union {
        struct {
            uint32_t uhspll_sdm_rstb  : 1;  /* [    0],        r/w,        0x1 */
            uint32_t reserved_1       : 1;  /* [    1],       rsvd,        0x0 */
            uint32_t uhspll_fbdv_rstb : 1;  /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_4     : 2;  /* [ 4: 3],       rsvd,        0x0 */
            uint32_t pu_uhspll_fbdv   : 1;  /* [    5],        r/w,        0x1 */
            uint32_t reserved_6_7     : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t pu_uhspll_cp     : 1;  /* [    8],        r/w,        0x1 */
            uint32_t pu_uhspll_sfreg  : 1;  /* [    9],        r/w,        0x0 */
            uint32_t pu_uhspll        : 1;  /* [   10],        r/w,        0x0 */
            uint32_t reserved_11_31   : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uhs_pll_cfg0;

    /* 0x7D4 : uhs_pll_cfg1 */
    union {
        struct {
            uint32_t uhspll_even_div_ratio : 7; /* [ 6: 0],        r/w,       0x54 */
            uint32_t uhspll_even_div_en    : 1; /* [    7],        r/w,        0x0 */
            uint32_t uhspll_refdiv_ratio   : 4; /* [11: 8],        r/w,        0x2 */
            uint32_t reserved_12_15        : 4; /* [15:12],       rsvd,        0x0 */
            uint32_t uhspll_refclk_sel     : 2; /* [17:16],        r/w,        0x0 */
            uint32_t reserved_18_19        : 2; /* [19:18],       rsvd,        0x0 */
            uint32_t uhspll_vg11_sel       : 2; /* [21:20],        r/w,        0x1 */
            uint32_t reserved_22_23        : 2; /* [23:22],       rsvd,        0x0 */
            uint32_t uhspll_vg13_sel       : 2; /* [25:24],        r/w,        0x1 */
            uint32_t reserved_26_31        : 6; /* [31:26],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uhs_pll_cfg1;

    /* 0x7D8 : uhs_pll_cfg2 */
    union {
        struct {
            uint32_t uhspll_sel_cp_bias   : 1;  /* [    0],        r/w,        0x1 */
            uint32_t reserved_1_3         : 3;  /* [ 3: 1],       rsvd,        0x0 */
            uint32_t uhspll_icp_5u        : 2;  /* [ 5: 4],        r/w,        0x3 */
            uint32_t uhspll_icp_1u        : 2;  /* [ 7: 6],        r/w,        0x0 */
            uint32_t uhspll_int_frac_sw   : 1;  /* [    8],        r/w,        0x0 */
            uint32_t uhspll_cp_startup_en : 1;  /* [    9],        r/w,        0x1 */
            uint32_t uhspll_cp_opamp_en   : 1;  /* [   10],        r/w,        0x1 */
            uint32_t uhspll_cp_ota_en     : 1;  /* [   11],        r/w,        0x1 */
            uint32_t uhspll_pfd_en        : 1;  /* [   12],        r/w,        0x1 */
            uint32_t reserved_13_31       : 19; /* [31:13],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uhs_pll_cfg2;

    /* 0x7DC : uhs_pll_cfg3 */
    union {
        struct {
            uint32_t uhspll_c4_en        : 1;  /* [    0],        r/w,        0x1 */
            uint32_t reserved_1_3        : 3;  /* [ 3: 1],       rsvd,        0x0 */
            uint32_t uhspll_r4           : 2;  /* [ 5: 4],        r/w,        0x1 */
            uint32_t reserved_6_7        : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t uhspll_r4_short     : 1;  /* [    8],        r/w,        0x0 */
            uint32_t reserved_9_11       : 3;  /* [11: 9],       rsvd,        0x0 */
            uint32_t uhspll_c3           : 2;  /* [13:12],        r/w,        0x2 */
            uint32_t uhspll_cz           : 2;  /* [15:14],        r/w,        0x2 */
            uint32_t uhspll_rz           : 3;  /* [18:16],        r/w,        0x1 */
            uint32_t uhspll_lf_test_en   : 1;  /* [   19],        r/w,        0x0 */
            uint32_t uhspll_fast_lock_en : 1;  /* [   20],        r/w,        0x1 */
            uint32_t reserved_21_31      : 11; /* [31:21],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uhs_pll_cfg3;

    /* 0x7E0 : uhs_pll_cfg4 */
    union {
        struct {
            uint32_t uhspll_sel_sample_clk  : 2;  /* [ 1: 0],        r/w,        0x1 */
            uint32_t reserved_2_3           : 2;  /* [ 3: 2],       rsvd,        0x0 */
            uint32_t uhspll_sel_fb_clk      : 2;  /* [ 5: 4],        r/w,        0x1 */
            uint32_t reserved_6_7           : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t uhspll_lock_det_en     : 1;  /* [    8],        r/w,        0x1 */
            uint32_t uhspll_lock_clk_sel    : 2;  /* [10: 9],        r/w,        0x1 */
            uint32_t reserved_11            : 1;  /* [   11],       rsvd,        0x0 */
            uint32_t uhspll_lock_clk_inv_en : 1;  /* [   12],        r/w,        0x0 */
            uint32_t reserved_13_14         : 2;  /* [14:13],       rsvd,        0x0 */
            uint32_t uhspll_lock_win_sel    : 2;  /* [16:15],        r/w,        0x1 */
            uint32_t reserved_17_31         : 15; /* [31:17],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uhs_pll_cfg4;

    /* 0x7E4 : uhs_pll_cfg5 */
    union {
        struct {
            uint32_t uhspll_vco_speed          : 3;  /* [ 2: 0],        r/w,        0x7 */
            uint32_t uhspll_vco_vdd_ctrl       : 2;  /* [ 4: 3],        r/w,        0x3 */
            uint32_t uhspll_vco_vdd_ctrl_extra : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6                : 1;  /* [    6],       rsvd,        0x0 */
            uint32_t uhspll_vco_postdiv_sel    : 3;  /* [ 9: 7],        r/w,        0x0 */
            uint32_t uhspll_vco_postdiv_clk_en : 1;  /* [   10],        r/w,        0x1 */
            uint32_t reserved_11_31            : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uhs_pll_cfg5;

    /* 0x7E8 : uhs_pll_cfg6 */
    union {
        struct {
            uint32_t uhspll_sdmin      : 19; /* [18: 0],        r/w,    0x34800 */
            uint32_t reserved_19_23    : 5;  /* [23:19],       rsvd,        0x0 */
            uint32_t uhspll_sdm_bypass : 1;  /* [   24],        r/w,        0x0 */
            uint32_t reserved_25_31    : 7;  /* [31:25],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uhs_pll_cfg6;

    /* 0x7EC : uhs_pll_cfg7 */
    union {
        struct {
            uint32_t uhspll_sdm_order_sel : 1;  /* [    0],        r/w,        0x1 */
            uint32_t uhspll_sdm_dith_sel  : 2;  /* [ 2: 1],        r/w,        0x0 */
            uint32_t reserved_3_31        : 29; /* [31: 3],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uhs_pll_cfg7;

    /* 0x7F0 : uhs_pll_cfg8 */
    union {
        struct {
            uint32_t uhspll_dc_tp_out_en    : 1;  /* [    0],        r/w,        0x0 */
            uint32_t uhspll_ten             : 1;  /* [    1],        r/w,        0x0 */
            uint32_t uhspll_ten_sfreg       : 1;  /* [    2],        r/w,        0x0 */
            uint32_t reserved_3             : 1;  /* [    3],       rsvd,        0x0 */
            uint32_t uhspll_dten_ckin       : 1;  /* [    4],        r/w,        0x0 */
            uint32_t uhspll_dten_fref       : 1;  /* [    5],        r/w,        0x0 */
            uint32_t uhspll_dten_fsdm       : 1;  /* [    6],        r/w,        0x0 */
            uint32_t uhspll_dten_pupll      : 1;  /* [    7],        r/w,        0x0 */
            uint32_t uhspll_dten_pll_locked : 1;  /* [    8],        r/w,        0x0 */
            uint32_t reserved_9             : 1;  /* [    9],       rsvd,        0x0 */
            uint32_t uhspll_dtest_pull_down : 1;  /* [   10],        r/w,        0x1 */
            uint32_t reserved_11_31         : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uhs_pll_cfg8;

    /* 0x7F4 : uhs_pll_cfg9 */
    union {
        struct {
            uint32_t uhspll_ssc_en            : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_3             : 3;  /* [ 3: 1],       rsvd,        0x0 */
            uint32_t uhspll_ssc_cnt           : 8;  /* [11: 4],        r/w,       0x64 */
            uint32_t uhspll_ssc_gain          : 3;  /* [14:12],        r/w,        0x5 */
            uint32_t reserved_15              : 1;  /* [   15],       rsvd,        0x0 */
            uint32_t uhspll_ssc_start_gate_en : 1;  /* [   16],        r/w,        0x1 */
            uint32_t reserved_17_31           : 15; /* [31:17],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } uhs_pll_cfg9;

    /* 0x7f8  reserved */
    uint8_t RESERVED0x7f8[24];

    /* 0x810 : wifi_pll_cfg0 */
    union {
        struct {
            uint32_t wifipll_sdm_rstb     : 1;  /* [    0],        r/w,        0x1 */
            uint32_t wifipll_postdiv_rstb : 1;  /* [    1],        r/w,        0x1 */
            uint32_t wifipll_fbdv_rstb    : 1;  /* [    2],        r/w,        0x1 */
            uint32_t wifipll_refdiv_rstb  : 1;  /* [    3],        r/w,        0x1 */
            uint32_t pu_wifipll_postdiv   : 1;  /* [    4],        r/w,        0x0 */
            uint32_t pu_wifipll_fbdv      : 1;  /* [    5],        r/w,        0x1 */
            uint32_t pu_wifipll_clamp_op  : 1;  /* [    6],        r/w,        0x1 */
            uint32_t pu_wifipll_pfd       : 1;  /* [    7],        r/w,        0x1 */
            uint32_t pu_wifipll_cp        : 1;  /* [    8],        r/w,        0x1 */
            uint32_t pu_wifipll_sfreg     : 1;  /* [    9],        r/w,        0x0 */
            uint32_t pu_wifipll           : 1;  /* [   10],        r/w,        0x0 */
            uint32_t pu_wifipll_clktree   : 1;  /* [   11],        r/w,        0x1 */
            uint32_t reserved_12_31       : 20; /* [31:12],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg0;

    /* 0x814 : wifi_pll_cfg1 */
    union {
        struct {
            uint32_t wifipll_postdiv      : 7; /* [ 6: 0],        r/w,       0x16 */
            uint32_t reserved_7           : 1; /* [    7],       rsvd,        0x0 */
            uint32_t wifipll_refdiv_ratio : 4; /* [11: 8],        r/w,        0x2 */
            uint32_t reserved_12_15       : 4; /* [15:12],       rsvd,        0x0 */
            uint32_t wifipll_refclk_sel   : 2; /* [17:16],        r/w,        0x1 */
            uint32_t reserved_18_19       : 2; /* [19:18],       rsvd,        0x0 */
            uint32_t wifipll_vg11_sel     : 2; /* [21:20],        r/w,        0x1 */
            uint32_t reserved_22_23       : 2; /* [23:22],       rsvd,        0x0 */
            uint32_t wifipll_vg13_sel     : 2; /* [25:24],        r/w,        0x1 */
            uint32_t reserved_26_31       : 6; /* [31:26],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg1;

    /* 0x818 : wifi_pll_cfg2 */
    union {
        struct {
            uint32_t wifipll_sel_cp_bias   : 1;  /* [    0],        r/w,        0x1 */
            uint32_t reserved_1_3          : 3;  /* [ 3: 1],       rsvd,        0x0 */
            uint32_t wifipll_icp_5u        : 2;  /* [ 5: 4],        r/w,        0x2 */
            uint32_t wifipll_icp_1u        : 2;  /* [ 7: 6],        r/w,        0x0 */
            uint32_t wifipll_int_frac_sw   : 1;  /* [    8],        r/w,        0x0 */
            uint32_t wifipll_cp_startup_en : 1;  /* [    9],        r/w,        0x1 */
            uint32_t wifipll_cp_opamp_en   : 1;  /* [   10],        r/w,        0x1 */
            uint32_t reserved_11_31        : 21; /* [31:11],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg2;

    /* 0x81C : wifi_pll_cfg3 */
    union {
        struct {
            uint32_t wifipll_c4_en    : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_3     : 3;  /* [ 3: 1],       rsvd,        0x0 */
            uint32_t wifipll_r4       : 2;  /* [ 5: 4],        r/w,        0x2 */
            uint32_t reserved_6_7     : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t wifipll_r4_short : 1;  /* [    8],        r/w,        0x1 */
            uint32_t reserved_9_11    : 3;  /* [11: 9],       rsvd,        0x0 */
            uint32_t wifipll_c3       : 2;  /* [13:12],        r/w,        0x2 */
            uint32_t wifipll_cz       : 2;  /* [15:14],        r/w,        0x1 */
            uint32_t wifipll_rz       : 3;  /* [18:16],        r/w,        0x3 */
            uint32_t reserved_19_31   : 13; /* [31:19],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg3;

    /* 0x820 : wifi_pll_cfg4 */
    union {
        struct {
            uint32_t wifipll_sel_sample_clk : 2;  /* [ 1: 0],        r/w,        0x1 */
            uint32_t reserved_2_3           : 2;  /* [ 3: 2],       rsvd,        0x0 */
            uint32_t wifipll_sel_fb_clk     : 2;  /* [ 5: 4],        r/w,        0x1 */
            uint32_t reserved_6_7           : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t wifipll_sdmclk_sel     : 1;  /* [    8],        r/w,        0x1 */
            uint32_t reserved_9_31          : 23; /* [31: 9],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg4;

    /* 0x824 : wifi_pll_cfg5 */
    union {
        struct {
            uint32_t wifipll_vco_speed   : 3;  /* [ 2: 0],        r/w,        0x5 */
            uint32_t reserved_3          : 1;  /* [    3],       rsvd,        0x0 */
            uint32_t wifipll_vco_div1_en : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reserved_5_7        : 3;  /* [ 7: 5],       rsvd,        0x0 */
            uint32_t wifipll_vco_div2_en : 1;  /* [    8],        r/w,        0x1 */
            uint32_t reserved_9_11       : 3;  /* [11: 9],       rsvd,        0x0 */
            uint32_t wifipll_vco_div3_en : 1;  /* [   12],        r/w,        0x1 */
            uint32_t reserved_13_31      : 19; /* [31:13],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg5;

    /* 0x828 : wifi_pll_cfg6 */
    union {
        struct {
            uint32_t wifipll_sdmin         : 26; /* [25: 0],        r/w,  0x1800000 */
            uint32_t reserved_26_27        : 2;  /* [27:26],       rsvd,        0x0 */
            uint32_t wifipll_sdm_bypass    : 1;  /* [   28],        r/w,        0x0 */
            uint32_t wifipll_sdm_bypass_hw : 1;  /* [   29],          r,        0x0 */
            uint32_t reserved_30           : 1;  /* [   30],       rsvd,        0x0 */
            uint32_t wifipll_sdm_ctrl_hw   : 1;  /* [   31],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg6;

    /* 0x82C : wifi_pll_cfg7 */
    union {
        struct {
            uint32_t wifipll_sdm_order_sel    : 2;  /* [ 1: 0],        r/w,        0x2 */
            uint32_t reserved_2_3             : 2;  /* [ 3: 2],       rsvd,        0x0 */
            uint32_t wifipll_sdm_noi_prbs_sel : 2;  /* [ 5: 4],        r/w,        0x3 */
            uint32_t reserved_6_7             : 2;  /* [ 7: 6],       rsvd,        0x0 */
            uint32_t wifipll_sdm_noi_prbs_en  : 1;  /* [    8],        r/w,        0x0 */
            uint32_t reserved_9_11            : 3;  /* [11: 9],       rsvd,        0x0 */
            uint32_t wifipll_sdm_sig_prbs_sel : 2;  /* [13:12],        r/w,        0x0 */
            uint32_t reserved_14_15           : 2;  /* [15:14],       rsvd,        0x0 */
            uint32_t wifipll_sdm_sig_dith_sel : 2;  /* [17:16],        r/w,        0x0 */
            uint32_t reserved_18_31           : 14; /* [31:18],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg7;

    /* 0x830 : wifi_pll_cfg8 */
    union {
        struct {
            uint32_t wifipll_en_div2         : 1;  /* [    0],        r/w,        0x1 */
            uint32_t wifipll_en_div4         : 1;  /* [    1],        r/w,        0x1 */
            uint32_t wifipll_en_div5         : 1;  /* [    2],        r/w,        0x1 */
            uint32_t wifipll_en_div6         : 1;  /* [    3],        r/w,        0x1 */
            uint32_t wifipll_en_div8         : 1;  /* [    4],        r/w,        0x1 */
            uint32_t wifipll_en_div10        : 1;  /* [    5],        r/w,        0x1 */
            uint32_t wifipll_en_div12        : 1;  /* [    6],        r/w,        0x1 */
            uint32_t wifipll_en_div20        : 1;  /* [    7],        r/w,        0x1 */
            uint32_t wifipll_en_div30        : 1;  /* [    8],        r/w,        0x1 */
            uint32_t wifipll_sel_div2_div4   : 1;  /* [    9],        r/w,        0x0 */
            uint32_t en_wifipll_div30_bz_adc : 1;  /* [   10],        r/w,        0x0 */
            uint32_t reserved_11             : 1;  /* [   11],       rsvd,        0x0 */
            uint32_t wifipll_en_div2_hw      : 1;  /* [   12],          r,        0x1 */
            uint32_t reserved_13_30          : 18; /* [30:13],       rsvd,        0x0 */
            uint32_t wifipll_en_ctrl_hw      : 1;  /* [   31],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg8;

    /* 0x834 : wifi_pll_cfg9 */
    union {
        struct {
            uint32_t wifipll_dc_tp_out_en     : 1;  /* [    0],        r/w,        0x0 */
            uint32_t ten_wifipll              : 1;  /* [    1],        r/w,        0x0 */
            uint32_t ten_wifipll_sfreg        : 1;  /* [    2],        r/w,        0x0 */
            uint32_t reserved_3               : 1;  /* [    3],       rsvd,        0x0 */
            uint32_t dten_wifipll_fin         : 1;  /* [    4],        r/w,        0x0 */
            uint32_t dten_wifipll_fref        : 1;  /* [    5],        r/w,        0x0 */
            uint32_t dten_wifipll_fsdm        : 1;  /* [    6],        r/w,        0x0 */
            uint32_t dten_wifipll_div30       : 1;  /* [    7],        r/w,        0x0 */
            uint32_t dten_wifipll_div10       : 1;  /* [    8],        r/w,        0x0 */
            uint32_t dten_wifipll_postdiv_clk : 1;  /* [    9],        r/w,        0x0 */
            uint32_t usbpll_dtest_pclk_en     : 1;  /* [   10],        r/w,        0x0 */
            uint32_t usbpll_dtest_clkout_en   : 1;  /* [   11],        r/w,        0x0 */
            uint32_t dtest_wifipll_pulldown   : 1;  /* [   12],        r/w,        0x1 */
            uint32_t reserved_13_31           : 19; /* [31:13],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg9;

    /* 0x838 : wifi_pll_cfg10 */
    union {
        struct {
            uint32_t reserved_0_1             : 2; /* [ 1: 0],       rsvd,        0x0 */
            uint32_t usbpll_ssc_start         : 1; /* [    2],        r/w,        0x1 */
            uint32_t usbpll_ssc_start_gate_en : 1; /* [    3],        r/w,        0x0 */
            uint32_t usbpll_ssc_gain          : 3; /* [ 6: 4],        r/w,        0x3 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t usbpll_ssc_en            : 1; /* [    8],        r/w,        0x0 */
            uint32_t usbpll_sdm_bypass        : 1; /* [    9],        r/w,        0x0 */
            uint32_t usbpll_sdm_order_sel     : 1; /* [   10],        r/w,        0x1 */
            uint32_t reserved_11_15           : 5; /* [15:11],       rsvd,        0x0 */
            uint32_t usbpll_sdm_sig_dith_sel  : 2; /* [17:16],        r/w,        0x0 */
            uint32_t reserved_18_19           : 2; /* [19:18],       rsvd,        0x0 */
            uint32_t usbpll_div2_en           : 1; /* [   20],        r/w,        0x1 */
            uint32_t usbpll_clkout_en         : 1; /* [   21],        r/w,        0x1 */
            uint32_t reserved_22_23           : 2; /* [23:22],       rsvd,        0x0 */
            uint32_t usbpll_sel_sample_clk    : 2; /* [25:24],        r/w,        0x1 */
            uint32_t reserved_26_27           : 2; /* [27:26],       rsvd,        0x0 */
            uint32_t usbpll_rstb              : 1; /* [   28],        r/w,        0x1 */
            uint32_t pu_usbpll_mmdiv          : 1; /* [   29],        r/w,        0x0 */
            uint32_t reserved_30_31           : 2; /* [31:30],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg10;

    /* 0x83C : wifi_pll_cfg11 */
    union {
        struct {
            uint32_t usbpll_sdmin   : 19; /* [18: 0],        r/w,    0x28000 */
            uint32_t reserved_19_31 : 13; /* [31:19],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg11;

    /* 0x840 : wifi_pll_cfg12 */
    union {
        struct {
            uint32_t usbpll_ssc_cnt : 9;  /* [ 8: 0],        r/w,       0xf0 */
            uint32_t reserved_9_31  : 23; /* [31: 9],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg12;

    /* 0x844 : wifi_pll_cfg13 */
    union {
        struct {
            uint32_t wifipll_resv              : 16; /* [15: 0],        r/w,        0x0 */
            uint32_t reserved_16_20            : 5;  /* [20:16],       rsvd,        0x0 */
            uint32_t usbpll_dl_ctrl            : 1;  /* [   21],        r/w,        0x0 */
            uint32_t wifipll_dl_ctrl_30_bz_adc : 1;  /* [   22],        r/w,        0x0 */
            uint32_t wifipll_dl_ctrl_30        : 1;  /* [   23],        r/w,        0x0 */
            uint32_t wifipll_dl_ctrl_20        : 1;  /* [   24],        r/w,        0x0 */
            uint32_t wifipll_dl_ctrl_12        : 1;  /* [   25],        r/w,        0x0 */
            uint32_t wifipll_dl_ctrl_10        : 1;  /* [   26],        r/w,        0x0 */
            uint32_t wifipll_dl_ctrl_8         : 1;  /* [   27],        r/w,        0x0 */
            uint32_t wifipll_dl_ctrl_6         : 1;  /* [   28],        r/w,        0x0 */
            uint32_t wifipll_dl_ctrl_5         : 1;  /* [   29],        r/w,        0x0 */
            uint32_t wifipll_dl_ctrl_4         : 1;  /* [   30],        r/w,        0x0 */
            uint32_t wifipll_dl_ctrl_2         : 1;  /* [   31],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } wifi_pll_cfg13;

    /* 0x848  reserved */
    uint8_t RESERVED0x848[92];

    /* 0x8A4 : gauge */
    union {
        struct {
            uint32_t gauge_reserve     : 3; /* [ 2: 0],        r/w,        0x0 */
            uint32_t gauge_ictrl_adc   : 2; /* [ 4: 3],        r/w,        0x1 */
            uint32_t gauge_dem_en      : 1; /* [    5],        r/w,        0x1 */
            uint32_t gauge_ckb_en      : 1; /* [    6],        r/w,        0x0 */
            uint32_t gauge_chop_phas   : 1; /* [    7],        r/w,        0x1 */
            uint32_t gauge_chop_freq   : 3; /* [10: 8],        r/w,        0x1 */
            uint32_t gauge_chop_en     : 1; /* [   11],        r/w,        0x1 */
            uint32_t gauge_sel_edge    : 1; /* [   12],        r/w,        0x0 */
            uint32_t gauge_quan_gain   : 2; /* [14:13],        r/w,        0x1 */
            uint32_t gauge_sdm_pu      : 1; /* [   15],        r/w,        0x0 */
            uint32_t gauge_channel_sel : 1; /* [   16],        r/w,        0x0 */
            uint32_t gauge_channel_en  : 1; /* [   17],        r/w,        0x0 */
            uint32_t gauge_lp_mode     : 1; /* [   18],        r/w,        0x0 */
            uint32_t reserved_19       : 1; /* [   19],       rsvd,        0x0 */
            uint32_t tmux_gauge_power  : 3; /* [22:20],        r/w,        0x0 */
            uint32_t ten_gauge_power   : 1; /* [   23],        r/w,        0x0 */
            uint32_t ntc_bias_sel      : 4; /* [27:24],        r/w,        0x8 */
            uint32_t ntc_bias_en       : 1; /* [   28],        r/w,        0x0 */
            uint32_t gauge_ldo_pu      : 1; /* [   29],        r/w,        0x0 */
            uint32_t gauge_vcm_pu      : 1; /* [   30],        r/w,        0x0 */
            uint32_t gauge_bg_pu       : 1; /* [   31],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gauge;

    /* 0x8a8  reserved */
    uint8_t RESERVED0x8a8[16];

    /* 0x8B8 : gauge_rx_fifo_ctrl */
    union {
        struct {
            uint32_t gauge_rx_fifo_flush : 1; /* [    0],        w1p,        0x0 */
            uint32_t gauge_rxo_int_en    : 1; /* [    1],        r/w,        0x0 */
            uint32_t gauge_rxu_int_en    : 1; /* [    2],        r/w,        0x0 */
            uint32_t gauge_rxa_int_en    : 1; /* [    3],        r/w,        0x0 */
            uint32_t gauge_rx_drq_en     : 1; /* [    4],        r/w,        0x0 */
            uint32_t gauge_rx_data_res   : 1; /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_7        : 2; /* [ 7: 6],       rsvd,        0x0 */
            uint32_t gauge_rx_ch_en      : 1; /* [    8],        r/w,        0x0 */
            uint32_t reserved_9_13       : 5; /* [13: 9],       rsvd,        0x0 */
            uint32_t gauge_rx_drq_cnt    : 2; /* [15:14],        r/w,        0x0 */
            uint32_t gauge_rx_trg_level  : 3; /* [18:16],        r/w,        0x1 */
            uint32_t reserved_19_23      : 5; /* [23:19],       rsvd,        0x0 */
            uint32_t gauge_rx_data_mode  : 2; /* [25:24],        r/w,        0x3 */
            uint32_t reserved_26_31      : 6; /* [31:26],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gauge_rx_fifo_ctrl;

    /* 0x8BC : gauge_rx_fifo_status */
    union {
        struct {
            uint32_t reserved_0     : 1;  /* [    0],       rsvd,        0x0 */
            uint32_t gauge_rxo_int  : 1;  /* [    1],          r,        0x0 */
            uint32_t gauge_rxu_int  : 1;  /* [    2],          r,        0x0 */
            uint32_t reserved_3     : 1;  /* [    3],       rsvd,        0x0 */
            uint32_t gauge_rxa_int  : 1;  /* [    4],          r,        0x0 */
            uint32_t reserved_5_15  : 11; /* [15: 5],       rsvd,        0x0 */
            uint32_t gauge_rxa_cnt  : 3;  /* [18:16],          r,        0x0 */
            uint32_t reserved_19_23 : 5;  /* [23:19],       rsvd,        0x0 */
            uint32_t gauge_rxa      : 1;  /* [   24],          r,        0x0 */
            uint32_t reserved_25_31 : 7;  /* [31:25],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gauge_rx_fifo_status;

    /* 0x8C0 : gauge_rx_fifo_data */
    union {
        struct {
            uint32_t gauge_rx_data : 32; /* [31: 0],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } gauge_rx_fifo_data;

    /* 0x8C4 : gpio_cfg0 */
    union {
        struct {
            uint32_t reg_gpio_0_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_0_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_0_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_0_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_0_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_0_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_0_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15          : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_0_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_0_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_0_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_0_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23             : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_0_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_0_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_0_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27             : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_0_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29             : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_0_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg0;

    /* 0x8C8 : gpio_cfg1 */
    union {
        struct {
            uint32_t reg_gpio_1_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_1_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_1_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_1_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_1_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_1_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_1_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15          : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_1_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_1_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_1_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_1_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23             : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_1_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_1_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_1_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27             : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_1_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29             : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_1_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg1;

    /* 0x8CC : gpio_cfg2 */
    union {
        struct {
            uint32_t reg_gpio_2_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_2_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_2_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_2_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_2_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_2_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_2_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15          : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_2_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_2_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_2_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_2_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23             : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_2_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_2_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_2_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27             : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_2_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29             : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_2_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg2;

    /* 0x8D0 : gpio_cfg3 */
    union {
        struct {
            uint32_t reg_gpio_3_ie           : 1; /* [    0],        r/w,        0x1 */
            uint32_t reg_gpio_3_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_3_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_3_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_3_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_3_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_3_func_sel     : 5; /* [12: 8],        r/w,        0xf */
            uint32_t reserved_13_15          : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_3_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_3_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_3_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_3_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23             : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_3_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_3_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_3_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27             : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_3_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29             : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_3_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg3;

    /* 0x8D4 : gpio_cfg4 */
    union {
        struct {
            uint32_t reg_gpio_4_ie           : 1; /* [    0],        r/w,        0x1 */
            uint32_t reg_gpio_4_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_4_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_4_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_4_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_4_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_4_func_sel     : 5; /* [12: 8],        r/w,        0xf */
            uint32_t reserved_13_15          : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_4_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_4_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_4_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_4_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23             : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_4_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_4_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_4_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27             : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_4_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29             : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_4_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg4;

    /* 0x8D8 : gpio_cfg5 */
    union {
        struct {
            uint32_t reg_gpio_5_ie           : 1; /* [    0],        r/w,        0x1 */
            uint32_t reg_gpio_5_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_5_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_5_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_5_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_5_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_5_func_sel     : 5; /* [12: 8],        r/w,        0xf */
            uint32_t reserved_13_15          : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_5_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_5_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_5_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_5_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23             : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_5_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_5_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_5_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27             : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_5_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29             : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_5_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg5;

    /* 0x8DC : gpio_cfg6 */
    union {
        struct {
            uint32_t reg_gpio_6_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_6_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_6_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_6_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_6_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_6_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_6_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15          : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_6_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_6_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_6_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_6_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23             : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_6_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_6_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_6_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27             : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_6_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29             : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_6_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg6;

    /* 0x8E0 : gpio_cfg7 */
    union {
        struct {
            uint32_t reg_gpio_7_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_7_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_7_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_7_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_7_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_7_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_7_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15          : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_7_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_7_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_7_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_7_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23             : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_7_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_7_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_7_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27             : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_7_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29             : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_7_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg7;

    /* 0x8E4 : gpio_cfg8 */
    union {
        struct {
            uint32_t reg_gpio_8_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_8_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_8_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_8_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_8_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_8_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_8_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15          : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_8_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_8_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_8_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_8_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23             : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_8_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_8_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_8_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27             : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_8_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29             : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_8_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg8;

    /* 0x8E8 : gpio_cfg9 */
    union {
        struct {
            uint32_t reg_gpio_9_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_9_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_9_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_9_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_9_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_9_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7              : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_9_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15          : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_9_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_9_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_9_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_9_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23             : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_9_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_9_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_9_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27             : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_9_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29             : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_9_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg9;

    /* 0x8EC : gpio_cfg10 */
    union {
        struct {
            uint32_t reg_gpio_10_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_10_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_10_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_10_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_10_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_10_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_10_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_10_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_10_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_10_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_10_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_10_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_10_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_10_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_10_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_10_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg10;

    /* 0x8F0 : gpio_cfg11 */
    union {
        struct {
            uint32_t reg_gpio_11_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_11_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_11_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_11_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_11_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_11_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_11_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_11_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_11_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_11_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_11_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_11_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_11_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_11_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_11_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_11_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg11;

    /* 0x8F4 : gpio_cfg12 */
    union {
        struct {
            uint32_t reg_gpio_12_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_12_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_12_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_12_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_12_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_12_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_12_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_12_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_12_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_12_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_12_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_12_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_12_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_12_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_12_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_12_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg12;

    /* 0x8F8 : gpio_cfg13 */
    union {
        struct {
            uint32_t reg_gpio_13_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_13_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_13_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_13_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_13_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_13_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_13_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_13_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_13_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_13_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_13_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_13_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_13_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_13_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_13_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_13_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg13;

    /* 0x8FC : gpio_cfg14 */
    union {
        struct {
            uint32_t reg_gpio_14_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_14_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_14_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_14_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_14_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_14_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_14_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_14_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_14_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_14_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_14_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_14_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_14_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_14_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_14_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_14_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg14;

    /* 0x900 : gpio_cfg15 */
    union {
        struct {
            uint32_t reg_gpio_15_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_15_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_15_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_15_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_15_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_15_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_15_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_15_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_15_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_15_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_15_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_15_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_15_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_15_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_15_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_15_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg15;

    /* 0x904 : gpio_cfg16 */
    union {
        struct {
            uint32_t reg_gpio_16_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_16_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_16_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_16_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_16_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_16_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_16_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_16_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_16_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_16_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_16_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_16_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_16_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_16_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_16_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_16_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg16;

    /* 0x908 : gpio_cfg17 */
    union {
        struct {
            uint32_t reg_gpio_17_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_17_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_17_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_17_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_17_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_17_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_17_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_17_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_17_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_17_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_17_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_17_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_17_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_17_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_17_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_17_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg17;

    /* 0x90C : gpio_cfg18 */
    union {
        struct {
            uint32_t reg_gpio_18_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_18_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_18_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_18_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_18_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_18_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_18_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_18_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_18_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_18_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_18_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_18_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_18_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_18_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_18_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_18_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg18;

    /* 0x910 : gpio_cfg19 */
    union {
        struct {
            uint32_t reg_gpio_19_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_19_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_19_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_19_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_19_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_19_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_19_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_19_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_19_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_19_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_19_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_19_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_19_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_19_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_19_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_19_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg19;

    /* 0x914 : gpio_cfg20 */
    union {
        struct {
            uint32_t reg_gpio_20_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_20_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_20_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_20_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_20_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_20_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_20_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_20_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_20_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_20_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_20_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_20_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_20_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_20_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_20_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_20_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg20;

    /* 0x918 : gpio_cfg21 */
    union {
        struct {
            uint32_t reg_gpio_21_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_21_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_21_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_21_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_21_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_21_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_21_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_21_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_21_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_21_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_21_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_21_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_21_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_21_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_21_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_21_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg21;

    /* 0x91C : gpio_cfg22 */
    union {
        struct {
            uint32_t reg_gpio_22_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_22_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_22_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_22_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_22_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_22_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_22_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_22_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_22_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_22_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_22_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_22_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_22_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_22_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_22_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_22_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg22;

    /* 0x920 : gpio_cfg23 */
    union {
        struct {
            uint32_t reg_gpio_23_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_23_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_23_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_23_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_23_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_23_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_23_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_23_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_23_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_23_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_23_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_23_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_23_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_23_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_23_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_23_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg23;

    /* 0x924 : gpio_cfg24 */
    union {
        struct {
            uint32_t reg_gpio_24_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_24_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_24_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_24_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_24_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_24_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_24_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_24_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_24_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_24_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_24_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_24_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_24_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_24_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_24_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_24_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg24;

    /* 0x928 : gpio_cfg25 */
    union {
        struct {
            uint32_t reg_gpio_25_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_25_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_25_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_25_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_25_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_25_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_25_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_25_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_25_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_25_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_25_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_25_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_25_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_25_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_25_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_25_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg25;

    /* 0x92C : gpio_cfg26 */
    union {
        struct {
            uint32_t reg_gpio_26_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_26_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_26_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_26_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_26_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_26_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_26_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_26_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_26_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_26_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_26_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_26_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_26_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_26_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_26_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_26_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg26;

    /* 0x930 : gpio_cfg27 */
    union {
        struct {
            uint32_t reg_gpio_27_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_27_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_27_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_27_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_27_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_27_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_27_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_27_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_27_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_27_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_27_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_27_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_27_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_27_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_27_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_27_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg27;

    /* 0x934 : gpio_cfg28 */
    union {
        struct {
            uint32_t reg_gpio_28_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_28_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_28_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_28_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_28_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_28_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_28_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_28_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_28_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_28_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_28_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_28_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_28_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_28_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_28_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_28_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg28;

    /* 0x938 : gpio_cfg29 */
    union {
        struct {
            uint32_t reg_gpio_29_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_29_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_29_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_29_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_29_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_29_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_29_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_29_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_29_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_29_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_29_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_29_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_29_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_29_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_29_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_29_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg29;

    /* 0x93C : gpio_cfg30 */
    union {
        struct {
            uint32_t reg_gpio_30_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_30_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_30_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_30_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_30_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_30_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_30_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_30_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_30_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_30_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_30_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_30_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_30_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_30_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_30_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_30_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg30;

    /* 0x940 : gpio_cfg31 */
    union {
        struct {
            uint32_t reg_gpio_31_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_31_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_31_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_31_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_31_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_31_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_31_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_31_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_31_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_31_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_31_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_31_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_31_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_31_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_31_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_31_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg31;

    /* 0x944 : gpio_cfg32 */
    union {
        struct {
            uint32_t reg_gpio_32_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_32_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_32_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_32_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_32_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_32_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_32_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_32_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_32_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_32_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_32_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_32_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_32_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_32_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_32_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_32_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg32;

    /* 0x948 : gpio_cfg33 */
    union {
        struct {
            uint32_t reg_gpio_33_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_33_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_33_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_33_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_33_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_33_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_33_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_33_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_33_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_33_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_33_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_33_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_33_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_33_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_33_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_33_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg33;

    /* 0x94C : gpio_cfg34 */
    union {
        struct {
            uint32_t reg_gpio_34_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_34_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_34_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_34_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_34_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_34_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_34_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_34_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_34_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_34_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_34_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_34_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_34_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_34_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_34_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_34_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg34;

    /* 0x950 : gpio_cfg35 */
    union {
        struct {
            uint32_t reg_gpio_35_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_35_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_35_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_35_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_35_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_35_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_35_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_35_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_35_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_35_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_35_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_35_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_35_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_35_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_35_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_35_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg35;

    /* 0x954 : gpio_cfg36 */
    union {
        struct {
            uint32_t reg_gpio_36_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_36_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_36_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_36_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_36_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_36_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_36_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_36_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_36_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_36_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_36_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_36_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_36_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_36_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_36_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_36_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg36;

    /* 0x958 : gpio_cfg37 */
    union {
        struct {
            uint32_t reg_gpio_37_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_37_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_37_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_37_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_37_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_37_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_37_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_37_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_37_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_37_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_37_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_37_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_37_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_37_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_37_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_37_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg37;

    /* 0x95C : gpio_cfg38 */
    union {
        struct {
            uint32_t reg_gpio_38_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_38_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_38_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_38_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_38_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_38_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_38_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_38_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_38_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_38_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_38_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_38_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_38_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_38_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_38_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_38_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg38;

    /* 0x960 : gpio_cfg39 */
    union {
        struct {
            uint32_t reg_gpio_39_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_39_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_39_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_39_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_39_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_39_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_39_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_39_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_39_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_39_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_39_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_39_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_39_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_39_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_39_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_39_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg39;

    /* 0x964 : gpio_cfg40 */
    union {
        struct {
            uint32_t reg_gpio_40_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_40_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_40_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_40_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_40_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_40_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_40_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_40_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_40_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_40_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_40_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_40_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_40_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_40_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_40_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_40_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg40;

    /* 0x968 : gpio_cfg41 */
    union {
        struct {
            uint32_t reg_gpio_41_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_41_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_41_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_41_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_41_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_41_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_41_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_41_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_41_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_41_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_41_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_41_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_41_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_41_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_41_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_41_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg41;

    /* 0x96C : gpio_cfg42 */
    union {
        struct {
            uint32_t reg_gpio_42_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_42_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_42_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_42_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_42_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_42_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_42_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_42_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_42_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_42_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_42_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_42_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_42_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_42_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_42_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_42_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg42;

    /* 0x970 : gpio_cfg43 */
    union {
        struct {
            uint32_t reg_gpio_43_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_43_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_43_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_43_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_43_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_43_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_43_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_43_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_43_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_43_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_43_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_43_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_43_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_43_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_43_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_43_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg43;

    /* 0x974 : gpio_cfg44 */
    union {
        struct {
            uint32_t reg_gpio_44_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_44_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_44_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_44_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_44_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_44_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_44_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_44_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_44_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_44_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_44_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_44_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_44_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_44_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_44_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_44_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg44;

    /* 0x978 : gpio_cfg45 */
    union {
        struct {
            uint32_t reg_gpio_45_ie           : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_45_smt          : 1; /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_45_drv          : 2; /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_45_pu           : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_45_pd           : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg_gpio_45_oe           : 1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7               : 1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_gpio_45_func_sel     : 5; /* [12: 8],        r/w,        0xb */
            uint32_t reserved_13_15           : 3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_gpio_45_int_mode_set : 4; /* [19:16],        r/w,        0x0 */
            uint32_t reg_gpio_45_int_clr      : 1; /* [   20],        r/w,        0x0 */
            uint32_t gpio_45_int_stat         : 1; /* [   21],          r,        0x0 */
            uint32_t reg_gpio_45_int_mask     : 1; /* [   22],        r/w,        0x1 */
            uint32_t reserved_23              : 1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_gpio_45_o            : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg_gpio_45_set          : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg_gpio_45_clr          : 1; /* [   26],        w1p,        0x0 */
            uint32_t reserved_27              : 1; /* [   27],       rsvd,        0x0 */
            uint32_t reg_gpio_45_i            : 1; /* [   28],          r,        0x0 */
            uint32_t reserved_29              : 1; /* [   29],       rsvd,        0x0 */
            uint32_t reg_gpio_45_mode         : 2; /* [31:30],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg45;

    /* 0x97C : gpio_cfg46 */
    union {
        struct {
            uint32_t reg_gpio_46_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_46_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_46_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_46_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_46_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg46;

    /* 0x980 : gpio_cfg47 */
    union {
        struct {
            uint32_t reg_gpio_47_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_47_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_47_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_47_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_47_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg47;

    /* 0x984 : gpio_cfg48 */
    union {
        struct {
            uint32_t reg_gpio_48_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_48_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_48_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_48_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_48_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg48;

    /* 0x988 : gpio_cfg49 */
    union {
        struct {
            uint32_t reg_gpio_49_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_49_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_49_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_49_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_49_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg49;

    /* 0x98C : gpio_cfg50 */
    union {
        struct {
            uint32_t reg_gpio_50_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_50_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_50_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_50_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_50_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg50;

    /* 0x990 : gpio_cfg51 */
    union {
        struct {
            uint32_t reg_gpio_51_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_51_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_51_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_51_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_51_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg51;

    /* 0x994 : gpio_cfg52 */
    union {
        struct {
            uint32_t reg_gpio_52_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_52_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_52_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_52_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_52_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg52;

    /* 0x998 : gpio_cfg53 */
    union {
        struct {
            uint32_t reg_gpio_53_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_53_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_53_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_53_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_53_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg53;

    /* 0x99C : gpio_cfg54 */
    union {
        struct {
            uint32_t reg_gpio_54_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_54_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_54_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_54_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_54_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg54;

    /* 0x9A0 : gpio_cfg55 */
    union {
        struct {
            uint32_t reg_gpio_55_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_55_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_55_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_55_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_55_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg55;

    /* 0x9A4 : gpio_cfg56 */
    union {
        struct {
            uint32_t reg_gpio_56_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_56_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_56_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_56_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_56_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg56;

    /* 0x9A8 : gpio_cfg57 */
    union {
        struct {
            uint32_t reg_gpio_57_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_57_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_57_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_57_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_57_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg57;

    /* 0x9AC : gpio_cfg58 */
    union {
        struct {
            uint32_t reg_gpio_58_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_58_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_58_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_58_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_58_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg58;

    /* 0x9B0 : gpio_cfg59 */
    union {
        struct {
            uint32_t reg_gpio_59_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_59_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_59_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_59_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_59_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg59;

    /* 0x9B4 : gpio_cfg60 */
    union {
        struct {
            uint32_t reg_gpio_60_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_60_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_60_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_60_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_60_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg60;

    /* 0x9B8 : gpio_cfg61 */
    union {
        struct {
            uint32_t reg_gpio_61_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_61_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_61_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_61_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_61_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg61;

    /* 0x9BC : gpio_cfg62 */
    union {
        struct {
            uint32_t reg_gpio_62_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_62_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_62_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_62_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_62_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg62;

    /* 0x9C0 : gpio_cfg63 */
    union {
        struct {
            uint32_t reg_gpio_63_ie  : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg_gpio_63_smt : 1;  /* [    1],        r/w,        0x1 */
            uint32_t reg_gpio_63_drv : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t reg_gpio_63_pu  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg_gpio_63_pd  : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_31   : 26; /* [31: 6],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg63;

    /* 0x9c4  reserved */
    uint8_t RESERVED0x9c4[256];

    /* 0xAC4 : gpio_cfg128 */
    union {
        struct {
            uint32_t reg2_gpio_0_i  : 1; /* [    0],          r,        0x0 */
            uint32_t reg2_gpio_1_i  : 1; /* [    1],          r,        0x0 */
            uint32_t reg2_gpio_2_i  : 1; /* [    2],          r,        0x0 */
            uint32_t reg2_gpio_3_i  : 1; /* [    3],          r,        0x0 */
            uint32_t reg2_gpio_4_i  : 1; /* [    4],          r,        0x0 */
            uint32_t reg2_gpio_5_i  : 1; /* [    5],          r,        0x0 */
            uint32_t reg2_gpio_6_i  : 1; /* [    6],          r,        0x0 */
            uint32_t reg2_gpio_7_i  : 1; /* [    7],          r,        0x0 */
            uint32_t reg2_gpio_8_i  : 1; /* [    8],          r,        0x0 */
            uint32_t reg2_gpio_9_i  : 1; /* [    9],          r,        0x0 */
            uint32_t reg2_gpio_10_i : 1; /* [   10],          r,        0x0 */
            uint32_t reg2_gpio_11_i : 1; /* [   11],          r,        0x0 */
            uint32_t reg2_gpio_12_i : 1; /* [   12],          r,        0x0 */
            uint32_t reg2_gpio_13_i : 1; /* [   13],          r,        0x0 */
            uint32_t reg2_gpio_14_i : 1; /* [   14],          r,        0x0 */
            uint32_t reg2_gpio_15_i : 1; /* [   15],          r,        0x0 */
            uint32_t reg2_gpio_16_i : 1; /* [   16],          r,        0x0 */
            uint32_t reg2_gpio_17_i : 1; /* [   17],          r,        0x0 */
            uint32_t reg2_gpio_18_i : 1; /* [   18],          r,        0x0 */
            uint32_t reg2_gpio_19_i : 1; /* [   19],          r,        0x0 */
            uint32_t reg2_gpio_20_i : 1; /* [   20],          r,        0x0 */
            uint32_t reg2_gpio_21_i : 1; /* [   21],          r,        0x0 */
            uint32_t reg2_gpio_22_i : 1; /* [   22],          r,        0x0 */
            uint32_t reg2_gpio_23_i : 1; /* [   23],          r,        0x0 */
            uint32_t reg2_gpio_24_i : 1; /* [   24],          r,        0x0 */
            uint32_t reg2_gpio_25_i : 1; /* [   25],          r,        0x0 */
            uint32_t reg2_gpio_26_i : 1; /* [   26],          r,        0x0 */
            uint32_t reg2_gpio_27_i : 1; /* [   27],          r,        0x0 */
            uint32_t reg2_gpio_28_i : 1; /* [   28],          r,        0x0 */
            uint32_t reg2_gpio_29_i : 1; /* [   29],          r,        0x0 */
            uint32_t reg2_gpio_30_i : 1; /* [   30],          r,        0x0 */
            uint32_t reg2_gpio_31_i : 1; /* [   31],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg128;

    /* 0xAC8 : gpio_cfg129 */
    union {
        struct {
            uint32_t reg2_gpio_32_i : 1;  /* [    0],          r,        0x0 */
            uint32_t reg2_gpio_33_i : 1;  /* [    1],          r,        0x0 */
            uint32_t reg2_gpio_34_i : 1;  /* [    2],          r,        0x0 */
            uint32_t reg2_gpio_35_i : 1;  /* [    3],          r,        0x0 */
            uint32_t reg2_gpio_36_i : 1;  /* [    4],          r,        0x0 */
            uint32_t reg2_gpio_37_i : 1;  /* [    5],          r,        0x0 */
            uint32_t reg2_gpio_38_i : 1;  /* [    6],          r,        0x0 */
            uint32_t reg2_gpio_39_i : 1;  /* [    7],          r,        0x0 */
            uint32_t reg2_gpio_40_i : 1;  /* [    8],          r,        0x0 */
            uint32_t reg2_gpio_41_i : 1;  /* [    9],          r,        0x0 */
            uint32_t reg2_gpio_42_i : 1;  /* [   10],          r,        0x0 */
            uint32_t reg2_gpio_43_i : 1;  /* [   11],          r,        0x0 */
            uint32_t reg2_gpio_44_i : 1;  /* [   12],          r,        0x0 */
            uint32_t reg2_gpio_45_i : 1;  /* [   13],          r,        0x0 */
            uint32_t reserved_14_31 : 18; /* [31:14],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg129;

    /* 0xacc  reserved */
    uint8_t RESERVED0xacc[24];

    /* 0xAE4 : gpio_cfg136 */
    union {
        struct {
            uint32_t reg2_gpio_0_o  : 1; /* [    0],        r/w,        0x0 */
            uint32_t reg2_gpio_1_o  : 1; /* [    1],        r/w,        0x0 */
            uint32_t reg2_gpio_2_o  : 1; /* [    2],        r/w,        0x0 */
            uint32_t reg2_gpio_3_o  : 1; /* [    3],        r/w,        0x0 */
            uint32_t reg2_gpio_4_o  : 1; /* [    4],        r/w,        0x0 */
            uint32_t reg2_gpio_5_o  : 1; /* [    5],        r/w,        0x0 */
            uint32_t reg2_gpio_6_o  : 1; /* [    6],        r/w,        0x0 */
            uint32_t reg2_gpio_7_o  : 1; /* [    7],        r/w,        0x0 */
            uint32_t reg2_gpio_8_o  : 1; /* [    8],        r/w,        0x0 */
            uint32_t reg2_gpio_9_o  : 1; /* [    9],        r/w,        0x0 */
            uint32_t reg2_gpio_10_o : 1; /* [   10],        r/w,        0x0 */
            uint32_t reg2_gpio_11_o : 1; /* [   11],        r/w,        0x0 */
            uint32_t reg2_gpio_12_o : 1; /* [   12],        r/w,        0x0 */
            uint32_t reg2_gpio_13_o : 1; /* [   13],        r/w,        0x0 */
            uint32_t reg2_gpio_14_o : 1; /* [   14],        r/w,        0x0 */
            uint32_t reg2_gpio_15_o : 1; /* [   15],        r/w,        0x0 */
            uint32_t reg2_gpio_16_o : 1; /* [   16],        r/w,        0x0 */
            uint32_t reg2_gpio_17_o : 1; /* [   17],        r/w,        0x0 */
            uint32_t reg2_gpio_18_o : 1; /* [   18],        r/w,        0x0 */
            uint32_t reg2_gpio_19_o : 1; /* [   19],        r/w,        0x0 */
            uint32_t reg2_gpio_20_o : 1; /* [   20],        r/w,        0x0 */
            uint32_t reg2_gpio_21_o : 1; /* [   21],        r/w,        0x0 */
            uint32_t reg2_gpio_22_o : 1; /* [   22],        r/w,        0x0 */
            uint32_t reg2_gpio_23_o : 1; /* [   23],        r/w,        0x0 */
            uint32_t reg2_gpio_24_o : 1; /* [   24],        r/w,        0x0 */
            uint32_t reg2_gpio_25_o : 1; /* [   25],        r/w,        0x0 */
            uint32_t reg2_gpio_26_o : 1; /* [   26],        r/w,        0x0 */
            uint32_t reg2_gpio_27_o : 1; /* [   27],        r/w,        0x0 */
            uint32_t reg2_gpio_28_o : 1; /* [   28],        r/w,        0x0 */
            uint32_t reg2_gpio_29_o : 1; /* [   29],        r/w,        0x0 */
            uint32_t reg2_gpio_30_o : 1; /* [   30],        r/w,        0x0 */
            uint32_t reg2_gpio_31_o : 1; /* [   31],        r/w,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg136;

    /* 0xAE8 : gpio_cfg137 */
    union {
        struct {
            uint32_t reg2_gpio_32_o : 1;  /* [    0],        r/w,        0x0 */
            uint32_t reg2_gpio_33_o : 1;  /* [    1],        r/w,        0x0 */
            uint32_t reg2_gpio_34_o : 1;  /* [    2],        r/w,        0x0 */
            uint32_t reg2_gpio_35_o : 1;  /* [    3],        r/w,        0x0 */
            uint32_t reg2_gpio_36_o : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reg2_gpio_37_o : 1;  /* [    5],        r/w,        0x0 */
            uint32_t reg2_gpio_38_o : 1;  /* [    6],        r/w,        0x0 */
            uint32_t reg2_gpio_39_o : 1;  /* [    7],        r/w,        0x0 */
            uint32_t reg2_gpio_40_o : 1;  /* [    8],        r/w,        0x0 */
            uint32_t reg2_gpio_41_o : 1;  /* [    9],        r/w,        0x0 */
            uint32_t reg2_gpio_42_o : 1;  /* [   10],        r/w,        0x0 */
            uint32_t reg2_gpio_43_o : 1;  /* [   11],        r/w,        0x0 */
            uint32_t reg2_gpio_44_o : 1;  /* [   12],        r/w,        0x0 */
            uint32_t reg2_gpio_45_o : 1;  /* [   13],        r/w,        0x0 */
            uint32_t reserved_14_31 : 18; /* [31:14],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg137;

    /* 0xAEC : gpio_cfg138 */
    union {
        struct {
            uint32_t reg2_gpio_0_set  : 1; /* [    0],        w1p,        0x0 */
            uint32_t reg2_gpio_1_set  : 1; /* [    1],        w1p,        0x0 */
            uint32_t reg2_gpio_2_set  : 1; /* [    2],        w1p,        0x0 */
            uint32_t reg2_gpio_3_set  : 1; /* [    3],        w1p,        0x0 */
            uint32_t reg2_gpio_4_set  : 1; /* [    4],        w1p,        0x0 */
            uint32_t reg2_gpio_5_set  : 1; /* [    5],        w1p,        0x0 */
            uint32_t reg2_gpio_6_set  : 1; /* [    6],        w1p,        0x0 */
            uint32_t reg2_gpio_7_set  : 1; /* [    7],        w1p,        0x0 */
            uint32_t reg2_gpio_8_set  : 1; /* [    8],        w1p,        0x0 */
            uint32_t reg2_gpio_9_set  : 1; /* [    9],        w1p,        0x0 */
            uint32_t reg2_gpio_10_set : 1; /* [   10],        w1p,        0x0 */
            uint32_t reg2_gpio_11_set : 1; /* [   11],        w1p,        0x0 */
            uint32_t reg2_gpio_12_set : 1; /* [   12],        w1p,        0x0 */
            uint32_t reg2_gpio_13_set : 1; /* [   13],        w1p,        0x0 */
            uint32_t reg2_gpio_14_set : 1; /* [   14],        w1p,        0x0 */
            uint32_t reg2_gpio_15_set : 1; /* [   15],        w1p,        0x0 */
            uint32_t reg2_gpio_16_set : 1; /* [   16],        w1p,        0x0 */
            uint32_t reg2_gpio_17_set : 1; /* [   17],        w1p,        0x0 */
            uint32_t reg2_gpio_18_set : 1; /* [   18],        w1p,        0x0 */
            uint32_t reg2_gpio_19_set : 1; /* [   19],        w1p,        0x0 */
            uint32_t reg2_gpio_20_set : 1; /* [   20],        w1p,        0x0 */
            uint32_t reg2_gpio_21_set : 1; /* [   21],        w1p,        0x0 */
            uint32_t reg2_gpio_22_set : 1; /* [   22],        w1p,        0x0 */
            uint32_t reg2_gpio_23_set : 1; /* [   23],        w1p,        0x0 */
            uint32_t reg2_gpio_24_set : 1; /* [   24],        w1p,        0x0 */
            uint32_t reg2_gpio_25_set : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg2_gpio_26_set : 1; /* [   26],        w1p,        0x0 */
            uint32_t reg2_gpio_27_set : 1; /* [   27],        w1p,        0x0 */
            uint32_t reg2_gpio_28_set : 1; /* [   28],        w1p,        0x0 */
            uint32_t reg2_gpio_29_set : 1; /* [   29],        w1p,        0x0 */
            uint32_t reg2_gpio_30_set : 1; /* [   30],        w1p,        0x0 */
            uint32_t reg2_gpio_31_set : 1; /* [   31],        w1p,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg138;

    /* 0xAF0 : gpio_cfg139 */
    union {
        struct {
            uint32_t reg2_gpio_32_set : 1;  /* [    0],        w1p,        0x0 */
            uint32_t reg2_gpio_33_set : 1;  /* [    1],        w1p,        0x0 */
            uint32_t reg2_gpio_34_set : 1;  /* [    2],        w1p,        0x0 */
            uint32_t reg2_gpio_35_set : 1;  /* [    3],        w1p,        0x0 */
            uint32_t reg2_gpio_36_set : 1;  /* [    4],        w1p,        0x0 */
            uint32_t reg2_gpio_37_set : 1;  /* [    5],        w1p,        0x0 */
            uint32_t reg2_gpio_38_set : 1;  /* [    6],        w1p,        0x0 */
            uint32_t reg2_gpio_39_set : 1;  /* [    7],        w1p,        0x0 */
            uint32_t reg2_gpio_40_set : 1;  /* [    8],        w1p,        0x0 */
            uint32_t reg2_gpio_41_set : 1;  /* [    9],        w1p,        0x0 */
            uint32_t reg2_gpio_42_set : 1;  /* [   10],        w1p,        0x0 */
            uint32_t reg2_gpio_43_set : 1;  /* [   11],        w1p,        0x0 */
            uint32_t reg2_gpio_44_set : 1;  /* [   12],        w1p,        0x0 */
            uint32_t reg2_gpio_45_set : 1;  /* [   13],        w1p,        0x0 */
            uint32_t reserved_14_31   : 18; /* [31:14],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg139;

    /* 0xAF4 : gpio_cfg140 */
    union {
        struct {
            uint32_t reg2_gpio_0_clr  : 1; /* [    0],        w1p,        0x0 */
            uint32_t reg2_gpio_1_clr  : 1; /* [    1],        w1p,        0x0 */
            uint32_t reg2_gpio_2_clr  : 1; /* [    2],        w1p,        0x0 */
            uint32_t reg2_gpio_3_clr  : 1; /* [    3],        w1p,        0x0 */
            uint32_t reg2_gpio_4_clr  : 1; /* [    4],        w1p,        0x0 */
            uint32_t reg2_gpio_5_clr  : 1; /* [    5],        w1p,        0x0 */
            uint32_t reg2_gpio_6_clr  : 1; /* [    6],        w1p,        0x0 */
            uint32_t reg2_gpio_7_clr  : 1; /* [    7],        w1p,        0x0 */
            uint32_t reg2_gpio_8_clr  : 1; /* [    8],        w1p,        0x0 */
            uint32_t reg2_gpio_9_clr  : 1; /* [    9],        w1p,        0x0 */
            uint32_t reg2_gpio_10_clr : 1; /* [   10],        w1p,        0x0 */
            uint32_t reg2_gpio_11_clr : 1; /* [   11],        w1p,        0x0 */
            uint32_t reg2_gpio_12_clr : 1; /* [   12],        w1p,        0x0 */
            uint32_t reg2_gpio_13_clr : 1; /* [   13],        w1p,        0x0 */
            uint32_t reg2_gpio_14_clr : 1; /* [   14],        w1p,        0x0 */
            uint32_t reg2_gpio_15_clr : 1; /* [   15],        w1p,        0x0 */
            uint32_t reg2_gpio_16_clr : 1; /* [   16],        w1p,        0x0 */
            uint32_t reg2_gpio_17_clr : 1; /* [   17],        w1p,        0x0 */
            uint32_t reg2_gpio_18_clr : 1; /* [   18],        w1p,        0x0 */
            uint32_t reg2_gpio_19_clr : 1; /* [   19],        w1p,        0x0 */
            uint32_t reg2_gpio_20_clr : 1; /* [   20],        w1p,        0x0 */
            uint32_t reg2_gpio_21_clr : 1; /* [   21],        w1p,        0x0 */
            uint32_t reg2_gpio_22_clr : 1; /* [   22],        w1p,        0x0 */
            uint32_t reg2_gpio_23_clr : 1; /* [   23],        w1p,        0x0 */
            uint32_t reg2_gpio_24_clr : 1; /* [   24],        w1p,        0x0 */
            uint32_t reg2_gpio_25_clr : 1; /* [   25],        w1p,        0x0 */
            uint32_t reg2_gpio_26_clr : 1; /* [   26],        w1p,        0x0 */
            uint32_t reg2_gpio_27_clr : 1; /* [   27],        w1p,        0x0 */
            uint32_t reg2_gpio_28_clr : 1; /* [   28],        w1p,        0x0 */
            uint32_t reg2_gpio_29_clr : 1; /* [   29],        w1p,        0x0 */
            uint32_t reg2_gpio_30_clr : 1; /* [   30],        w1p,        0x0 */
            uint32_t reg2_gpio_31_clr : 1; /* [   31],        w1p,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg140;

    /* 0xAF8 : gpio_cfg141 */
    union {
        struct {
            uint32_t reg2_gpio_32_clr : 1;  /* [    0],        w1p,        0x0 */
            uint32_t reg2_gpio_33_clr : 1;  /* [    1],        w1p,        0x0 */
            uint32_t reg2_gpio_34_clr : 1;  /* [    2],        w1p,        0x0 */
            uint32_t reg2_gpio_35_clr : 1;  /* [    3],        w1p,        0x0 */
            uint32_t reg2_gpio_36_clr : 1;  /* [    4],        w1p,        0x0 */
            uint32_t reg2_gpio_37_clr : 1;  /* [    5],        w1p,        0x0 */
            uint32_t reg2_gpio_38_clr : 1;  /* [    6],        w1p,        0x0 */
            uint32_t reg2_gpio_39_clr : 1;  /* [    7],        w1p,        0x0 */
            uint32_t reg2_gpio_40_clr : 1;  /* [    8],        w1p,        0x0 */
            uint32_t reg2_gpio_41_clr : 1;  /* [    9],        w1p,        0x0 */
            uint32_t reg2_gpio_42_clr : 1;  /* [   10],        w1p,        0x0 */
            uint32_t reg2_gpio_43_clr : 1;  /* [   11],        w1p,        0x0 */
            uint32_t reg2_gpio_44_clr : 1;  /* [   12],        w1p,        0x0 */
            uint32_t reg2_gpio_45_clr : 1;  /* [   13],        w1p,        0x0 */
            uint32_t reserved_14_31   : 18; /* [31:14],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg141;

    /* 0xAFC : gpio_cfg142 */
    union {
        struct {
            uint32_t cr_gpio_tx_en        : 1; /* [    0],        r/w,        0x0 */
            uint32_t cr_invert_code0_high : 1; /* [    1],        r/w,        0x0 */
            uint32_t cr_invert_code1_high : 1; /* [    2],        r/w,        0x0 */
            uint32_t reserved_3_6         : 4; /* [ 6: 3],       rsvd,        0x0 */
            uint32_t cr_code_total_time   : 9; /* [15: 7],        r/w,      0x190 */
            uint32_t cr_code0_high_time   : 8; /* [23:16],        r/w,       0xc8 */
            uint32_t cr_code1_high_time   : 8; /* [31:24],        r/w,       0xc8 */
        } BF;
        uint32_t WORD;
    } gpio_cfg142;

    /* 0xB00 : gpio_cfg143 */
    union {
        struct {
            uint32_t cr_gpio_dma_tx_en         : 1; /* [    0],        r/w,        0x0 */
            uint32_t cr_gpio_dma_out_sel_latch : 1; /* [    1],        r/w,        0x0 */
            uint32_t gpio_tx_fifo_clr          : 1; /* [    2],        w1c,        0x0 */
            uint32_t gpio_tx_end_clr           : 1; /* [    3],        w1c,        0x0 */
            uint32_t gpio_tx_fifo_overflow     : 1; /* [    4],          r,        0x0 */
            uint32_t gpio_tx_fifo_underflow    : 1; /* [    5],          r,        0x0 */
            uint32_t reserved_6                : 1; /* [    6],       rsvd,        0x0 */
            uint32_t cr_gpio_dma_park_value    : 1; /* [    7],        r/w,        0x0 */
            uint32_t gpio_tx_fifo_cnt          : 8; /* [15: 8],          r,       0x80 */
            uint32_t cr_gpio_tx_fifo_th        : 7; /* [22:16],        r/w,        0x0 */
            uint32_t cr_gpio_tx_end_mask       : 1; /* [   23],        r/w,        0x1 */
            uint32_t cr_gpio_tx_fifo_mask      : 1; /* [   24],        r/w,        0x1 */
            uint32_t cr_gpio_tx_fer_mask       : 1; /* [   25],        r/w,        0x1 */
            uint32_t r_gpio_tx_end_int         : 1; /* [   26],          r,        0x0 */
            uint32_t r_gpio_tx_fifo_int        : 1; /* [   27],          r,        0x0 */
            uint32_t r_gpio_tx_fer_int         : 1; /* [   28],          r,        0x0 */
            uint32_t cr_gpio_tx_end_en         : 1; /* [   29],        r/w,        0x1 */
            uint32_t cr_gpio_tx_fifo_en        : 1; /* [   30],        r/w,        0x1 */
            uint32_t cr_gpio_tx_fer_en         : 1; /* [   31],        r/w,        0x1 */
        } BF;
        uint32_t WORD;
    } gpio_cfg143;

    /* 0xB04 : gpio_cfg144 */
    union {
        struct {
            uint32_t gpio_tx_data_to_fifo : 16; /* [15: 0],          w,          x */
            uint32_t reserved_16_31       : 16; /* [31:16],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } gpio_cfg144;
};

typedef volatile struct glb_reg glb_reg_t;

#endif /* __GLB_REG_H__ */
