/*----------------------------------------------------------------------------*/
/* Bit definitions for a -----------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/* Registrer 0 ---------------------------------------------------------------*/
#define a_R00_ADDRESS             0x00

#define a_R00_RST_Pos             0
#define a_R00_RST_Msk             (1 << a_R00_RST_Pos)
#define a_R00_RST                 a_R00_RST_Msk
                                  
/* Registrer 1 ---------------------------------------------------------------*/
#define a_R01_ADDRESS             0x0F

#define a_R01_SLEEP4_CH_Pos       0
#define a_R01_SLEEP4_CH_Msk       (15 << a_R01_SLEEP4_CH_Pos)
#define a_R01_SLEEP4_CH_0         (1 << a_R01_SLEEP4_CH_Pos)
#define a_R01_SLEEP4_CH_1         (2 << a_R01_SLEEP4_CH_Pos)
#define a_R01_SLEEP4_CH_2         (4 << a_R01_SLEEP4_CH_Pos)
#define a_R01_SLEEP4_CH_3         (8 << a_R01_SLEEP4_CH_Pos)
                                  
#define a_R01_SLEEP2_CH_Pos       4
#define a_R01_SLEEP2_CH_Msk       (3 << a_R01_SLEEP2_CH_Pos)
#define a_R01_SLEEP2_CH_0         (1 << a_R01_SLEEP2_CH_Pos)
#define a_R01_SLEEP2_CH_1         (2 << a_R01_SLEEP2_CH_Pos)
                                  
#define a_R01_SLEEP1_CH_1_Pos     6
#define a_R01_SLEEP1_CH_1_Msk     (1 << a_R01_SLEEP1_CH_1_Pos)
#define a_R01_SLEEP1_CH_1         a_R01_SLEEP1_CH_1_Msk
                                  
#define a_R01_SLEEP_Pos           8
#define a_R01_SLEEP_Msk           (1 << a_R01_SLEEP_Pos)
#define a_R01_SLEEP               a_R01_SLEEP_Msk
                                  
#define a_R01_PD_Pos              9
#define a_R01_PD_Msk              (1 << a_R01_PD_Pos)
#define a_R01_PD                  a_R01_PD_Msk
                                  
#define a_R01_PD_PIN_Pos          10
#define a_R01_PD_PIN_Msk          (3 << a_R01_PD_PIN_Pos)
#define a_R01_PD_PIN_0            (1 << a_R01_PD_PIN_Pos)
#define a_R01_PD_PIN_1            (2 << a_R01_PD_PIN_Pos)
                                  
/* Registrer 2 ---------------------------------------------------------------*/
#define a_R02_ADDRESS             0x11

#define a_R02_ILVDS_LCLK_Pos      0
#define a_R02_ILVDS_LCLK_Msk      (7 << a_R02_ILVDS_LCLK_Pos)
#define a_R02_ILVDS_LCLK_0        (1 << a_R02_ILVDS_LCLK_Pos)
#define a_R02_ILVDS_LCLK_1        (2 << a_R02_ILVDS_LCLK_Pos)
#define a_R02_ILVDS_LCLK_2        (4 << a_R02_ILVDS_LCLK_Pos)
                                  
#define a_R02_ILVDS_FRAME_Pos     4
#define a_R02_ILVDS_FRAME_Msk     (7 << a_R02_ILVDS_FRAME_Pos)
#define a_R02_ILVDS_FRAME_0       (1 << a_R02_ILVDS_FRAME_Pos)
#define a_R02_ILVDS_FRAME_1       (2 << a_R02_ILVDS_FRAME_Pos)
#define a_R02_ILVDS_FRAME_2       (4 << a_R02_ILVDS_FRAME_Pos)
                                  
#define a_R02_ILVDS_DAT_Pos       8
#define a_R02_ILVDS_DAT_Msk       (7 << a_R02_ILVDS_DAT_Pos)
#define a_R02_ILVDS_DAT_0         (1 << a_R02_ILVDS_DAT_Pos)
#define a_R02_ILVDS_DAT_1         (2 << a_R02_ILVDS_DAT_Pos)
#define a_R02_ILVDS_DAT_2         (4 << a_R02_ILVDS_DAT_Pos)
                                  
/* Registrer 3 ---------------------------------------------------------------*/
#define a_R03_ADDRESS             0x12

