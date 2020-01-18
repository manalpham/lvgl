#include "lvgl.h"

/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef LV_FONT_ANONYMOUS_PRO_12
#define LV_FONT_ANONYMOUS_PRO_12 1
#endif

#if LV_FONT_ANONYMOUS_PRO_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+21 "!" */
    0xfd,

    /* U+22 "\"" */
    0xb6, 0x80,

    /* U+23 "#" */
    0x4b, 0xf4, 0xbf, 0x48,

    /* U+24 "$" */
    0x23, 0xab, 0x46, 0x18, 0xb5, 0x71, 0x0,

    /* U+25 "%" */
    0x46, 0xa4, 0x84, 0x21, 0x25, 0x62,

    /* U+26 "&" */
    0x62, 0x49, 0x18, 0xc6, 0xa9, 0x99,

    /* U+27 "'" */
    0xe0,

    /* U+28 "(" */
    0x29, 0x49, 0x24, 0x48, 0x80,

    /* U+29 ")" */
    0x89, 0x12, 0x49, 0x4a, 0x0,

    /* U+2A "*" */
    0x25, 0x5c, 0xea, 0x90,

    /* U+2B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+2C "," */
    0x58,

    /* U+2D "-" */
    0xf8,

    /* U+2E "." */
    0xc0,

    /* U+2F "/" */
    0x8, 0x44, 0x22, 0x11, 0x8, 0x84, 0x0,

    /* U+30 "0" */
    0x31, 0x28, 0xe5, 0xa7, 0x14, 0x8c,

    /* U+31 "1" */
    0x26, 0xa2, 0x22, 0x27,

    /* U+32 "2" */
    0x74, 0x62, 0x11, 0x11, 0x3f,

    /* U+33 "3" */
    0x74, 0x62, 0x60, 0xc6, 0x2e,

    /* U+34 "4" */
    0x11, 0x94, 0xa9, 0x7c, 0x47,

    /* U+35 "5" */
    0xfa, 0x8, 0x3e, 0x4, 0x18, 0x5e,

    /* U+36 "6" */
    0x39, 0x8, 0x2e, 0xc6, 0x18, 0x5e,

    /* U+37 "7" */
    0xfc, 0x44, 0x22, 0x10, 0x84,

    /* U+38 "8" */
    0x74, 0x62, 0xe8, 0xc6, 0x2e,

    /* U+39 "9" */
    0x7a, 0x18, 0x63, 0x74, 0x10, 0x9c,

    /* U+3A ":" */
    0xcc,

    /* U+3B ";" */
    0x40, 0x16,

    /* U+3C "<" */
    0x2a, 0x22,

    /* U+3D "=" */
    0xf8, 0x1, 0xf0,

    /* U+3E ">" */
    0x88, 0xa8,

    /* U+3F "?" */
    0x69, 0x12, 0x44, 0x4,

    /* U+40 "@" */
    0x7a, 0x19, 0xe9, 0xa6, 0x78, 0x1c,

    /* U+41 "A" */
    0x30, 0xc3, 0x12, 0x49, 0xe8, 0x61,

    /* U+42 "B" */
    0xf4, 0x63, 0xe8, 0xc6, 0x3e,

    /* U+43 "C" */
    0x3d, 0x18, 0x20, 0x82, 0x4, 0x4e,

    /* U+44 "D" */
    0xf2, 0x28, 0x61, 0x86, 0x18, 0xbc,

    /* U+45 "E" */
    0xfc, 0x21, 0xe8, 0x42, 0x1f,

    /* U+46 "F" */
    0xfc, 0x21, 0xe8, 0x42, 0x10,

    /* U+47 "G" */
    0x3d, 0x18, 0x20, 0x9e, 0x14, 0x4e,

    /* U+48 "H" */
    0x8c, 0x63, 0xf8, 0xc6, 0x31,

    /* U+49 "I" */
    0xe9, 0x24, 0x97,

    /* U+4A "J" */
    0x8, 0x42, 0x10, 0xc6, 0x2e,

    /* U+4B "K" */
    0x8c, 0xa9, 0x8a, 0x4a, 0x31,

    /* U+4C "L" */
    0x84, 0x21, 0x8, 0x42, 0x1f,

    /* U+4D "M" */
    0x8e, 0xf7, 0x5a, 0xc6, 0x31,

    /* U+4E "N" */
    0xce, 0x6b, 0x5a, 0xce, 0x71,

    /* U+4F "O" */
    0x31, 0x28, 0x61, 0x86, 0x14, 0x8c,

    /* U+50 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x10,

    /* U+51 "Q" */
    0x31, 0x28, 0x61, 0x86, 0x14, 0x8c, 0x20, 0x60,

    /* U+52 "R" */
    0xf4, 0x63, 0x1f, 0x52, 0x51,

    /* U+53 "S" */
    0x7c, 0x60, 0xc1, 0x6, 0x3e,

    /* U+54 "T" */
    0xfd, 0x6a, 0x42, 0x10, 0x8e,

    /* U+55 "U" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e,

    /* U+56 "V" */
    0x86, 0x14, 0x92, 0x48, 0xc3, 0xc,

    /* U+57 "W" */
    0x86, 0x1b, 0x6d, 0x79, 0x24, 0x92,

    /* U+58 "X" */
    0xcd, 0x24, 0x8c, 0x31, 0x24, 0xb3,

    /* U+59 "Y" */
    0xc6, 0x88, 0xa0, 0x81, 0x2, 0x4, 0x1c,

    /* U+5A "Z" */
    0xfe, 0x10, 0x84, 0x21, 0x8, 0x7f,

    /* U+5B "[" */
    0xea, 0xaa, 0xac,

    /* U+5C "\\" */
    0x84, 0x10, 0x82, 0x10, 0x42, 0x8, 0x40,

    /* U+5D "]" */
    0xd5, 0x55, 0x5c,

    /* U+5E "^" */
    0x21, 0x14, 0xa8, 0x80,

    /* U+5F "_" */
    0xfc,

    /* U+60 "`" */
    0x88, 0x80,

    /* U+61 "a" */
    0x74, 0x5f, 0x19, 0xb4,

    /* U+62 "b" */
    0x84, 0x2d, 0x98, 0xc7, 0x36,

    /* U+63 "c" */
    0x7c, 0x61, 0x8, 0xb8,

    /* U+64 "d" */
    0x18, 0x5b, 0x38, 0xc6, 0x6d,

    /* U+65 "e" */
    0x74, 0x7f, 0x8, 0xb8,

    /* U+66 "f" */
    0x34, 0xf4, 0x44, 0x4e,

    /* U+67 "g" */
    0x6c, 0xe3, 0x19, 0xb4, 0x2e,

    /* U+68 "h" */
    0x84, 0x2d, 0x98, 0xc6, 0x31,

    /* U+69 "i" */
    0x43, 0x24, 0x97,

    /* U+6A "j" */
    0x10, 0x31, 0x11, 0x11, 0x96,

    /* U+6B "k" */
    0x84, 0x23, 0x2a, 0x72, 0x51,

    /* U+6C "l" */
    0xc9, 0x24, 0x97,

    /* U+6D "m" */
    0xd5, 0x6b, 0x5a, 0xd4,

    /* U+6E "n" */
    0xb6, 0x63, 0x18, 0xc4,

    /* U+6F "o" */
    0x74, 0x63, 0x18, 0xb8,

    /* U+70 "p" */
    0xb6, 0x63, 0x1c, 0xda, 0x10,

    /* U+71 "q" */
    0x6c, 0xe3, 0x19, 0xb4, 0x21,

    /* U+72 "r" */
    0xdb, 0x10, 0x84, 0x70,

    /* U+73 "s" */
    0x74, 0x58, 0x28, 0xb8,

    /* U+74 "t" */
    0x42, 0x3c, 0x84, 0x21, 0x26,

    /* U+75 "u" */
    0x8c, 0x63, 0x19, 0xb4,

    /* U+76 "v" */
    0x86, 0x14, 0x92, 0x30, 0xc0,

    /* U+77 "w" */
    0xad, 0x6a, 0xa5, 0x28,

    /* U+78 "x" */
    0xcd, 0x23, 0xc, 0x4b, 0x30,

    /* U+79 "y" */
    0x86, 0x14, 0x92, 0x30, 0xc2, 0x30,

    /* U+7A "z" */
    0xfc, 0x88, 0x88, 0xfc,

    /* U+7B "{" */
    0x29, 0x25, 0x12, 0x48, 0x80,

    /* U+7C "|" */
    0xff, 0xc0,

    /* U+7D "}" */
    0x89, 0x24, 0x52, 0x4a, 0x0,

    /* U+7E "~" */
    0x4d, 0x64,

    /* U+A0 " " */

    /* U+A1 "¡" */
    0xbf,

    /* U+A2 "¢" */
    0x23, 0xab, 0x4a, 0x55, 0xc4,

    /* U+A3 "£" */
    0x22, 0x91, 0xc4, 0x21, 0x3e,

    /* U+A4 "¤" */
    0xaa, 0xa3, 0x15, 0x54,

    /* U+A5 "¥" */
    0x8c, 0x55, 0xf2, 0x7c, 0x84,

    /* U+A6 "¦" */
    0xf3, 0xc0,

    /* U+A7 "§" */
    0x74, 0x60, 0x8b, 0x45, 0xa2, 0xc, 0x5c,

    /* U+A8 "¨" */
    0x90,

    /* U+A9 "©" */
    0x38, 0x8a, 0x6d, 0x19, 0xa8, 0x8e, 0x0,

    /* U+AA "ª" */
    0xe1, 0x79, 0x70, 0xf0,

    /* U+AB "«" */
    0x4c, 0xa4, 0x90,

    /* U+AC "¬" */
    0xfc, 0x10, 0x40,

    /* U+AD "­" */
    0xf8,

    /* U+AE "®" */
    0x38, 0x8a, 0xcd, 0x9a, 0xa8, 0x8e, 0x0,

    /* U+AF "¯" */
    0xe0,

    /* U+B0 "°" */
    0x74, 0x63, 0x17, 0x0,

    /* U+B1 "±" */
    0x21, 0x3e, 0x42, 0x7c,

    /* U+B2 "²" */
    0xc5, 0x4e,

    /* U+B3 "³" */
    0xc7, 0x1c,

    /* U+B4 "´" */
    0x2a, 0x0,

    /* U+B5 "µ" */
    0x8c, 0x63, 0x19, 0xf6, 0x10,

    /* U+B6 "¶" */
    0x7d, 0x6b, 0x57, 0x94, 0xa5,

    /* U+B7 "·" */
    0x80,

    /* U+B8 "¸" */
    0x60,

    /* U+B9 "¹" */
    0x59, 0x2e,

    /* U+BA "º" */
    0x69, 0x99, 0x60, 0xf0,

    /* U+BB "»" */
    0x92, 0x53, 0x20,

    /* U+BC "¼" */
    0x86, 0x28, 0xa4, 0x25, 0x35, 0xe1,

    /* U+BD "½" */
    0x86, 0x28, 0xa4, 0x2d, 0x14, 0xa3,

    /* U+BE "¾" */
    0x81, 0x18, 0x92, 0x90, 0x94, 0xd7, 0x84,

    /* U+BF "¿" */
    0x20, 0x22, 0x48, 0x96,

    /* U+C0 "À" */
    0x40, 0x83, 0xc, 0x31, 0x24, 0x9e, 0x86, 0x10,

    /* U+C1 "Á" */
    0x8, 0x43, 0xc, 0x31, 0x24, 0x9e, 0x86, 0x10,

    /* U+C2 "Â" */
    0x21, 0x40, 0xc, 0x31, 0x24, 0x9e, 0x86, 0x10,

    /* U+C3 "Ã" */
    0x6a, 0xc3, 0xc, 0x31, 0x24, 0x9e, 0x86, 0x10,

    /* U+C4 "Ä" */
    0x48, 0x3, 0xc, 0x31, 0x24, 0x9e, 0x86, 0x10,

    /* U+C5 "Å" */
    0x31, 0x23, 0xc, 0x31, 0x24, 0x9e, 0x86, 0x10,

    /* U+C6 "Æ" */
    0x3c, 0xc3, 0x16, 0x51, 0xc9, 0x27,

    /* U+C7 "Ç" */
    0x3d, 0x18, 0x20, 0x82, 0x4, 0x4e, 0x11, 0x80,

    /* U+C8 "È" */
    0x41, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+C9 "É" */
    0x11, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+CA "Ê" */
    0x22, 0xbf, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+CB "Ë" */
    0x50, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+CC "Ì" */
    0x8b, 0xa4, 0x92, 0x5c,

    /* U+CD "Í" */
    0x2b, 0xa4, 0x92, 0x5c,

    /* U+CE "Î" */
    0x57, 0xa4, 0x92, 0x5c,

    /* U+CF "Ï" */
    0xa3, 0xa4, 0x92, 0x5c,

    /* U+D0 "Ð" */
    0x78, 0x89, 0xa, 0x1f, 0x28, 0x51, 0x3c,

    /* U+D1 "Ñ" */
    0x6d, 0xb3, 0x9a, 0xd6, 0xb3, 0x9c, 0x40,

    /* U+D2 "Ò" */
    0x40, 0x83, 0x12, 0x86, 0x18, 0x61, 0x48, 0xc0,

    /* U+D3 "Ó" */
    0x10, 0x83, 0x12, 0x86, 0x18, 0x61, 0x48, 0xc0,

    /* U+D4 "Ô" */
    0x21, 0x43, 0x12, 0x86, 0x18, 0x61, 0x48, 0xc0,

    /* U+D5 "Õ" */
    0x6a, 0xc3, 0x12, 0x86, 0x18, 0x61, 0x48, 0xc0,

    /* U+D6 "Ö" */
    0x48, 0x3, 0x12, 0x86, 0x18, 0x61, 0x48, 0xc0,

    /* U+D7 "×" */
    0x8a, 0x88, 0xa8, 0x80,

    /* U+D8 "Ø" */
    0x35, 0x28, 0xe5, 0xa7, 0x14, 0xac,

    /* U+D9 "Ù" */
    0x41, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+DA "Ú" */
    0x11, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+DB "Û" */
    0x22, 0x81, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+DC "Ü" */
    0x50, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+DD "Ý" */
    0x8, 0x23, 0x1a, 0x22, 0x82, 0x4, 0x8, 0x10,
    0x70,

    /* U+DE "Þ" */
    0x87, 0xa3, 0x18, 0xfa, 0x10,

    /* U+DF "ß" */
    0x72, 0x28, 0xa4, 0x8a, 0x1a, 0x66,

    /* U+E0 "à" */
    0x20, 0x80, 0xe8, 0xbe, 0x33, 0x68,

    /* U+E1 "á" */
    0x11, 0x0, 0xe8, 0xbe, 0x33, 0x68,

    /* U+E2 "â" */
    0x22, 0x80, 0xe8, 0xbe, 0x33, 0x68,

    /* U+E3 "ã" */
    0x6d, 0x80, 0xe8, 0xbe, 0x33, 0x68,

    /* U+E4 "ä" */
    0x50, 0x1d, 0x17, 0xc6, 0x6d,

    /* U+E5 "å" */
    0x22, 0x88, 0xe8, 0xbe, 0x33, 0x68,

    /* U+E6 "æ" */
    0x75, 0x5f, 0x4a, 0xb8,

    /* U+E7 "ç" */
    0x7c, 0x61, 0x8, 0xb8, 0x88,

    /* U+E8 "è" */
    0x41, 0x0, 0xe8, 0xfe, 0x11, 0x70,

    /* U+E9 "é" */
    0x11, 0x0, 0xe8, 0xfe, 0x11, 0x70,

    /* U+EA "ê" */
    0x22, 0x80, 0xe8, 0xfe, 0x11, 0x70,

    /* U+EB "ë" */
    0x50, 0x1d, 0x1f, 0xc2, 0x2e,

    /* U+EC "ì" */
    0x88, 0x64, 0x92, 0xe0,

    /* U+ED "í" */
    0x28, 0x64, 0x92, 0xe0,

    /* U+EE "î" */
    0x54, 0x64, 0x92, 0xe0,

    /* U+EF "ï" */
    0xa3, 0x24, 0x97,

    /* U+F0 "ð" */
    0x51, 0x14, 0x17, 0xc6, 0x2e,

    /* U+F1 "ñ" */
    0x6d, 0x81, 0x6c, 0xc6, 0x31, 0x88,

    /* U+F2 "ò" */
    0x41, 0x0, 0xe8, 0xc6, 0x31, 0x70,

    /* U+F3 "ó" */
    0x11, 0x0, 0xe8, 0xc6, 0x31, 0x70,

    /* U+F4 "ô" */
    0x22, 0x80, 0xe8, 0xc6, 0x31, 0x70,

    /* U+F5 "õ" */
    0x6d, 0x80, 0xe8, 0xc6, 0x31, 0x70,

    /* U+F6 "ö" */
    0x50, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+F7 "÷" */
    0x20, 0x3e, 0x2, 0x0,

    /* U+F8 "ø" */
    0x7c, 0xeb, 0x5c, 0xf8,

    /* U+F9 "ù" */
    0x41, 0x1, 0x18, 0xc6, 0x33, 0x68,

    /* U+FA "ú" */
    0x11, 0x1, 0x18, 0xc6, 0x33, 0x68,

    /* U+FB "û" */
    0x22, 0x81, 0x18, 0xc6, 0x33, 0x68,

    /* U+FC "ü" */
    0x50, 0x23, 0x18, 0xc6, 0x6d,

    /* U+FD "ý" */
    0x10, 0x80, 0x21, 0x85, 0x24, 0x8c, 0x30, 0x8c,
    0x0,

    /* U+FE "þ" */
    0x84, 0x2d, 0x98, 0xc7, 0x36, 0x84, 0x0,

    /* U+FF "ÿ" */
    0x48, 0x8, 0x61, 0x49, 0x23, 0xc, 0x23, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 105, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 105, .box_w = 1, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 105, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3, .adv_w = 105, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 14, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 105, .box_w = 1, .box_h = 3, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 27, .adv_w = 105, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 32, .adv_w = 105, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 37, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 105, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 105, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 46, .adv_w = 105, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 47, .adv_w = 105, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 55, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 105, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 105, .box_w = 1, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 105, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 111, .adv_w = 105, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 105, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 116, .adv_w = 105, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 105, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 105, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 219, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 105, .box_w = 7, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 105, .box_w = 2, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 273, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 280, .adv_w = 105, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 283, .adv_w = 105, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 287, .adv_w = 105, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 288, .adv_w = 105, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 290, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 105, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 321, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 105, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 105, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 334, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 105, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 359, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 364, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 105, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 105, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 401, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 105, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 410, .adv_w = 105, .box_w = 1, .box_h = 10, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 412, .adv_w = 105, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 417, .adv_w = 105, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 419, .adv_w = 105, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 105, .box_w = 1, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 434, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 105, .box_w = 1, .box_h = 10, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 441, .adv_w = 105, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 448, .adv_w = 105, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 449, .adv_w = 105, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 456, .adv_w = 105, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 460, .adv_w = 105, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 463, .adv_w = 105, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 105, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 467, .adv_w = 105, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 474, .adv_w = 105, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 475, .adv_w = 105, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 479, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 483, .adv_w = 105, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 485, .adv_w = 105, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 487, .adv_w = 105, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 489, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 494, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 105, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 500, .adv_w = 105, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 501, .adv_w = 105, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 503, .adv_w = 105, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 507, .adv_w = 105, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 510, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 105, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 595, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 105, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 105, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 105, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 105, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 105, .box_w = 7, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 677, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 685, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 105, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 724, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 105, .box_w = 7, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 745, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 751, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 795, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 105, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 105, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 105, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 105, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 844, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 850, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 862, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 868, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 873, .adv_w = 105, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 877, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 881, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 105, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 913, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 920, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 96, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t lv_font_anonymous_pro_12 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if LV_FONT_ANONYMOUS_PRO_12*/

