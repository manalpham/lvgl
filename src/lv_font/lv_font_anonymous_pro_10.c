#include "lvgl.h"

/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef LV_FONT_ANONYMOUS_PRO_10
#define LV_FONT_ANONYMOUS_PRO_10 1
#endif

#if LV_FONT_ANONYMOUS_PRO_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+21 "!" */
    0xf4,

    /* U+22 "\"" */
    0xb6, 0x80,

    /* U+23 "#" */
    0x57, 0xd5, 0xf5, 0x0,

    /* U+24 "$" */
    0x23, 0xaa, 0xc3, 0x55, 0xc4,

    /* U+25 "%" */
    0x4d, 0x98, 0x66, 0xc8,

    /* U+26 "&" */
    0x45, 0x28, 0x8a, 0xc9, 0xa0,

    /* U+27 "'" */
    0xe0,

    /* U+28 "(" */
    0x2a, 0x49, 0x22, 0x20,

    /* U+29 ")" */
    0x88, 0x92, 0x4a, 0x80,

    /* U+2A "*" */
    0x25, 0x5d, 0x52, 0x0,

    /* U+2B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+2C "," */
    0x58,

    /* U+2D "-" */
    0xf0,

    /* U+2E "." */
    0xc0,

    /* U+2F "/" */
    0x11, 0x22, 0x44, 0x88,

    /* U+30 "0" */
    0x69, 0xbd, 0x96,

    /* U+31 "1" */
    0x26, 0xa2, 0x27,

    /* U+32 "2" */
    0x69, 0x12, 0x5f,

    /* U+33 "3" */
    0x69, 0x21, 0x96,

    /* U+34 "4" */
    0x26, 0xaf, 0x27,

    /* U+35 "5" */
    0xf8, 0xe1, 0x96,

    /* U+36 "6" */
    0x68, 0xe9, 0x96,

    /* U+37 "7" */
    0xf9, 0x12, 0x22,

    /* U+38 "8" */
    0x69, 0x69, 0x96,

    /* U+39 "9" */
    0x69, 0x97, 0x16,

    /* U+3A ":" */
    0x88,

    /* U+3B ";" */
    0x40, 0x58,

    /* U+3C "<" */
    0x2a, 0x22,

    /* U+3D "=" */
    0xf0, 0xf0,

    /* U+3E ">" */
    0x88, 0xa8,

    /* U+3F "?" */
    0x54, 0xa0, 0x80,

    /* U+40 "@" */
    0x79, 0xbb, 0x87,

    /* U+41 "A" */
    0x66, 0x99, 0xf9,

    /* U+42 "B" */
    0xe9, 0xe9, 0x9e,

    /* U+43 "C" */
    0x79, 0x88, 0x96,

    /* U+44 "D" */
    0xe9, 0x99, 0x9e,

    /* U+45 "E" */
    0xf8, 0xe8, 0x8f,

    /* U+46 "F" */
    0xf8, 0xe8, 0x88,

    /* U+47 "G" */
    0x79, 0x8b, 0x96,

    /* U+48 "H" */
    0x99, 0xf9, 0x99,

    /* U+49 "I" */
    0xe9, 0x25, 0xc0,

    /* U+4A "J" */
    0x11, 0x11, 0x96,

    /* U+4B "K" */
    0x9a, 0xca, 0x99,

    /* U+4C "L" */
    0x88, 0x88, 0x8f,

    /* U+4D "M" */
    0x9f, 0xf9, 0x99,

    /* U+4E "N" */
    0x9d, 0xdb, 0xb9,

    /* U+4F "O" */
    0x69, 0x99, 0x96,

    /* U+50 "P" */
    0xe9, 0x9e, 0x88,

    /* U+51 "Q" */
    0x69, 0x99, 0x96, 0x21,

    /* U+52 "R" */
    0xe9, 0x9e, 0xa9,

    /* U+53 "S" */
    0x79, 0x42, 0x9e,

    /* U+54 "T" */
    0xfd, 0x48, 0x42, 0x38,

    /* U+55 "U" */
    0x99, 0x99, 0x96,

    /* U+56 "V" */
    0x99, 0x99, 0x66,

    /* U+57 "W" */
    0x99, 0x9f, 0xf9,

    /* U+58 "X" */
    0x99, 0x66, 0x99,

    /* U+59 "Y" */
    0xda, 0x88, 0x42, 0x38,

    /* U+5A "Z" */
    0xf9, 0x24, 0x9f,

    /* U+5B "[" */
    0xea, 0xaa, 0xc0,

    /* U+5C "\\" */
    0x88, 0x44, 0x22, 0x11,

    /* U+5D "]" */
    0xd5, 0x55, 0xc0,

    /* U+5E "^" */
    0x22, 0xa2,

    /* U+5F "_" */
    0xf0,

    /* U+60 "`" */
    0x90,

    /* U+61 "a" */
    0xe1, 0x79, 0x70,

    /* U+62 "b" */
    0x88, 0xe9, 0x99, 0xe0,

    /* U+63 "c" */
    0x79, 0x88, 0x70,

    /* U+64 "d" */
    0x31, 0x79, 0x99, 0x70,

    /* U+65 "e" */
    0x69, 0xf8, 0x70,

    /* U+66 "f" */
    0x34, 0xf4, 0x44, 0xe0,

    /* U+67 "g" */
    0x79, 0x99, 0x71, 0x60,

    /* U+68 "h" */
    0x88, 0xad, 0x99, 0x90,

    /* U+69 "i" */
    0x43, 0x24, 0xb8,

    /* U+6A "j" */
    0x21, 0x92, 0x49, 0xc0,

    /* U+6B "k" */
    0x88, 0x9a, 0xca, 0x90,

    /* U+6C "l" */
    0xc9, 0x24, 0xb8,

    /* U+6D "m" */
    0xd5, 0x6b, 0x5a, 0x80,

    /* U+6E "n" */
    0xad, 0x99, 0x90,

    /* U+6F "o" */
    0x69, 0x99, 0x60,

    /* U+70 "p" */
    0xe9, 0x99, 0xe8, 0x80,

    /* U+71 "q" */
    0x79, 0x99, 0x71, 0x10,

    /* U+72 "r" */
    0xd6, 0x44, 0xe0,

    /* U+73 "s" */
    0x78, 0x61, 0xe0,

    /* U+74 "t" */
    0x44, 0xf4, 0x45, 0x20,

    /* U+75 "u" */
    0x99, 0x9b, 0x50,

    /* U+76 "v" */
    0x99, 0x96, 0x60,

    /* U+77 "w" */
    0x99, 0xff, 0x90,

    /* U+78 "x" */
    0x99, 0x69, 0x90,

    /* U+79 "y" */
    0x99, 0x96, 0x64, 0xc0,

    /* U+7A "z" */
    0xf2, 0x49, 0xf0,

    /* U+7B "{" */
    0x29, 0x28, 0x92, 0x20,

    /* U+7C "|" */
    0xfe,

    /* U+7D "}" */
    0x89, 0x22, 0x92, 0x80,

    /* U+7E "~" */
    0xdb,

    /* U+A0 " " */

    /* U+A1 "¡" */
    0xbc,

    /* U+A2 "¢" */
    0x27, 0xaa, 0x72,

    /* U+A3 "£" */
    0x22, 0x91, 0xc4, 0x27, 0xc0,

    /* U+A4 "¤" */
    0xf9, 0x9f,

    /* U+A5 "¥" */
    0x8a, 0xbe, 0x4f, 0x90,

    /* U+A6 "¦" */
    0xee,

    /* U+A7 "§" */
    0x69, 0x4a, 0x95, 0x29, 0x60,

    /* U+A8 "¨" */
    0xa0,

    /* U+A9 "©" */
    0x75, 0xf3, 0x9b, 0xb8,

    /* U+AA "ª" */
    0xc7, 0xf1, 0xc0,

    /* U+AB "«" */
    0x5a, 0x50,

    /* U+AC "¬" */
    0xf1, 0x10,

    /* U+AD "­" */
    0xf0,

    /* U+AE "®" */
    0x77, 0x77, 0xdd, 0xb8,

    /* U+AF "¯" */
    0xe0,

    /* U+B0 "°" */
    0x55, 0x0,

    /* U+B1 "±" */
    0x5d, 0xe,

    /* U+B2 "²" */
    0xc5, 0x4e,

    /* U+B3 "³" */
    0xc7, 0x1c,

    /* U+B4 "´" */
    0x60,

    /* U+B5 "µ" */
    0x99, 0xbd, 0x88,

    /* U+B6 "¶" */
    0x7d, 0x75, 0x55,

    /* U+B7 "·" */
    0x80,

    /* U+B8 "¸" */
    0x60,

    /* U+B9 "¹" */
    0x59, 0x2e,

    /* U+BA "º" */
    0x56, 0xa1, 0xc0,

    /* U+BB "»" */
    0xa5, 0xa0,

    /* U+BC "¼" */
    0x84, 0x65, 0x42, 0xae, 0xe1,

    /* U+BD "½" */
    0x84, 0x65, 0x43, 0xa6, 0x43,

    /* U+BE "¾" */
    0xc6, 0x55, 0xc2, 0xae, 0xe1,

    /* U+BF "¿" */
    0x41, 0x4a, 0x80,

    /* U+C0 "À" */
    0x42, 0x6, 0x69, 0xf9,

    /* U+C1 "Á" */
    0x24, 0x6, 0x69, 0xf9,

    /* U+C2 "Â" */
    0x25, 0x6, 0x69, 0xf9,

    /* U+C3 "Ã" */
    0x5a, 0x6, 0x69, 0xf9,

    /* U+C4 "Ä" */
    0x90, 0x66, 0x99, 0xf9,

    /* U+C5 "Å" */
    0x25, 0x6, 0x69, 0xf9,

    /* U+C6 "Æ" */
    0x76, 0x7e, 0xab,

    /* U+C7 "Ç" */
    0x79, 0x88, 0x96, 0x24,

    /* U+C8 "È" */
    0x42, 0xf, 0x8e, 0x8f,

    /* U+C9 "É" */
    0x24, 0xf, 0x8e, 0x8f,

    /* U+CA "Ê" */
    0x25, 0xf, 0x8e, 0x8f,

    /* U+CB "Ë" */
    0x50, 0xf8, 0xe8, 0x8f,

    /* U+CC "Ì" */
    0x88, 0x74, 0x97,

    /* U+CD "Í" */
    0x28, 0x74, 0x97,

    /* U+CE "Î" */
    0x54, 0x74, 0x97,

    /* U+CF "Ï" */
    0xa3, 0xa4, 0x97,

    /* U+D0 "Ð" */
    0x72, 0x7a, 0x94, 0xb8,

    /* U+D1 "Ñ" */
    0x5a, 0xd, 0xdb, 0xb9,

    /* U+D2 "Ò" */
    0x42, 0x6, 0x99, 0x96,

    /* U+D3 "Ó" */
    0x24, 0x6, 0x99, 0x96,

    /* U+D4 "Ô" */
    0x25, 0x6, 0x99, 0x96,

    /* U+D5 "Õ" */
    0x5a, 0x6, 0x99, 0x96,

    /* U+D6 "Ö" */
    0x90, 0x69, 0x99, 0x96,

    /* U+D7 "×" */
    0x96, 0x69,

    /* U+D8 "Ø" */
    0x79, 0xbd, 0x9e,

    /* U+D9 "Ù" */
    0x42, 0x9, 0x99, 0x96,

    /* U+DA "Ú" */
    0x24, 0x9, 0x99, 0x96,

    /* U+DB "Û" */
    0x25, 0x9, 0x99, 0x96,

    /* U+DC "Ü" */
    0x90, 0x99, 0x99, 0x96,

    /* U+DD "Ý" */
    0x11, 0x1, 0xb5, 0x10, 0x8e,

    /* U+DE "Þ" */
    0x8e, 0x99, 0xe8, 0x80,

    /* U+DF "ß" */
    0x69, 0xa9, 0x9a,

    /* U+E0 "à" */
    0x42, 0xe, 0x17, 0x97,

    /* U+E1 "á" */
    0x24, 0xe, 0x17, 0x97,

    /* U+E2 "â" */
    0x25, 0xe, 0x17, 0x97,

    /* U+E3 "ã" */
    0x5a, 0xe, 0x17, 0x97,

    /* U+E4 "ä" */
    0x50, 0xe1, 0x79, 0x70,

    /* U+E5 "å" */
    0x25, 0x2e, 0x17, 0x97,

    /* U+E6 "æ" */
    0xd1, 0x7f, 0x47, 0x0,

    /* U+E7 "ç" */
    0x79, 0x88, 0x72, 0x40,

    /* U+E8 "è" */
    0x42, 0x6, 0x9f, 0x87,

    /* U+E9 "é" */
    0x24, 0x6, 0x9f, 0x87,

    /* U+EA "ê" */
    0x25, 0x6, 0x9f, 0x87,

    /* U+EB "ë" */
    0x50, 0x69, 0xf8, 0x70,

    /* U+EC "ì" */
    0x88, 0x64, 0x97,

    /* U+ED "í" */
    0x28, 0x64, 0x97,

    /* U+EE "î" */
    0x54, 0x64, 0x97,

    /* U+EF "ï" */
    0xa3, 0x24, 0xb8,

    /* U+F0 "ð" */
    0x43, 0x61, 0x79, 0x60,

    /* U+F1 "ñ" */
    0x5a, 0xa, 0xd9, 0x99,

    /* U+F2 "ò" */
    0x42, 0x6, 0x99, 0x96,

    /* U+F3 "ó" */
    0x24, 0x6, 0x99, 0x96,

    /* U+F4 "ô" */
    0x25, 0x6, 0x99, 0x96,

    /* U+F5 "õ" */
    0x5a, 0x6, 0x99, 0x96,

    /* U+F6 "ö" */
    0x50, 0x69, 0x99, 0x60,

    /* U+F7 "÷" */
    0x43, 0x84,

    /* U+F8 "ø" */
    0x79, 0xbd, 0xe0,

    /* U+F9 "ù" */
    0x42, 0x9, 0x99, 0xb5,

    /* U+FA "ú" */
    0x24, 0x9, 0x99, 0xb5,

    /* U+FB "û" */
    0x25, 0x9, 0x99, 0xb5,

    /* U+FC "ü" */
    0x50, 0x99, 0x9b, 0x50,

    /* U+FD "ý" */
    0x24, 0x9, 0x99, 0x66, 0x4c,

    /* U+FE "þ" */
    0x88, 0xe9, 0x99, 0xe8, 0x80,

    /* U+FF "ÿ" */
    0x50, 0x99, 0x96, 0x64, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 87, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 87, .box_w = 1, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 87, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 3, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 12, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 87, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 87, .box_w = 1, .box_h = 3, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 22, .adv_w = 87, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 26, .adv_w = 87, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 30, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 87, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 39, .adv_w = 87, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 40, .adv_w = 87, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 45, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 87, .box_w = 1, .box_h = 5, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 87, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 78, .adv_w = 87, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 87, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 82, .adv_w = 87, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 87, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 87, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 142, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 87, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 174, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 178, .adv_w = 87, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 181, .adv_w = 87, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 183, .adv_w = 87, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 184, .adv_w = 87, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 185, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 210, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 87, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 87, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 221, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 87, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 242, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 246, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 272, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 87, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 279, .adv_w = 87, .box_w = 1, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 87, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 284, .adv_w = 87, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 285, .adv_w = 87, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 87, .box_w = 1, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 87, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 87, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 296, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 87, .box_w = 1, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 87, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 306, .adv_w = 87, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 307, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 311, .adv_w = 87, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 314, .adv_w = 87, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 316, .adv_w = 87, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 87, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 319, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 323, .adv_w = 87, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 324, .adv_w = 87, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 326, .adv_w = 87, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 328, .adv_w = 87, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 330, .adv_w = 87, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 332, .adv_w = 87, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 333, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 336, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 87, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 340, .adv_w = 87, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 341, .adv_w = 87, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 343, .adv_w = 87, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 346, .adv_w = 87, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 348, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 353, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 358, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 363, .adv_w = 87, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 397, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 87, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 87, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 87, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 87, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 87, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 518, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 87, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 87, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 87, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 87, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 87, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 87, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 600, .adv_w = 87, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 605, .adv_w = 87, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -2}
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
lv_font_t lv_font_anonymous_pro_10 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if LV_FONT_ANONYMOUS_PRO_10*/