#define a_R03_EN_LVDS_TERM_Pos    14
#define a_R03_EN_LVDS_TERM_Msk    (1 << a_R03_EN_LVDS_TERM_Pos)
#define a_R03_EN_LVDS_TERM        a_R03_EN_LVDS_TERM_Msk
                                  
#define a_R03_TERM_LCLK_Pos       0
#define a_R03_TERM_LCLK_Msk       (7 << a_R03_TERM_LCLK_Pos)
#define a_R03_TERM_LCLK_0         (1 << a_R03_TERM_LCLK_Pos)
#define a_R03_TERM_LCLK_1         (2 << a_R03_TERM_LCLK_Pos)
#define a_R03_TERM_LCLK_2         (4 << a_R03_TERM_LCLK_Pos)
                                  
#define a_R03_TERM_FRAME_Pos      4
#define a_R03_TERM_FRAME_Msk      (7 << a_R03_TERM_FRAME_Pos)
#define a_R03_TERM_FRAME_0        (1 << a_R03_TERM_FRAME_Pos)
#define a_R03_TERM_FRAME_1        (2 << a_R03_TERM_FRAME_Pos)
#define a_R03_TERM_FRAME_2        (4 << a_R03_TERM_FRAME_Pos)
                                  
#define a_R03_TERM_DAT_Pos        8
#define a_R03_TERM_DAT_Msk        (7 << a_R03_TERM_DAT_Pos)
#define a_R03_TERM_DAT_0          (1 << a_R03_TERM_DAT_Pos)
#define a_R03_TERM_DAT_1          (2 << a_R03_TERM_DAT_Pos)
#define a_R03_TERM_DAT_2          (4 << a_R03_TERM_DAT_Pos)
                                  
/* Registrer 4 ---------------------------------------------------------------*/
#define a_R04_ADDRESS             0x24

#define a_R04_INVERT4_CH_Pos      0
#define a_R04_INVERT4_CH_Msk      (15 << a_R04_INVERT4_CH_Pos)
#define a_R04_INVERT4_CH_0        (1 << a_R04_INVERT4_CH_Pos)
#define a_R04_INVERT4_CH_1        (2 << a_R04_INVERT4_CH_Pos)
#define a_R04_INVERT4_CH_2        (4 << a_R04_INVERT4_CH_Pos)
#define a_R04_INVERT4_CH_3        (8 << a_R04_INVERT4_CH_Pos)
                                  
#define a_R04_INVERT2_CH_Pos      4
#define a_R04_INVERT2_CH_Msk      (3 << a_R04_INVERT2_CH_Pos)
#define a_R04_INVERT2_CH_0        (1 << a_R04_INVERT2_CH_Pos)
#define a_R04_INVERT2_CH_1        (2 << a_R04_INVERT2_CH_Pos)
                                  
#define a_R04_INVERT1_CH_1_Pos    6
#define a_R04_INVERT1_CH_1_Msk    (1 << a_R04_INVERT1_CH_1_Pos)
#define a_R04_INVERT1_CH_1        a_R04_INVERT1_CH_1_Msk
                                  
/* Registrer 5 ---------------------------------------------------------------*/
#define a_R05_ADDRESS             0x25

#define a_R05_OUT_PATTERN_Pos     4
#define a_R05_OUT_PATTERN_Msk     (7 << a_R05_OUT_PATTERN_Pos)
#define a_R05_OUT_PATTERN_0       (1 << a_R05_OUT_PATTERN_Pos)
#define a_R05_OUT_PATTERN_1       (2 << a_R05_OUT_PATTERN_Pos)
#define a_R05_OUT_PATTERN_2       (4 << a_R05_OUT_PATTERN_Pos)
                                  
/* Registrer 6 ---------------------------------------------------------------*/
#define a_R06_ADDRESS             0x26

#define a_R06_CUSTOM_PATTERN1_Pos 8
#define a_R06_CUSTOM_PATTERN1_Msk (255 << a_R06_CUSTOM_PATTERN1_Pos)
#define a_R06_CUSTOM_PATTERN1_0   (1 << a_R06_CUSTOM_PATTERN1_Pos)
#define a_R06_CUSTOM_PATTERN1_1   (2 << a_R06_CUSTOM_PATTERN1_Pos)
#define a_R06_CUSTOM_PATTERN1_2   (4 << a_R06_CUSTOM_PATTERN1_Pos)
#define a_R06_CUSTOM_PATTERN1_3   (8 << a_R06_CUSTOM_PATTERN1_Pos)
#define a_R06_CUSTOM_PATTERN1_4   (16 << a_R06_CUSTOM_PATTERN1_Pos)
#define a_R06_CUSTOM_PATTERN1_5   (32 << a_R06_CUSTOM_PATTERN1_Pos)
#define a_R06_CUSTOM_PATTERN1_6   (64 << a_R06_CUSTOM_PATTERN1_Pos)
#define a_R06_CUSTOM_PATTERN1_7   (128 << a_R06_CUSTOM_PATTERN1_Pos)
                                  
