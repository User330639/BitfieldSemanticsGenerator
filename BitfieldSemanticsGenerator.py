device = 'HMCAD1511'
base_semantics = device + '_R'
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

def find_2nd_space(string):
    pos = string.find(' ')
    pos = string.find(' ', pos + 1)
    return pos

def tune_alignment(string, alignment_index):
    if string[0] == '/':
        base_comment_string = '/*----------------------------------------------------------------------------*/\n'
        while len(string) != len(base_comment_string):
            string = string.replace('-', '', 1)
        return string
    spc_pos = find_2nd_space(string) + 1
    delta = alignment_index - spc_pos
    spaces = [' '] * delta
    string = string[0:spc_pos] + ''.join(spaces) + string[spc_pos:]
    return string

sub_entries = []
sub_entries.append('/*-----------------------------------------------------------------------------------------*/\n')
sub_entries.append('/* Bit definitions for ' + device + ' -----------------------------------------------------*/\n')
sub_entries.append('/*-----------------------------------------------------------------------------------------*/\n')

for reg, entry in enumerate(bit_semantics):
    sub_entries.append('/* Registrer '+ str(reg) +' ---------------------------------------------------------------*/\n')
    sub_entries.append('#define ' + base_semantics + '{:02d}'.format(reg) + '_ADDRESS ' + entry[0] + '\n\n')
    for fields in entry[1:]:
        base = base_semantics + '{:02d}'.format(reg) + '_' + fields[0]
        pos = base + '_Pos'
        msk = base + '_Msk'
        msk_num = 2**(fields[1]) - 1
        sub_entries.append('#define ' + pos + ' ' + str(fields[2]) + '\n')
        sub_entries.append('#define ' + msk + ' (' + str(msk_num) + ' << ' + pos + ')' + '\n')
        if fields[1] > 1:
            i = 0
            for i, bit in enumerate(range(fields[1])):
                bit_mask = 2**i
                sub_entries.append('#define ' + base + '_' + str(i) + ' (' + str(bit_mask) + ' << ' + pos + ')' + '\n')
                i += 1
        else:
            sub_entries.append('#define ' + base + ' ' + msk + '\n')
        sub_entries.append('\n')

align_indexes = []

for entry in sub_entries:
    align_indexes.append(find_2nd_space(entry) + 1)
    
output_data = ''

for entry in sub_entries:
    entry = tune_alignment(entry, max(align_indexes))
    output_data += entry
output_data += '\n'

filename = device.lower() + '.h'
f = open(filename, 'w')
f.write(output_data)
f.close()

print(output_data)