#include "lvgl.h"

/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef LV_FONT_TERMINUS_12
#define LV_FONT_TERMINUS_12 1
#endif

#if LV_FONT_TERMINUS_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+21 "!" */
    0x0, 0x2, 0x8, 0x20, 0x82, 0x0, 0x20, 0x80,
    0x0,

    /* U+22 "\"" */
    0x1, 0x45, 0x14, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+23 "#" */
    0x0, 0x5, 0x14, 0xf9, 0x45, 0x3e, 0x51, 0x40,
    0x0,

    /* U+24 "$" */
    0x0, 0x2, 0x1c, 0xaa, 0x87, 0xa, 0xa9, 0xc2,
    0x0,

    /* U+25 "%" */
    0x0, 0x4, 0xaa, 0x50, 0x42, 0xa, 0x55, 0x20,
    0x0,

    /* U+26 "&" */
    0x0, 0x2, 0x14, 0x50, 0x86, 0xa4, 0x91, 0xa0,
    0x0,

    /* U+27 "'" */
    0x0, 0x82, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+28 "(" */
    0x0, 0x1, 0x8, 0x41, 0x4, 0x10, 0x20, 0x40,
    0x0,

    /* U+29 ")" */
    0x0, 0x4, 0x8, 0x10, 0x41, 0x4, 0x21, 0x0,
    0x0,

    /* U+2A "*" */
    0x0, 0x0, 0x0, 0x50, 0x8f, 0x88, 0x50, 0x0,
    0x0,

    /* U+2B "+" */
    0x0, 0x0, 0x0, 0x20, 0x8f, 0x88, 0x20, 0x0,
    0x0,

    /* U+2C "," */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x84,
    0x0,

    /* U+2D "-" */
    0x0, 0x0, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0,
    0x0,

    /* U+2E "." */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x80,
    0x0,

    /* U+2F "/" */
    0x0, 0x0, 0x82, 0x10, 0x42, 0x8, 0x41, 0x0,
    0x0,

    /* U+30 "0" */
    0x0, 0x7, 0x22, 0x9a, 0xac, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+31 "1" */
    0x0, 0x2, 0x18, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+32 "2" */
    0x0, 0x7, 0x22, 0x88, 0x21, 0x8, 0x43, 0xe0,
    0x0,

    /* U+33 "3" */
    0x0, 0x7, 0x22, 0x8, 0xc0, 0x82, 0x89, 0xc0,
    0x0,

    /* U+34 "4" */
    0x0, 0x0, 0x86, 0x29, 0x28, 0xbe, 0x8, 0x20,
    0x0,

    /* U+35 "5" */
    0x0, 0xf, 0xa0, 0x83, 0xc0, 0x82, 0x89, 0xc0,
    0x0,

    /* U+36 "6" */
    0x0, 0x7, 0x20, 0x83, 0xc8, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+37 "7" */
    0x0, 0xf, 0x82, 0x8, 0x41, 0x8, 0x20, 0x80,
    0x0,

    /* U+38 "8" */
    0x0, 0x7, 0x22, 0x89, 0xc8, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+39 "9" */
    0x0, 0x7, 0x22, 0x8a, 0x27, 0x82, 0x9, 0xc0,
    0x0,

    /* U+3A ":" */
    0x0, 0x0, 0x0, 0x20, 0x80, 0x0, 0x20, 0x80,
    0x0,

    /* U+3B ";" */
    0x0, 0x0, 0x0, 0x20, 0x80, 0x0, 0x20, 0x84,
    0x0,

    /* U+3C "<" */
    0x0, 0x0, 0x2, 0x10, 0x84, 0x8, 0x10, 0x20,
    0x0,

    /* U+3D "=" */
    0x0, 0x0, 0x0, 0xf8, 0x0, 0x3e, 0x0, 0x0,
    0x0,

    /* U+3E ">" */
    0x0, 0x0, 0x10, 0x20, 0x40, 0x84, 0x21, 0x0,
    0x0,

    /* U+3F "?" */
    0x0, 0x7, 0x22, 0x88, 0x42, 0x0, 0x20, 0x80,
    0x0,

    /* U+40 "@" */
    0x0, 0x7, 0x22, 0x9a, 0xaa, 0xa6, 0x81, 0xe0,
    0x0,

    /* U+41 "A" */
    0x0, 0x7, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+42 "B" */
    0x0, 0xf, 0x22, 0x8b, 0xc8, 0xa2, 0x8b, 0xc0,
    0x0,

    /* U+43 "C" */
    0x0, 0x7, 0x22, 0x82, 0x8, 0x20, 0x89, 0xc0,
    0x0,

    /* U+44 "D" */
    0x0, 0xe, 0x24, 0x8a, 0x28, 0xa2, 0x93, 0x80,
    0x0,

    /* U+45 "E" */
    0x0, 0xf, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+46 "F" */
    0x0, 0xf, 0xa0, 0x83, 0xc8, 0x20, 0x82, 0x0,
    0x0,

    /* U+47 "G" */
    0x0, 0x7, 0x22, 0x82, 0xb, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+48 "H" */
    0x0, 0x8, 0xa2, 0x8b, 0xe8, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+49 "I" */
    0x0, 0x7, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+4A "J" */
    0x0, 0x3, 0x84, 0x10, 0x41, 0x24, 0x91, 0x80,
    0x0,

    /* U+4B "K" */
    0x0, 0x8, 0xa4, 0xa3, 0xc, 0x28, 0x92, 0x20,
    0x0,

    /* U+4C "L" */
    0x0, 0x8, 0x20, 0x82, 0x8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+4D "M" */
    0x0, 0x8, 0xb6, 0xaa, 0xa8, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+4E "N" */
    0x0, 0x8, 0xa2, 0xca, 0xa9, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+4F "O" */
    0x0, 0x7, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+50 "P" */
    0x0, 0xf, 0x22, 0x8a, 0x2f, 0x20, 0x82, 0x0,
    0x0,

    /* U+51 "Q" */
    0x0, 0x7, 0x22, 0x8a, 0x28, 0xa2, 0xa9, 0xc0,
    0x80,

    /* U+52 "R" */
    0x0, 0xf, 0x22, 0x8a, 0x2f, 0x28, 0x92, 0x20,
    0x0,

    /* U+53 "S" */
    0x0, 0x7, 0x22, 0x81, 0xc0, 0x82, 0x89, 0xc0,
    0x0,

    /* U+54 "T" */
    0x0, 0xf, 0x88, 0x20, 0x82, 0x8, 0x20, 0x80,
    0x0,

    /* U+55 "U" */
    0x0, 0x8, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+56 "V" */
    0x0, 0x8, 0xa2, 0x89, 0x45, 0x14, 0x20, 0x80,
    0x0,

    /* U+57 "W" */
    0x0, 0x8, 0xa2, 0x8a, 0x2a, 0xaa, 0xda, 0x20,
    0x0,

    /* U+58 "X" */
    0x0, 0x8, 0xa2, 0x50, 0x82, 0x14, 0x8a, 0x20,
    0x0,

    /* U+59 "Y" */
    0x0, 0x8, 0xa2, 0x51, 0x42, 0x8, 0x20, 0x80,
    0x0,

    /* U+5A "Z" */
    0x0, 0xf, 0x82, 0x10, 0x84, 0x20, 0x83, 0xe0,
    0x0,

    /* U+5B "[" */
    0x0, 0x7, 0x10, 0x41, 0x4, 0x10, 0x41, 0xc0,
    0x0,

    /* U+5C "\\" */
    0x0, 0x4, 0x10, 0x20, 0x81, 0x4, 0x8, 0x20,
    0x0,

    /* U+5D "]" */
    0x0, 0x7, 0x4, 0x10, 0x41, 0x4, 0x11, 0xc0,
    0x0,

    /* U+5E "^" */
    0x0, 0x85, 0x22, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+5F "_" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0x80,

    /* U+60 "`" */
    0x40, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+61 "a" */
    0x0, 0x0, 0x0, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+62 "b" */
    0x0, 0x8, 0x20, 0xf2, 0x28, 0xa2, 0x8b, 0xc0,
    0x0,

    /* U+63 "c" */
    0x0, 0x0, 0x0, 0x72, 0x28, 0x20, 0x89, 0xc0,
    0x0,

    /* U+64 "d" */
    0x0, 0x0, 0x82, 0x7a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+65 "e" */
    0x0, 0x0, 0x0, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+66 "f" */
    0x0, 0x1, 0x88, 0x70, 0x82, 0x8, 0x20, 0x80,
    0x0,

    /* U+67 "g" */
    0x0, 0x0, 0x0, 0x7a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c,

    /* U+68 "h" */
    0x0, 0x8, 0x20, 0xf2, 0x28, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+69 "i" */
    0x0, 0x82, 0x0, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+6A "j" */
    0x0, 0x20, 0x80, 0x18, 0x20, 0x82, 0x8, 0x24,
    0x8c,

    /* U+6B "k" */
    0x0, 0x4, 0x10, 0x49, 0x46, 0x18, 0x51, 0x20,
    0x0,

    /* U+6C "l" */
    0x0, 0x6, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+6D "m" */
    0x0, 0x0, 0x0, 0xf2, 0xaa, 0xaa, 0xaa, 0xa0,
    0x0,

    /* U+6E "n" */
    0x0, 0x0, 0x0, 0xf2, 0x28, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+6F "o" */
    0x0, 0x0, 0x0, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+70 "p" */
    0x0, 0x0, 0x0, 0xf2, 0x28, 0xa2, 0x8b, 0xc8,
    0x20,

    /* U+71 "q" */
    0x0, 0x0, 0x0, 0x7a, 0x28, 0xa2, 0x89, 0xe0,
    0x82,

    /* U+72 "r" */
    0x0, 0x0, 0x0, 0xbb, 0x8, 0x20, 0x82, 0x0,
    0x0,

    /* U+73 "s" */
    0x0, 0x0, 0x0, 0x7a, 0x7, 0x2, 0xb, 0xc0,
    0x0,

    /* U+74 "t" */
    0x0, 0x2, 0x8, 0x70, 0x82, 0x8, 0x20, 0x60,
    0x0,

    /* U+75 "u" */
    0x0, 0x0, 0x0, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+76 "v" */
    0x0, 0x0, 0x0, 0x8a, 0x25, 0x14, 0x20, 0x80,
    0x0,

    /* U+77 "w" */
    0x0, 0x0, 0x0, 0x8a, 0x2a, 0xaa, 0xa9, 0xc0,
    0x0,

    /* U+78 "x" */
    0x0, 0x0, 0x0, 0x89, 0x42, 0x8, 0x52, 0x20,
    0x0,

    /* U+79 "y" */
    0x0, 0x0, 0x0, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c,

    /* U+7A "z" */
    0x0, 0x0, 0x0, 0xf8, 0x42, 0x10, 0x83, 0xe0,
    0x0,

    /* U+7B "{" */
    0x0, 0x1, 0x88, 0x21, 0x2, 0x8, 0x20, 0x60,
    0x0,

    /* U+7C "|" */
    0x0, 0x2, 0x8, 0x20, 0x82, 0x8, 0x20, 0x80,
    0x0,

    /* U+7D "}" */
    0x0, 0x6, 0x4, 0x10, 0x21, 0x4, 0x11, 0x80,
    0x0,

    /* U+7E "~" */
    0x1, 0x2a, 0xa4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+A0 " " */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+A1 "¡" */
    0x0, 0x2, 0x8, 0x0, 0x82, 0x8, 0x20, 0x80,
    0x0,

    /* U+A2 "¢" */
    0x0, 0x0, 0x8, 0x72, 0xaa, 0x28, 0xa9, 0xc2,
    0x0,

    /* U+A3 "£" */
    0x0, 0x3, 0x12, 0x43, 0xc4, 0x10, 0x4b, 0xe0,
    0x0,

    /* U+A4 "¤" */
    0x0, 0x0, 0x12, 0x31, 0x24, 0x8c, 0x48, 0x0,
    0x0,

    /* U+A5 "¥" */
    0x0, 0x8, 0xa2, 0x50, 0x87, 0x8, 0x70, 0x80,
    0x0,

    /* U+A6 "¦" */
    0x0, 0x2, 0x8, 0x20, 0x0, 0x8, 0x20, 0x80,
    0x0,

    /* U+A7 "§" */
    0x0, 0xc4, 0x88, 0x51, 0x22, 0x84, 0x48, 0xc0,
    0x0,

    /* U+A8 "¨" */
    0x51, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+A9 "©" */
    0x0, 0x7, 0xa1, 0xb6, 0x9a, 0x6d, 0x85, 0xe0,
    0x0,

    /* U+AA "ª" */
    0x30, 0x23, 0x92, 0x38, 0x7, 0x80, 0x0, 0x0,
    0x0,

    /* U+AB "«" */
    0x0, 0x0, 0x5, 0x29, 0x4a, 0x14, 0x28, 0x50,
    0x0,

    /* U+AC "¬" */
    0x0, 0x0, 0x0, 0xf8, 0x20, 0x82, 0x0, 0x0,
    0x0,

    /* U+AD "­" */
    0x0, 0x0, 0x0, 0x0, 0x7, 0x80, 0x0, 0x0,
    0x0,

    /* U+AE "®" */
    0x0, 0x7, 0xa1, 0xb6, 0xbb, 0x6b, 0x85, 0xe0,
    0x0,

    /* U+AF "¯" */
    0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+B0 "°" */
    0x0, 0x85, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+B1 "±" */
    0x0, 0x0, 0x8, 0x23, 0xe2, 0x8, 0x3, 0xe0,
    0x0,

    /* U+B2 "²" */
    0x0, 0xc4, 0x84, 0x21, 0xe0, 0x0, 0x0, 0x0,
    0x0,

    /* U+B3 "³" */
    0x1, 0xc0, 0x8c, 0x9, 0xc0, 0x0, 0x0, 0x0,
    0x0,

    /* U+B4 "´" */
    0x10, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+B5 "µ" */
    0x0, 0x0, 0x0, 0x8a, 0x28, 0xa2, 0x9b, 0xa8,
    0x20,

    /* U+B6 "¶" */
    0x0, 0x7, 0xaa, 0xaa, 0xa6, 0x8a, 0x28, 0xa0,
    0x0,

    /* U+B7 "·" */
    0x0, 0x0, 0x0, 0x0, 0x82, 0x0, 0x0, 0x0,
    0x0,

    /* U+B8 "¸" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x82,
    0x10,

    /* U+B9 "¹" */
    0x0, 0x43, 0x4, 0x10, 0xe0, 0x0, 0x0, 0x0,
    0x0,

    /* U+BA "º" */
    0x31, 0x24, 0x92, 0x30, 0x7, 0x80, 0x0, 0x0,
    0x0,

    /* U+BB "»" */
    0x0, 0x0, 0x28, 0x50, 0xa1, 0x4a, 0x52, 0x80,
    0x0,

    /* U+BC "¼" */
    0x43, 0x4, 0x52, 0x50, 0x84, 0xa6, 0x29, 0xe0,
    0x82,

    /* U+BD "½" */
    0x43, 0x4, 0x52, 0x50, 0x84, 0x26, 0x24, 0x21,
    0xf,

    /* U+BE "¾" */
    0xe0, 0x46, 0x5, 0xe8, 0x42, 0x53, 0x94, 0xf0,
    0x41,

    /* U+BF "¿" */
    0x0, 0x2, 0x8, 0x0, 0x84, 0x22, 0x89, 0xc0,
    0x0,

    /* U+C0 "À" */
    0x40, 0x87, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+C1 "Á" */
    0x10, 0x87, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+C2 "Â" */
    0x21, 0x47, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+C3 "Ã" */
    0x29, 0x47, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+C4 "Ä" */
    0x51, 0x47, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+C5 "Å" */
    0x21, 0x47, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+C6 "Æ" */
    0x0, 0x7, 0xe4, 0x93, 0xf9, 0x24, 0x92, 0x70,
    0x0,

    /* U+C7 "Ç" */
    0x0, 0x7, 0x22, 0x82, 0x8, 0x20, 0x89, 0xc2,
    0x10,

    /* U+C8 "È" */
    0x40, 0x8f, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+C9 "É" */
    0x10, 0x8f, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+CA "Ê" */
    0x21, 0x4f, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+CB "Ë" */
    0x51, 0x4f, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+CC "Ì" */
    0x40, 0x87, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+CD "Í" */
    0x10, 0x87, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+CE "Î" */
    0x21, 0x47, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+CF "Ï" */
    0x51, 0x47, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+D0 "Ð" */
    0x0, 0xe, 0x24, 0x8b, 0xa8, 0xa2, 0x93, 0x80,
    0x0,

    /* U+D1 "Ñ" */
    0x29, 0x48, 0xa2, 0xca, 0xa9, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+D2 "Ò" */
    0x40, 0x87, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+D3 "Ó" */
    0x10, 0x87, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+D4 "Ô" */
    0x21, 0x47, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+D5 "Õ" */
    0x29, 0x47, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+D6 "Ö" */
    0x51, 0x47, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+D7 "×" */
    0x0, 0x0, 0x0, 0x89, 0x42, 0x14, 0x88, 0x0,
    0x0,

    /* U+D8 "Ø" */
    0x0, 0x7, 0x62, 0x9a, 0xac, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+D9 "Ù" */
    0x40, 0x88, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+DA "Ú" */
    0x10, 0x88, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+DB "Û" */
    0x21, 0x48, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+DC "Ü" */
    0x51, 0x48, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+DD "Ý" */
    0x10, 0x88, 0xa2, 0x51, 0x42, 0x8, 0x20, 0x80,
    0x0,

    /* U+DE "Þ" */
    0x0, 0x8, 0x3c, 0x8a, 0x28, 0xbc, 0x82, 0x0,
    0x0,

    /* U+DF "ß" */
    0x0, 0xe, 0x24, 0x93, 0xc8, 0xa2, 0xca, 0xc0,
    0x0,

    /* U+E0 "à" */
    0x0, 0x4, 0x8, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+E1 "á" */
    0x0, 0x1, 0x8, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+E2 "â" */
    0x0, 0x2, 0x14, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+E3 "ã" */
    0x0, 0x2, 0x94, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+E4 "ä" */
    0x0, 0x5, 0x14, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+E5 "å" */
    0x0, 0x2, 0x14, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+E6 "æ" */
    0x0, 0x0, 0x0, 0x70, 0xa6, 0xac, 0xa1, 0xe0,
    0x0,

    /* U+E7 "ç" */
    0x0, 0x0, 0x0, 0x72, 0x28, 0x20, 0x89, 0xc2,
    0x10,

    /* U+E8 "è" */
    0x0, 0x4, 0x8, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+E9 "é" */
    0x0, 0x1, 0x8, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+EA "ê" */
    0x0, 0x2, 0x14, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+EB "ë" */
    0x0, 0x5, 0x14, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+EC "ì" */
    0x0, 0x4, 0x8, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+ED "í" */
    0x0, 0x1, 0x8, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+EE "î" */
    0x0, 0x2, 0x14, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+EF "ï" */
    0x0, 0x5, 0x14, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+F0 "ð" */
    0x2, 0x84, 0x28, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+F1 "ñ" */
    0x0, 0x2, 0x94, 0xf2, 0x28, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+F2 "ò" */
    0x0, 0x4, 0x8, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+F3 "ó" */
    0x0, 0x1, 0x8, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+F4 "ô" */
    0x0, 0x2, 0x14, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+F5 "õ" */
    0x0, 0x2, 0x94, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+F6 "ö" */
    0x0, 0x5, 0x14, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+F7 "÷" */
    0x0, 0x0, 0x8, 0x20, 0xf, 0x80, 0x20, 0x80,
    0x0,

    /* U+F8 "ø" */
    0x0, 0x0, 0x0, 0x76, 0x6a, 0xb2, 0x89, 0xc0,
    0x0,

    /* U+F9 "ù" */
    0x0, 0x4, 0x8, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+FA "ú" */
    0x0, 0x1, 0x8, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+FB "û" */
    0x0, 0x2, 0x14, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+FC "ü" */
    0x0, 0x5, 0x14, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+FD "ý" */
    0x0, 0x1, 0x8, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c,

    /* U+FE "þ" */
    0x0, 0x8, 0x20, 0xf2, 0x28, 0xa2, 0x8b, 0xc8,
    0x20,

    /* U+FF "ÿ" */
    0x0, 0x5, 0x14, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 9, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 18, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 27, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 36, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 45, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 54, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 63, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 72, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 81, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 90, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 99, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 108, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 117, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 126, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 135, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 144, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 153, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 162, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 171, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 180, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 189, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 198, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 207, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 216, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 225, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 234, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 243, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 252, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 261, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 270, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 279, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 288, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 297, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 306, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 315, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 324, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 333, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 342, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 351, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 360, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 369, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 378, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 387, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 396, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 405, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 414, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 423, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 432, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 441, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 450, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 459, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 468, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 477, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 486, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 495, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 504, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 513, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 522, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 531, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 540, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 549, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 558, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 567, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 576, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 585, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 594, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 603, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 612, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 621, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 630, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 639, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 648, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 657, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 666, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 675, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 684, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 693, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 702, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 711, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 720, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 729, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 738, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 747, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 756, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 765, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 774, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 783, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 792, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 801, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 810, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 819, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 828, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 837, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 846, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 855, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 864, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 873, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 882, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 891, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 900, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 909, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 918, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 927, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 936, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 945, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 954, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 963, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 972, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 981, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 990, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 999, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1008, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1017, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1026, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1035, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1044, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1053, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1062, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1071, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1080, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1089, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1098, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1107, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1116, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1125, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1134, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1143, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1152, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1161, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1170, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1179, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1188, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1197, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1206, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1215, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1224, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1233, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1242, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1251, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1260, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1269, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1278, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1287, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1296, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1305, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1314, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1323, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1332, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1341, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1350, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1359, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1368, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1377, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1386, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1395, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1404, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1413, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1422, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1431, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1440, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1449, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1458, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1467, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1476, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1485, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1494, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1503, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1512, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1521, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1530, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1539, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1548, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1557, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1566, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1575, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1584, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1593, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1602, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1611, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1620, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1629, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1638, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1647, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1656, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1665, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1674, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1683, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1692, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1701, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1710, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2}
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
lv_font_t lv_font_terminus_12 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if LV_FONT_TERMINUS_12*/