/* Registrer 7 ---------------------------------------------------------------*/
#define a_R07_ADDRESS             0x27

#define a_R07_CUSTOM_PATTERN2_Pos 8
#define a_R07_CUSTOM_PATTERN2_Msk (255 << a_R07_CUSTOM_PATTERN2_Pos)
#define a_R07_CUSTOM_PATTERN2_0   (1 << a_R07_CUSTOM_PATTERN2_Pos)
#define a_R07_CUSTOM_PATTERN2_1   (2 << a_R07_CUSTOM_PATTERN2_Pos)
#define a_R07_CUSTOM_PATTERN2_2   (4 << a_R07_CUSTOM_PATTERN2_Pos)
#define a_R07_CUSTOM_PATTERN2_3   (8 << a_R07_CUSTOM_PATTERN2_Pos)
#define a_R07_CUSTOM_PATTERN2_4   (16 << a_R07_CUSTOM_PATTERN2_Pos)
#define a_R07_CUSTOM_PATTERN2_5   (32 << a_R07_CUSTOM_PATTERN2_Pos)
#define a_R07_CUSTOM_PATTERN2_6   (64 << a_R07_CUSTOM_PATTERN2_Pos)
#define a_R07_CUSTOM_PATTERN2_7   (128 << a_R07_CUSTOM_PATTERN2_Pos)
                                  
/* Registrer 8 ---------------------------------------------------------------*/
#define a_R08_ADDRESS             0x2A

#define a_R08_CGAIN4_CH1_Pos      0
#define a_R08_CGAIN4_CH1_Msk      (15 << a_R08_CGAIN4_CH1_Pos)
#define a_R08_CGAIN4_CH1_0        (1 << a_R08_CGAIN4_CH1_Pos)
#define a_R08_CGAIN4_CH1_1        (2 << a_R08_CGAIN4_CH1_Pos)
#define a_R08_CGAIN4_CH1_2        (4 << a_R08_CGAIN4_CH1_Pos)
#define a_R08_CGAIN4_CH1_3        (8 << a_R08_CGAIN4_CH1_Pos)
                                  
#define a_R08_CGAIN4_CH2_Pos      4
#define a_R08_CGAIN4_CH2_Msk      (15 << a_R08_CGAIN4_CH2_Pos)
#define a_R08_CGAIN4_CH2_0        (1 << a_R08_CGAIN4_CH2_Pos)
#define a_R08_CGAIN4_CH2_1        (2 << a_R08_CGAIN4_CH2_Pos)
#define a_R08_CGAIN4_CH2_2        (4 << a_R08_CGAIN4_CH2_Pos)
#define a_R08_CGAIN4_CH2_3        (8 << a_R08_CGAIN4_CH2_Pos)
                                  
#define a_R08_CGAIN4_CH3_Pos      8
#define a_R08_CGAIN4_CH3_Msk      (15 << a_R08_CGAIN4_CH3_Pos)
#define a_R08_CGAIN4_CH3_0        (1 << a_R08_CGAIN4_CH3_Pos)
#define a_R08_CGAIN4_CH3_1        (2 << a_R08_CGAIN4_CH3_Pos)
#define a_R08_CGAIN4_CH3_2        (4 << a_R08_CGAIN4_CH3_Pos)
#define a_R08_CGAIN4_CH3_3        (8 << a_R08_CGAIN4_CH3_Pos)
                                  
#define a_R08_CGAIN4_CH4_Pos      12
#define a_R08_CGAIN4_CH4_Msk      (15 << a_R08_CGAIN4_CH4_Pos)
#define a_R08_CGAIN4_CH4_0        (1 << a_R08_CGAIN4_CH4_Pos)
#define a_R08_CGAIN4_CH4_1        (2 << a_R08_CGAIN4_CH4_Pos)
#define a_R08_CGAIN4_CH4_2        (4 << a_R08_CGAIN4_CH4_Pos)
#define a_R08_CGAIN4_CH4_3        (8 << a_R08_CGAIN4_CH4_Pos)
                                  
