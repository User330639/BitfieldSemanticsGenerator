base_semantics = 'HMCAD1511_R'
# Semantics, length, position
bit_semantics = [['0x00', ['RST', 1, 0]],
                 ['0x0F', ['SLEEP4_CH', 4, 0],     ['SLEEP2_CH', 2, 4],   ['SLEEP1_CH_1', 1, 6], ['SLEEP', 1, 8], ['PD', 1, 9], ['PD_PIN', 2, 10]],
                 ['0x11', ['ILVDS_LCLK', 3, 0],    ['ILVDS_FRAME', 3, 4], ['ILVDS_DAT', 3, 8]],
                 ['0x12', ['EN_LVDS_TERM', 1, 14], ['TERM_LCLK', 3, 0],   ['TERM_FRAME', 3, 4],  ['TERM_DAT', 3, 8]],
                 ['0x24', ['INVERT4_CH', 4, 0],    ['INVERT2_CH', 2, 4],  ['INVERT1_CH_1', 1, 6]],
                 ['0x25', ['OUT_PATTERN', 3, 4]],
                 ['0x26', ['CUSTOM_PATTERN1', 8, 8]],
                 ['0x27', ['CUSTOM_PATTERN2', 8, 8]],
                 ['0x2A', ['CGAIN4_CH1', 4, 0], ['CGAIN4_CH2', 4, 4], ['CGAIN4_CH3', 4, 8], ['CGAIN4_CH4', 4, 12]],
                 ['0x2B', ['CGAIN2_CH1', 4, 0], ['CGAIN2_CH2', 4, 4], ['CGAIN1_CH1', 4, 8]],
                 ['0x30', ['JITTER_CTRL', 8, 0]],
                 ['0x31', ['CHANNEL_NUM', 3, 0], ['CLK_DIVIDE', 2, 8]],
                 ['0x33', ['CGAIN_CFG', 1, 0], ['FINE_GAIN_EN', 1, 1]],
                 ['0x34', ['FGAIN_BRANCH1', 7, 0], ['FGAIN_BRANCH2', 7, 8]],
                 ['0x35', ['FGAIN_BRANCH3', 7, 0], ['FGAIN_BRANCH4', 7, 8]],
                 ['0x36', ['FGAIN_BRANCH5', 7, 0], ['FGAIN_BRANCH6', 7, 8]],
                 ['0x37', ['FGAIN_BRANCH7', 7, 0], ['FGAIN_BRANCH8', 7, 8]],
                 ['0x3A', ['INSEL_ADC1', 5, 0], ['INSEL_ADC2', 5, 8]],
                 ['0x3B', ['INSEL_ADC3', 5, 0], ['INSEL_ADC4', 5, 8]],
                 ['0x42', ['PHASE_DDR', 2, 5]],
                 ['0x45', ['PATTERN_MODE', 2, 0]],
                 ['0x46', ['BTC_MODE', 1, 2], ['MSB_FIRST', 1, 3]],
                 ['0x50', ['ADC_CURR', 3, 0], ['VCM_DRIVE', 2, 4]],
                 ['0x52', ['LVDS_PD_MODE', 1, 0]],
                 ['0x53', ['LOW_CLK_FRQ', 1, 3], ['LVDS_ADVANCE', 1, 4], ['LVDS_DELAY', 1, 5]],
                 ['0x55', ['FS_CTL', 6, 0]],
                 ['0x56', ['STARTUP_CTL', 3, 0]]]

output_data = '/*----------------------------------------------------------------------------*/\n'
output_data += '/* Bit definitions for HMCAD1511 ---------------------------------------------*/\n'
output_data += '/*----------------------------------------------------------------------------*/\n'

reg = 0

for entry in bit_semantics:
    output_data += '/* Registrer '+ str(reg) +' ---------------------------------------------------------------*/\n'
    output_data += '#define ' + base_semantics + '{:02d}'.format(reg) + '_ADDRESS ' + entry[0] + '\n\n'
    for fields in entry[1:]:
        base = base_semantics + '{:02d}'.format(reg) + '_' + fields[0]
        pos = base + '_Pos'
        msk = base + '_Msk'
        msk_num = 2**(fields[1]) - 1
        output_data += '#define ' + pos + ' ' + str(fields[2]) + '\n'
        output_data += '#define ' + msk + ' (' + str(msk_num) + ' << ' + pos + ')' + '\n'
        if fields[1] > 1:
            i = 0
            for bit in range(fields[1]):
                bit_mask = 2**i
                output_data += '#define ' + base + '_' + str(i) + ' (' + str(bit_mask) + ' << ' + pos + ')' + '\n'
                i += 1
        else:
            output_data += '#define ' + base + ' ' + msk + '\n'
        output_data += '\n'
    reg += 1

f = open('test.c', 'w')
f.write(output_data)
f.close()

print(output_data)