/* Registrer 9 ---------------------------------------------------------------*/
#define a_R09_ADDRESS             0x2B

#define a_R09_CGAIN2_CH1_Pos      0
#define a_R09_CGAIN2_CH1_Msk      (15 << a_R09_CGAIN2_CH1_Pos)
#define a_R09_CGAIN2_CH1_0        (1 << a_R09_CGAIN2_CH1_Pos)
#define a_R09_CGAIN2_CH1_1        (2 << a_R09_CGAIN2_CH1_Pos)
#define a_R09_CGAIN2_CH1_2        (4 << a_R09_CGAIN2_CH1_Pos)
#define a_R09_CGAIN2_CH1_3        (8 << a_R09_CGAIN2_CH1_Pos)
                                  
#define a_R09_CGAIN2_CH2_Pos      4
#define a_R09_CGAIN2_CH2_Msk      (15 << a_R09_CGAIN2_CH2_Pos)
#define a_R09_CGAIN2_CH2_0        (1 << a_R09_CGAIN2_CH2_Pos)
#define a_R09_CGAIN2_CH2_1        (2 << a_R09_CGAIN2_CH2_Pos)
#define a_R09_CGAIN2_CH2_2        (4 << a_R09_CGAIN2_CH2_Pos)
#define a_R09_CGAIN2_CH2_3        (8 << a_R09_CGAIN2_CH2_Pos)
                                  
#define a_R09_CGAIN1_CH1_Pos      8
#define a_R09_CGAIN1_CH1_Msk      (15 << a_R09_CGAIN1_CH1_Pos)
#define a_R09_CGAIN1_CH1_0        (1 << a_R09_CGAIN1_CH1_Pos)
#define a_R09_CGAIN1_CH1_1        (2 << a_R09_CGAIN1_CH1_Pos)
#define a_R09_CGAIN1_CH1_2        (4 << a_R09_CGAIN1_CH1_Pos)
#define a_R09_CGAIN1_CH1_3        (8 << a_R09_CGAIN1_CH1_Pos)
                                  
/* Registrer 10 --------------------------------------------------------------*/
#define a_R10_ADDRESS             0x30

#define a_R10_JITTER_CTRL_Pos     0
#define a_R10_JITTER_CTRL_Msk     (255 << a_R10_JITTER_CTRL_Pos)
#define a_R10_JITTER_CTRL_0       (1 << a_R10_JITTER_CTRL_Pos)
#define a_R10_JITTER_CTRL_1       (2 << a_R10_JITTER_CTRL_Pos)
#define a_R10_JITTER_CTRL_2       (4 << a_R10_JITTER_CTRL_Pos)
#define a_R10_JITTER_CTRL_3       (8 << a_R10_JITTER_CTRL_Pos)
#define a_R10_JITTER_CTRL_4       (16 << a_R10_JITTER_CTRL_Pos)
#define a_R10_JITTER_CTRL_5       (32 << a_R10_JITTER_CTRL_Pos)
#define a_R10_JITTER_CTRL_6       (64 << a_R10_JITTER_CTRL_Pos)
#define a_R10_JITTER_CTRL_7       (128 << a_R10_JITTER_CTRL_Pos)
                                  
/* Registrer 11 --------------------------------------------------------------*/
#define a_R11_ADDRESS             0x31

#define a_R11_CHANNEL_NUM_Pos     0
#define a_R11_CHANNEL_NUM_Msk     (7 << a_R11_CHANNEL_NUM_Pos)
#define a_R11_CHANNEL_NUM_0       (1 << a_R11_CHANNEL_NUM_Pos)
#define a_R11_CHANNEL_NUM_1       (2 << a_R11_CHANNEL_NUM_Pos)
#define a_R11_CHANNEL_NUM_2       (4 << a_R11_CHANNEL_NUM_Pos)
                                  
#define a_R11_CLK_DIVIDE_Pos      8
#define a_R11_CLK_DIVIDE_Msk      (3 << a_R11_CLK_DIVIDE_Pos)
#define a_R11_CLK_DIVIDE_0        (1 << a_R11_CLK_DIVIDE_Pos)
#define a_R11_CLK_DIVIDE_1        (2 << a_R11_CLK_DIVIDE_Pos)
                                  
/* Registrer 12 --------------------------------------------------------------*/
#define a_R12_ADDRESS             0x33

#define a_R12_CGAIN_CFG_Pos       0
#define a_R12_CGAIN_CFG_Msk       (1 << a_R12_CGAIN_CFG_Pos)
#define a_R12_CGAIN_CFG           a_R12_CGAIN_CFG_Msk
                                  
#define a_R12_FINE_GAIN_EN_Pos    1
#define a_R12_FINE_GAIN_EN_Msk    (1 << a_R12_FINE_GAIN_EN_Pos)
#define a_R12_FINE_GAIN_EN        a_R12_FINE_GAIN_EN_Msk
                                  
/* Registrer 13 --------------------------------------------------------------*/
#define a_R13_ADDRESS             0x34

#define a_R13_FGAIN_BRANCH1_Pos   0
#define a_R13_FGAIN_BRANCH1_Msk   (127 << a_R13_FGAIN_BRANCH1_Pos)
#define a_R13_FGAIN_BRANCH1_0     (1 << a_R13_FGAIN_BRANCH1_Pos)
#define a_R13_FGAIN_BRANCH1_1     (2 << a_R13_FGAIN_BRANCH1_Pos)
#define a_R13_FGAIN_BRANCH1_2     (4 << a_R13_FGAIN_BRANCH1_Pos)
#define a_R13_FGAIN_BRANCH1_3     (8 << a_R13_FGAIN_BRANCH1_Pos)
#define a_R13_FGAIN_BRANCH1_4     (16 << a_R13_FGAIN_BRANCH1_Pos)
#define a_R13_FGAIN_BRANCH1_5     (32 << a_R13_FGAIN_BRANCH1_Pos)
#define a_R13_FGAIN_BRANCH1_6     (64 << a_R13_FGAIN_BRANCH1_Pos)
                                  
#define a_R13_FGAIN_BRANCH2_Pos   8
#define a_R13_FGAIN_BRANCH2_Msk   (127 << a_R13_FGAIN_BRANCH2_Pos)
#define a_R13_FGAIN_BRANCH2_0     (1 << a_R13_FGAIN_BRANCH2_Pos)
#define a_R13_FGAIN_BRANCH2_1     (2 << a_R13_FGAIN_BRANCH2_Pos)
#define a_R13_FGAIN_BRANCH2_2     (4 << a_R13_FGAIN_BRANCH2_Pos)
#define a_R13_FGAIN_BRANCH2_3     (8 << a_R13_FGAIN_BRANCH2_Pos)
#define a_R13_FGAIN_BRANCH2_4     (16 << a_R13_FGAIN_BRANCH2_Pos)
#define a_R13_FGAIN_BRANCH2_5     (32 << a_R13_FGAIN_BRANCH2_Pos)
#define a_R13_FGAIN_BRANCH2_6     (64 << a_R13_FGAIN_BRANCH2_Pos)
                                  
/* Registrer 14 --------------------------------------------------------------*/
#define a_R14_ADDRESS             0x35

#define a_R14_FGAIN_BRANCH3_Pos   0
#define a_R14_FGAIN_BRANCH3_Msk   (127 << a_R14_FGAIN_BRANCH3_Pos)
#define a_R14_FGAIN_BRANCH3_0     (1 << a_R14_FGAIN_BRANCH3_Pos)
#define a_R14_FGAIN_BRANCH3_1     (2 << a_R14_FGAIN_BRANCH3_Pos)
#define a_R14_FGAIN_BRANCH3_2     (4 << a_R14_FGAIN_BRANCH3_Pos)
#define a_R14_FGAIN_BRANCH3_3     (8 << a_R14_FGAIN_BRANCH3_Pos)
#define a_R14_FGAIN_BRANCH3_4     (16 << a_R14_FGAIN_BRANCH3_Pos)
#define a_R14_FGAIN_BRANCH3_5     (32 << a_R14_FGAIN_BRANCH3_Pos)
#define a_R14_FGAIN_BRANCH3_6     (64 << a_R14_FGAIN_BRANCH3_Pos)
                                  
#define a_R14_FGAIN_BRANCH4_Pos   8
#define a_R14_FGAIN_BRANCH4_Msk   (127 << a_R14_FGAIN_BRANCH4_Pos)
#define a_R14_FGAIN_BRANCH4_0     (1 << a_R14_FGAIN_BRANCH4_Pos)
#define a_R14_FGAIN_BRANCH4_1     (2 << a_R14_FGAIN_BRANCH4_Pos)
#define a_R14_FGAIN_BRANCH4_2     (4 << a_R14_FGAIN_BRANCH4_Pos)
#define a_R14_FGAIN_BRANCH4_3     (8 << a_R14_FGAIN_BRANCH4_Pos)
#define a_R14_FGAIN_BRANCH4_4     (16 << a_R14_FGAIN_BRANCH4_Pos)
#define a_R14_FGAIN_BRANCH4_5     (32 << a_R14_FGAIN_BRANCH4_Pos)
#define a_R14_FGAIN_BRANCH4_6     (64 << a_R14_FGAIN_BRANCH4_Pos)
                                  
/* Registrer 15 --------------------------------------------------------------*/
#define a_R15_ADDRESS             0x36

#define a_R15_FGAIN_BRANCH5_Pos   0
#define a_R15_FGAIN_BRANCH5_Msk   (127 << a_R15_FGAIN_BRANCH5_Pos)
#define a_R15_FGAIN_BRANCH5_0     (1 << a_R15_FGAIN_BRANCH5_Pos)
#define a_R15_FGAIN_BRANCH5_1     (2 << a_R15_FGAIN_BRANCH5_Pos)
#define a_R15_FGAIN_BRANCH5_2     (4 << a_R15_FGAIN_BRANCH5_Pos)
#define a_R15_FGAIN_BRANCH5_3     (8 << a_R15_FGAIN_BRANCH5_Pos)
#define a_R15_FGAIN_BRANCH5_4     (16 << a_R15_FGAIN_BRANCH5_Pos)
#define a_R15_FGAIN_BRANCH5_5     (32 << a_R15_FGAIN_BRANCH5_Pos)
#define a_R15_FGAIN_BRANCH5_6     (64 << a_R15_FGAIN_BRANCH5_Pos)
                                  
#define a_R15_FGAIN_BRANCH6_Pos   8
#define a_R15_FGAIN_BRANCH6_Msk   (127 << a_R15_FGAIN_BRANCH6_Pos)
#define a_R15_FGAIN_BRANCH6_0     (1 << a_R15_FGAIN_BRANCH6_Pos)
#define a_R15_FGAIN_BRANCH6_1     (2 << a_R15_FGAIN_BRANCH6_Pos)
#define a_R15_FGAIN_BRANCH6_2     (4 << a_R15_FGAIN_BRANCH6_Pos)
#define a_R15_FGAIN_BRANCH6_3     (8 << a_R15_FGAIN_BRANCH6_Pos)
#define a_R15_FGAIN_BRANCH6_4     (16 << a_R15_FGAIN_BRANCH6_Pos)
#define a_R15_FGAIN_BRANCH6_5     (32 << a_R15_FGAIN_BRANCH6_Pos)
#define a_R15_FGAIN_BRANCH6_6     (64 << a_R15_FGAIN_BRANCH6_Pos)
                                  
/* Registrer 16 --------------------------------------------------------------*/
#define a_R16_ADDRESS             0x37

#define a_R16_FGAIN_BRANCH7_Pos   0
#define a_R16_FGAIN_BRANCH7_Msk   (127 << a_R16_FGAIN_BRANCH7_Pos)
#define a_R16_FGAIN_BRANCH7_0     (1 << a_R16_FGAIN_BRANCH7_Pos)
#define a_R16_FGAIN_BRANCH7_1     (2 << a_R16_FGAIN_BRANCH7_Pos)
#define a_R16_FGAIN_BRANCH7_2     (4 << a_R16_FGAIN_BRANCH7_Pos)
#define a_R16_FGAIN_BRANCH7_3     (8 << a_R16_FGAIN_BRANCH7_Pos)
#define a_R16_FGAIN_BRANCH7_4     (16 << a_R16_FGAIN_BRANCH7_Pos)
#define a_R16_FGAIN_BRANCH7_5     (32 << a_R16_FGAIN_BRANCH7_Pos)
#define a_R16_FGAIN_BRANCH7_6     (64 << a_R16_FGAIN_BRANCH7_Pos)
                                  
#define a_R16_FGAIN_BRANCH8_Pos   8
#define a_R16_FGAIN_BRANCH8_Msk   (127 << a_R16_FGAIN_BRANCH8_Pos)
#define a_R16_FGAIN_BRANCH8_0     (1 << a_R16_FGAIN_BRANCH8_Pos)
#define a_R16_FGAIN_BRANCH8_1     (2 << a_R16_FGAIN_BRANCH8_Pos)
#define a_R16_FGAIN_BRANCH8_2     (4 << a_R16_FGAIN_BRANCH8_Pos)
#define a_R16_FGAIN_BRANCH8_3     (8 << a_R16_FGAIN_BRANCH8_Pos)
#define a_R16_FGAIN_BRANCH8_4     (16 << a_R16_FGAIN_BRANCH8_Pos)
#define a_R16_FGAIN_BRANCH8_5     (32 << a_R16_FGAIN_BRANCH8_Pos)
#define a_R16_FGAIN_BRANCH8_6     (64 << a_R16_FGAIN_BRANCH8_Pos)
                                  
/* Registrer 17 --------------------------------------------------------------*/
#define a_R17_ADDRESS             0x3A

#define a_R17_INSEL_ADC1_Pos      0
#define a_R17_INSEL_ADC1_Msk      (31 << a_R17_INSEL_ADC1_Pos)
#define a_R17_INSEL_ADC1_0        (1 << a_R17_INSEL_ADC1_Pos)
#define a_R17_INSEL_ADC1_1        (2 << a_R17_INSEL_ADC1_Pos)
#define a_R17_INSEL_ADC1_2        (4 << a_R17_INSEL_ADC1_Pos)
#define a_R17_INSEL_ADC1_3        (8 << a_R17_INSEL_ADC1_Pos)
#define a_R17_INSEL_ADC1_4        (16 << a_R17_INSEL_ADC1_Pos)
                                  
#define a_R17_INSEL_ADC2_Pos      8
#define a_R17_INSEL_ADC2_Msk      (31 << a_R17_INSEL_ADC2_Pos)
#define a_R17_INSEL_ADC2_0        (1 << a_R17_INSEL_ADC2_Pos)
#define a_R17_INSEL_ADC2_1        (2 << a_R17_INSEL_ADC2_Pos)
#define a_R17_INSEL_ADC2_2        (4 << a_R17_INSEL_ADC2_Pos)
#define a_R17_INSEL_ADC2_3        (8 << a_R17_INSEL_ADC2_Pos)
#define a_R17_INSEL_ADC2_4        (16 << a_R17_INSEL_ADC2_Pos)
                                  
/* Registrer 18 --------------------------------------------------------------*/
#define a_R18_ADDRESS             0x3B

#define a_R18_INSEL_ADC3_Pos      0
#define a_R18_INSEL_ADC3_Msk      (31 << a_R18_INSEL_ADC3_Pos)
#define a_R18_INSEL_ADC3_0        (1 << a_R18_INSEL_ADC3_Pos)
#define a_R18_INSEL_ADC3_1        (2 << a_R18_INSEL_ADC3_Pos)
#define a_R18_INSEL_ADC3_2        (4 << a_R18_INSEL_ADC3_Pos)
#define a_R18_INSEL_ADC3_3        (8 << a_R18_INSEL_ADC3_Pos)
#define a_R18_INSEL_ADC3_4        (16 << a_R18_INSEL_ADC3_Pos)
                                  
#define a_R18_INSEL_ADC4_Pos      8
#define a_R18_INSEL_ADC4_Msk      (31 << a_R18_INSEL_ADC4_Pos)
#define a_R18_INSEL_ADC4_0        (1 << a_R18_INSEL_ADC4_Pos)
#define a_R18_INSEL_ADC4_1        (2 << a_R18_INSEL_ADC4_Pos)
#define a_R18_INSEL_ADC4_2        (4 << a_R18_INSEL_ADC4_Pos)
#define a_R18_INSEL_ADC4_3        (8 << a_R18_INSEL_ADC4_Pos)
#define a_R18_INSEL_ADC4_4        (16 << a_R18_INSEL_ADC4_Pos)
                                  
/* Registrer 19 --------------------------------------------------------------*/
#define a_R19_ADDRESS             0x42

#define a_R19_PHASE_DDR_Pos       5
#define a_R19_PHASE_DDR_Msk       (3 << a_R19_PHASE_DDR_Pos)
#define a_R19_PHASE_DDR_0         (1 << a_R19_PHASE_DDR_Pos)
#define a_R19_PHASE_DDR_1         (2 << a_R19_PHASE_DDR_Pos)
                                  
/* Registrer 20 --------------------------------------------------------------*/
#define a_R20_ADDRESS             0x45

#define a_R20_PATTERN_MODE_Pos    0
#define a_R20_PATTERN_MODE_Msk    (3 << a_R20_PATTERN_MODE_Pos)
#define a_R20_PATTERN_MODE_0      (1 << a_R20_PATTERN_MODE_Pos)
#define a_R20_PATTERN_MODE_1      (2 << a_R20_PATTERN_MODE_Pos)
                                  
/* Registrer 21 --------------------------------------------------------------*/
#define a_R21_ADDRESS             0x46

#define a_R21_BTC_MODE_Pos        2
#define a_R21_BTC_MODE_Msk        (1 << a_R21_BTC_MODE_Pos)
#define a_R21_BTC_MODE            a_R21_BTC_MODE_Msk
                                  
#define a_R21_MSB_FIRST_Pos       3
#define a_R21_MSB_FIRST_Msk       (1 << a_R21_MSB_FIRST_Pos)
#define a_R21_MSB_FIRST           a_R21_MSB_FIRST_Msk
                                  
/* Registrer 22 --------------------------------------------------------------*/
#define a_R22_ADDRESS             0x50

#define a_R22_ADC_CURR_Pos        0
#define a_R22_ADC_CURR_Msk        (7 << a_R22_ADC_CURR_Pos)
#define a_R22_ADC_CURR_0          (1 << a_R22_ADC_CURR_Pos)
#define a_R22_ADC_CURR_1          (2 << a_R22_ADC_CURR_Pos)
#define a_R22_ADC_CURR_2          (4 << a_R22_ADC_CURR_Pos)
                                  
#define a_R22_VCM_DRIVE_Pos       4
#define a_R22_VCM_DRIVE_Msk       (3 << a_R22_VCM_DRIVE_Pos)
#define a_R22_VCM_DRIVE_0         (1 << a_R22_VCM_DRIVE_Pos)
#define a_R22_VCM_DRIVE_1         (2 << a_R22_VCM_DRIVE_Pos)
                                  
/* Registrer 23 --------------------------------------------------------------*/
#define a_R23_ADDRESS             0x52

#define a_R23_LVDS_PD_MODE_Pos    0
#define a_R23_LVDS_PD_MODE_Msk    (1 << a_R23_LVDS_PD_MODE_Pos)
#define a_R23_LVDS_PD_MODE        a_R23_LVDS_PD_MODE_Msk
                                  
/* Registrer 24 --------------------------------------------------------------*/
#define a_R24_ADDRESS             0x53

#define a_R24_LOW_CLK_FRQ_Pos     3
#define a_R24_LOW_CLK_FRQ_Msk     (1 << a_R24_LOW_CLK_FRQ_Pos)
#define a_R24_LOW_CLK_FRQ         a_R24_LOW_CLK_FRQ_Msk
                                  
#define a_R24_LVDS_ADVANCE_Pos    4
#define a_R24_LVDS_ADVANCE_Msk    (1 << a_R24_LVDS_ADVANCE_Pos)
#define a_R24_LVDS_ADVANCE        a_R24_LVDS_ADVANCE_Msk
                                  
#define a_R24_LVDS_DELAY_Pos      5
#define a_R24_LVDS_DELAY_Msk      (1 << a_R24_LVDS_DELAY_Pos)
#define a_R24_LVDS_DELAY          a_R24_LVDS_DELAY_Msk
                                  
/* Registrer 25 --------------------------------------------------------------*/
#define a_R25_ADDRESS             0x55

#define a_R25_FS_CTL_Pos          0
#define a_R25_FS_CTL_Msk          (63 << a_R25_FS_CTL_Pos)
#define a_R25_FS_CTL_0            (1 << a_R25_FS_CTL_Pos)
#define a_R25_FS_CTL_1            (2 << a_R25_FS_CTL_Pos)
#define a_R25_FS_CTL_2            (4 << a_R25_FS_CTL_Pos)
#define a_R25_FS_CTL_3            (8 << a_R25_FS_CTL_Pos)
#define a_R25_FS_CTL_4            (16 << a_R25_FS_CTL_Pos)
#define a_R25_FS_CTL_5            (32 << a_R25_FS_CTL_Pos)
                                  
/* Registrer 26 --------------------------------------------------------------*/
#define a_R26_ADDRESS             0x56

#define a_R26_STARTUP_CTL_Pos     0
#define a_R26_STARTUP_CTL_Msk     (7 << a_R26_STARTUP_CTL_Pos)
#define a_R26_STARTUP_CTL_0       (1 << a_R26_STARTUP_CTL_Pos)
#define a_R26_STARTUP_CTL_1       (2 << a_R26_STARTUP_CTL_Pos)
#define a_R26_STARTUP_CTL_2       (4 << a_R26_STARTUP_CTL_Pos)
                                  

