#include "lvgl.h"

/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ANONYMOUS_PRO_10
#define ANONYMOUS_PRO_10 1
#endif

#if ANONYMOUS_PRO_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+21 "!" */
    0x15, 0x4,

    /* U+22 "\"" */
    0x5, 0x40,

    /* U+23 "#" */
    0x31, 0xe3, 0x1e, 0x30,

    /* U+24 "$" */
    0x25, 0xaa, 0xc3, 0x95, 0x84,

    /* U+25 "%" */
    0x6, 0xb8, 0x44, 0x8e, 0x60,

    /* U+26 "&" */
    0x7, 0x28, 0x88, 0x4b, 0xc0,

    /* U+27 "'" */
    0x14,

    /* U+28 "(" */
    0xa, 0x49, 0x2, 0x0,

    /* U+29 ")" */
    0x8, 0x92, 0x42, 0x0,

    /* U+2A "*" */
    0x0, 0x18, 0x62, 0x0,

    /* U+2B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+2C "," */
    0x40,

    /* U+2D "-" */
    0xf8,

    /* U+2E "." */
    0x40,

    /* U+2F "/" */
    0x0, 0x80, 0x40, 0x20, 0x0,

    /* U+30 "0" */
    0x4, 0x89, 0x91, 0x60,

    /* U+31 "1" */
    0x2, 0x62, 0x22, 0x70,

    /* U+32 "2" */
    0x3, 0xd2, 0x0, 0x5, 0xe0,

    /* U+33 "3" */
    0x2, 0xe2, 0x60, 0x85, 0xc0,

    /* U+34 "4" */
    0x0, 0x41, 0x4, 0xf8, 0x43, 0x80,

    /* U+35 "5" */
    0x1, 0xe7, 0x12, 0x8, 0x27, 0x0,

    /* U+36 "6" */
    0x2, 0xbd, 0x18, 0xc5, 0xc0,

    /* U+37 "7" */
    0x7, 0x84, 0x2, 0x10, 0x80,

    /* U+38 "8" */
    0x3, 0x68, 0x9e, 0x86, 0x17, 0x80,

    /* U+39 "9" */
    0x6, 0xa3, 0x17, 0x81, 0xc0,

    /* U+3A ":" */
    0x88,

    /* U+3B ";" */
    0x40, 0x40,

    /* U+3C "<" */
    0x2, 0x42, 0x0,

    /* U+3D "=" */
    0xf8, 0x3e,

    /* U+3E ">" */
    0x42, 0x2, 0x40,

    /* U+3F "?" */
    0x5, 0x12, 0x40, 0x40,

    /* U+40 "@" */
    0x2, 0xbf, 0xbd, 0xfd, 0xc0,

    /* U+41 "A" */
    0x0, 0x0, 0x2, 0x39, 0x4, 0x40,

    /* U+42 "B" */
    0xf, 0x9e, 0x99, 0xe0,

    /* U+43 "C" */
    0xf, 0x98, 0x89, 0x60,

    /* U+44 "D" */
    0xe, 0x99, 0x99, 0xe0,

    /* U+45 "E" */
    0x7, 0xa1, 0xe8, 0x43, 0xc0,

    /* U+46 "F" */
    0x7, 0xa1, 0xe8, 0x42, 0x0,

    /* U+47 "G" */
    0x2, 0xe3, 0x38, 0xc5, 0xc0,

    /* U+48 "H" */
    0x9, 0x9f, 0x99, 0x90,

    /* U+49 "I" */
    0x1d, 0x24, 0xb8,

    /* U+4A "J" */
    0x0, 0x42, 0x10, 0x85, 0xc0,

    /* U+4B "K" */
    0x4, 0xa9, 0x8a, 0x4a, 0x40,

    /* U+4C "L" */
    0x4, 0x21, 0x8, 0x43, 0xc0,

    /* U+4D "M" */
    0x9, 0x99, 0x99, 0x90,

    /* U+4E "N" */
    0x9, 0x99, 0x99, 0x90,

    /* U+4F "O" */
    0x6, 0x99, 0x99, 0x60,

    /* U+50 "P" */
    0xf, 0x9e, 0x88, 0x80,

    /* U+51 "Q" */
    0x6, 0x99, 0x99, 0x60, 0x20,

    /* U+52 "R" */
    0xf, 0x9e, 0x88, 0x90,

    /* U+53 "S" */
    0xf, 0x86, 0x18, 0xe0,

    /* U+54 "T" */
    0x7, 0xea, 0x42, 0x11, 0xc0,

    /* U+55 "U" */
    0x9, 0x99, 0x99, 0x60,

    /* U+56 "V" */
    0x1, 0x14, 0x2, 0x28, 0xc1, 0x0,

    /* U+57 "W" */
    0x1, 0x14, 0x54, 0x78, 0xa2, 0x80,

    /* U+58 "X" */
    0x1, 0xa2, 0x4, 0x30, 0xa6, 0xc0,

    /* U+59 "Y" */
    0x6, 0xd4, 0x42, 0x11, 0xc0,

    /* U+5A "Z" */
    0xe, 0x80, 0x1, 0xf0,

    /* U+5B "[" */
    0xea, 0xaa, 0xb0,

    /* U+5C "\\" */
    0x2, 0x0, 0x40, 0x8, 0x1,

    /* U+5D "]" */
    0xd5, 0x55, 0x70,

    /* U+5E "^" */
    0x3, 0x15, 0x0,

    /* U+5F "_" */
    0xf8,

    /* U+60 "`" */
    0x80,

    /* U+61 "a" */
    0x30, 0x4e, 0x97, 0x80,

    /* U+62 "b" */
    0x8, 0xe9, 0x99, 0xe0,

    /* U+63 "c" */
    0x59, 0x88, 0x60,

    /* U+64 "d" */
    0x1, 0x59, 0x99, 0x70,

    /* U+65 "e" */
    0x24, 0xbf, 0x7, 0x0,

    /* U+66 "f" */
    0x1, 0x9e, 0x42, 0x11, 0xc0,

    /* U+67 "g" */
    0x59, 0x99, 0x71, 0x60,

    /* U+68 "h" */
    0x8, 0xad, 0x99, 0x90,

    /* U+69 "i" */
    0xb, 0x24, 0xb8,

    /* U+6A "j" */
    0x1, 0x11, 0x11, 0x11, 0x60,

    /* U+6B "k" */
    0x4, 0x21, 0xe, 0x52, 0x40,

    /* U+6C "l" */
    0x19, 0x24, 0xb8,

    /* U+6D "m" */
    0xd5, 0x6b, 0x5a, 0x80,

    /* U+6E "n" */
    0x2d, 0x99, 0x90,

    /* U+6F "o" */
    0x69, 0x99, 0x60,

    /* U+70 "p" */
    0x69, 0x99, 0xe8, 0x80,

    /* U+71 "q" */
    0x59, 0x99, 0x71, 0x10,

    /* U+72 "r" */
    0x53, 0x10, 0x8e, 0x0,

    /* U+73 "s" */
    0x31, 0x7, 0x2, 0x78, 0x0,

    /* U+74 "t" */
    0x0, 0x87, 0x88, 0x20, 0x81, 0x80,

    /* U+75 "u" */
    0x99, 0x99, 0xf0,

    /* U+76 "v" */
    0x1, 0x20, 0x88, 0x10,

    /* U+77 "w" */
    0x1, 0x45, 0x1a, 0x28,

    /* U+78 "x" */
    0x49, 0xa1, 0x8, 0x6c,

    /* U+79 "y" */
    0x1, 0x20, 0x88, 0x10, 0x46, 0x0,

    /* U+7A "z" */
    0xe8, 0x81, 0xf0,

    /* U+7B "{" */
    0x69, 0x25, 0x92, 0x44,

    /* U+7C "|" */
    0xff,

    /* U+7D "}" */
    0xc9, 0x24, 0xd2, 0x50,

    /* U+7E "~" */
    0x5, 0x4,

    /* U+A1 "¡" */
    0x5e,

    /* U+A2 "¢" */
    0x3, 0xa9, 0x4a, 0x38, 0x80,

    /* U+A3 "£" */
    0x3, 0x91, 0xc4, 0x23, 0xc0,

    /* U+A4 "¤" */
    0x79, 0x24, 0x92, 0x78,

    /* U+A5 "¥" */
    0x0, 0x36, 0x4f, 0x90, 0x80,

    /* U+A6 "¦" */
    0xff,

    /* U+A7 "§" */
    0x32, 0x40, 0x84, 0x8c, 0x29, 0x30,

    /* U+A8 "¨" */
    0x5,

    /* U+A9 "©" */
    0x1, 0xec, 0x71, 0xfd, 0xe0,

    /* U+AA "ª" */
    0x5, 0x75, 0x77,

    /* U+AB "«" */
    0x4a, 0x40,

    /* U+AC "¬" */
    0xf8, 0x42,

    /* U+AD "­" */
    0xf8,

    /* U+AE "®" */
    0x31, 0x2f, 0x7d, 0xd5, 0x23, 0x0,

    /* U+AF "¯" */
    0x70,

    /* U+B0 "°" */
    0x69, 0x99, 0x60,

    /* U+B1 "±" */
    0x21, 0x3e, 0x42, 0x7c,

    /* U+B2 "²" */
    0xc, 0x30,

    /* U+B3 "³" */
    0xc, 0xb0,

    /* U+B4 "´" */
    0x0,

    /* U+B5 "µ" */
    0x99, 0x99, 0xf8, 0x80,

    /* U+B6 "¶" */
    0x5, 0xea, 0xf2, 0x94, 0xa0,

    /* U+B7 "·" */
    0x40,

    /* U+B8 "¸" */
    0x40,

    /* U+B9 "¹" */
    0x9, 0x20,

    /* U+BA "º" */
    0xf, 0x99, 0x6f,

    /* U+BB "»" */
    0x40, 0x90,

    /* U+BC "¼" */
    0x0, 0xa2, 0xc, 0x20, 0x65, 0x80,

    /* U+BD "½" */
    0x9, 0xc, 0x43, 0xa0, 0x60,

    /* U+BE "¾" */
    0x0, 0xe1, 0xc, 0x20, 0x65, 0x80,

    /* U+BF "¿" */
    0x2, 0x4, 0x8, 0xe0,

    /* U+C0 "À" */
    0x20, 0x0, 0x0, 0x0, 0x23, 0x90, 0x44,

    /* U+C1 "Á" */
    0x0, 0x0, 0x0, 0x0, 0x23, 0x90, 0x44,

    /* U+C2 "Â" */
    0x10, 0x80, 0x0, 0x0, 0x23, 0x90, 0x44,

    /* U+C3 "Ã" */
    0x20, 0x60, 0x0, 0x0, 0x23, 0x90, 0x44,

    /* U+C4 "Ä" */
    0x0, 0x20, 0x0, 0x0, 0x23, 0x90, 0x44,

    /* U+C5 "Å" */
    0x30, 0x40, 0x0, 0x1, 0xe0, 0x80,

    /* U+C6 "Æ" */
    0x0, 0x61, 0x6, 0x71, 0x45, 0xc0,

    /* U+C7 "Ç" */
    0x2, 0xe3, 0x8, 0x45, 0xc4, 0x40,

    /* U+C8 "È" */
    0x40, 0x1, 0xe8, 0x7a, 0x10, 0xf0,

    /* U+C9 "É" */
    0x0, 0x1, 0xe8, 0x7a, 0x10, 0xf0,

    /* U+CA "Ê" */
    0x22, 0x1, 0xe8, 0x7a, 0x10, 0xf0,

    /* U+CB "Ë" */
    0x2, 0x81, 0xe8, 0x7a, 0x10, 0xf0,

    /* U+CC "Ì" */
    0x80, 0x74, 0x92, 0xe0,

    /* U+CD "Í" */
    0x0, 0x74, 0x92, 0xe0,

    /* U+CE "Î" */
    0x24, 0x7, 0x22, 0x22, 0x70,

    /* U+CF "Ï" */
    0x5, 0x7, 0x22, 0x22, 0x70,

    /* U+D0 "Ð" */
    0x3, 0x93, 0xd4, 0xa5, 0xc0,

    /* U+D1 "Ñ" */
    0x41, 0x81, 0x29, 0x4a, 0x52, 0x90,

    /* U+D2 "Ò" */
    0x40, 0x6, 0x99, 0x99, 0x60,

    /* U+D3 "Ó" */
    0x0, 0x6, 0x99, 0x99, 0x60,

    /* U+D4 "Ô" */
    0x24, 0x6, 0x99, 0x99, 0x60,

    /* U+D5 "Õ" */
    0x41, 0x80, 0xc9, 0x4a, 0x52, 0x60, 0x0,

    /* U+D6 "Ö" */
    0x1, 0x6, 0x99, 0x99, 0x60,

    /* U+D7 "×" */
    0x1, 0x0,

    /* U+D8 "Ø" */
    0x5, 0x89, 0x91, 0x60,

    /* U+D9 "Ù" */
    0x40, 0x9, 0x99, 0x99, 0x60,

    /* U+DA "Ú" */
    0x0, 0x9, 0x99, 0x99, 0x60,

    /* U+DB "Û" */
    0x24, 0x9, 0x99, 0x99, 0x60,

    /* U+DC "Ü" */
    0x1, 0x9, 0x99, 0x99, 0x60,

    /* U+DD "Ý" */
    0x0, 0x1, 0xb5, 0x10, 0x84, 0x70,

    /* U+DE "Þ" */
    0x8, 0xe9, 0x9e, 0x80,

    /* U+DF "ß" */
    0x6, 0xa5, 0x49, 0x46, 0xe0,

    /* U+E0 "à" */
    0x20, 0xc, 0x13, 0xa5, 0xe0,

    /* U+E1 "á" */
    0x0, 0xc, 0x13, 0xa5, 0xe0,

    /* U+E2 "â" */
    0x11, 0xc, 0x13, 0xa5, 0xe0,

    /* U+E3 "ã" */
    0x20, 0x63, 0x2, 0x39, 0x27, 0x80,

    /* U+E4 "ä" */
    0x0, 0x4c, 0x13, 0xa5, 0xe0,

    /* U+E5 "å" */
    0x18, 0x46, 0x60, 0x9d, 0x2f, 0x0,

    /* U+E6 "æ" */
    0x50, 0xae, 0xa8, 0xf8, 0x0,

    /* U+E7 "ç" */
    0x2e, 0xe1, 0x7, 0x11, 0x0,

    /* U+E8 "è" */
    0x40, 0x9, 0x2f, 0xc1, 0xc0,

    /* U+E9 "é" */
    0x0, 0x9, 0x2f, 0xc1, 0xc0,

    /* U+EA "ê" */
    0x22, 0x9, 0x2f, 0xc1, 0xc0,

    /* U+EB "ë" */
    0x0, 0x89, 0x2f, 0xc1, 0xc0,

    /* U+EC "ì" */
    0x83, 0x24, 0xb8,

    /* U+ED "í" */
    0x3, 0x24, 0xb8,

    /* U+EE "î" */
    0x24, 0x62, 0x22, 0x70,

    /* U+EF "ï" */
    0x5, 0x62, 0x22, 0x70,

    /* U+F0 "ð" */
    0x66, 0x15, 0x99, 0xe0,

    /* U+F1 "ñ" */
    0x41, 0x89, 0xa9, 0x4a, 0x40,

    /* U+F2 "ò" */
    0x40, 0x69, 0x99, 0x60,

    /* U+F3 "ó" */
    0x0, 0x69, 0x99, 0x60,

    /* U+F4 "ô" */
    0x24, 0x69, 0x99, 0x60,

    /* U+F5 "õ" */
    0x41, 0x99, 0x29, 0x49, 0x80,

    /* U+F6 "ö" */
    0x1, 0x69, 0x99, 0x60,

    /* U+F7 "÷" */
    0x20, 0x3e, 0x2, 0x0,

    /* U+F8 "ø" */
    0x21, 0x85, 0x82, 0x70, 0x0,

    /* U+F9 "ù" */
    0x40, 0x99, 0x99, 0xf0,

    /* U+FA "ú" */
    0x0, 0x99, 0x99, 0xf0,

    /* U+FB "û" */
    0x24, 0x99, 0x99, 0xf0,

    /* U+FC "ü" */
    0x1, 0x99, 0x99, 0xf0,

    /* U+FD "ý" */
    0x0, 0x0, 0x12, 0x8, 0x81, 0x4, 0x60,

    /* U+FE "þ" */
    0x8, 0xe9, 0x99, 0xe8, 0x80,

    /* U+FF "ÿ" */
    0x0, 0x20, 0x12, 0x8, 0x81, 0x4, 0x60,

    /* U+F001 "" */
    0x1, 0x7, 0xc7, 0xe3, 0xd1, 0x8, 0x84, 0x5e,
    0xee, 0xe0, 0x0, 0x0,

    /* U+F008 "" */
    0xff, 0xd4, 0x17, 0x83, 0xd0, 0x5f, 0xff, 0x41,
    0x68, 0x2d, 0x5, 0xa0, 0xa0, 0x0,

    /* U+F00B "" */
    0xef, 0xfb, 0xf0, 0x3, 0xbf, 0xef, 0xc0, 0xe,
    0xff, 0xbf,

    /* U+F00C "" */
    0x0, 0x0, 0x60, 0x39, 0x9c, 0x7e, 0xf, 0x1,
    0x80,

    /* U+F00D "" */
    0x0, 0x66, 0x7e, 0x3c, 0x3c, 0x7e, 0x66, 0x0,

    /* U+F011 "" */
    0x0, 0x4, 0x1a, 0x99, 0x6c, 0x94, 0xf, 0x4,
    0x86, 0x7e, 0xe, 0x0,

    /* U+F013 "" */
    0x8, 0x3f, 0x1f, 0x8c, 0xee, 0x3b, 0x39, 0xfc,
    0xfc, 0x8, 0x0,

    /* U+F014 "" */
    0x18, 0x24, 0x42, 0x2, 0x26, 0x26, 0x26, 0x2,
    0x7e,

    /* U+F015 "" */
    0x0, 0x3, 0xc3, 0xf1, 0xfc, 0xff, 0x9f, 0xc7,
    0x71, 0xdc,

    /* U+F019 "" */
    0x8, 0x3, 0x0, 0xc0, 0xf8, 0x1e, 0x3, 0xe,
    0x3b, 0xfe, 0xff, 0x80,

    /* U+F021 "" */
    0x1c, 0x3f, 0xd0, 0xf0, 0x60, 0x7, 0xb, 0x8d,
    0xfc, 0x18, 0x0,

    /* U+F026 "" */
    0x11, 0xbd, 0xef, 0x18, 0x40,

    /* U+F027 "" */
    0x10, 0x63, 0xd7, 0x8f, 0x46, 0x4, 0x0,

    /* U+F028 "" */
    0x0, 0x4, 0x43, 0x2b, 0xd6, 0xf1, 0x3d, 0x63,
    0x28, 0x44, 0x0, 0x0,

    /* U+F03E "" */
    0xff, 0xd0, 0x7, 0xc0, 0xd1, 0x98, 0x7b, 0x7f,
    0x7f, 0xec, 0x1, 0x7f, 0xc0,

    /* U+F040 "" */
    0x2, 0x3, 0x82, 0xc3, 0x83, 0xe3, 0xe3, 0xe1,
    0x60, 0xc0, 0x0,

    /* U+F048 "" */
    0x82, 0x39, 0xef, 0xfe, 0xf9, 0xe3, 0x80,

    /* U+F04B "" */
    0x80, 0xe0, 0xf8, 0xfc, 0xff, 0xfc, 0xf0, 0xe0,
    0x80,

    /* U+F04C "" */
    0xe7, 0x7b, 0xfd, 0xfe, 0xff, 0x7f, 0xbf, 0xdf,
    0xef, 0xe7, 0x0,

    /* U+F051 "" */
    0x8f, 0x3e, 0xff, 0xff, 0xbc, 0xe3, 0x0,

    /* U+F052 "" */
    0x0, 0xc, 0xf, 0xf, 0xcf, 0xf0, 0x3, 0xff,
    0xff,

    /* U+F053 "" */
    0x0, 0x18, 0x71, 0xc7, 0xe, 0xe, 0xe, 0xc,
    0x0,

    /* U+F054 "" */
    0x0, 0xc1, 0xc1, 0xc1, 0xc3, 0x8e, 0x38, 0x60,
    0x0,

    /* U+F067 "" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+F068 "" */
    0xff, 0xff, 0x0,

    /* U+F071 "" */
    0x0, 0x3, 0x1, 0xe0, 0x48, 0x33, 0xc, 0xc7,
    0xf9, 0xce, 0xff, 0xff, 0xf0,

    /* U+F074 "" */
    0x0, 0x0, 0x2e, 0x7c, 0xf2, 0x18, 0x6, 0x3,
    0xcb, 0x9f, 0x0, 0x80, 0x0,

    /* U+F077 "" */
    0xc, 0x7, 0x83, 0xf1, 0xce, 0x61, 0x90, 0x20,

    /* U+F079 "" */
    0x0, 0xd, 0xf3, 0xc2, 0x30, 0x46, 0x1e, 0xc3,
    0x9f, 0xa0,

    /* U+F07B "" */
    0xf0, 0x3e, 0xf, 0xfb, 0xfe, 0xff, 0xbf, 0xef,
    0xfb, 0xfe,

    /* U+F093 "" */
    0x0, 0x3, 0x1, 0xe0, 0xf8, 0xc, 0x3, 0x0,
    0xc3, 0xce, 0xff, 0xbf, 0xe0,

    /* U+F095 "" */
    0x40, 0xe0, 0xc0, 0xc0, 0x60, 0x32, 0x1f, 0xe,

    /* U+F0C4 "" */
    0x0, 0x38, 0x9, 0x5, 0xc0, 0x8, 0x1d, 0x9,
    0x2, 0x40, 0x60, 0x0,

    /* U+F0C5 "" */
    0x1c, 0xc, 0x5, 0x23, 0x89, 0x86, 0x63, 0x98,
    0x6, 0x41, 0x10, 0x40, 0x10, 0x0,

    /* U+F0C7 "" */
    0xfe, 0x7a, 0xbd, 0x17, 0x18, 0xd, 0xf7, 0xb,
    0x85, 0xff, 0x0,

    /* U+F0E7 "" */
    0x63, 0x19, 0xff, 0x18, 0x84, 0x0, 0x0,

    /* U+F0F3 "" */
    0x0, 0x3, 0x1, 0xe0, 0xfc, 0x3f, 0xf, 0xc3,
    0xf1, 0xfe, 0x7f, 0x83, 0x0, 0x0,

    /* U+F124 "" */
    0x0, 0x3, 0xe, 0x3e, 0xfc, 0xc, 0x8, 0x8,
    0x0,

    /* U+F15B "" */
    0xf8, 0x7d, 0x3e, 0xdf, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0,

    /* U+F1EB "" */
    0x1f, 0x7, 0xfc, 0xce, 0x63, 0xf8, 0x24, 0x81,
    0xf0, 0x0, 0x0, 0x40,

    /* U+F240 "" */
    0x0, 0x7, 0xff, 0xaf, 0xfd, 0xff, 0xdf, 0xfe,
    0xff, 0xf6, 0xff, 0x5f, 0xfe,

    /* U+F241 "" */
    0x0, 0x7, 0xff, 0xaf, 0xc5, 0xff, 0x1f, 0xf8,
    0xff, 0xc6, 0xfc, 0x5f, 0xfe,

    /* U+F242 "" */
    0x0, 0x7, 0xff, 0xaf, 0x5, 0xf8, 0x1f, 0xc0,
    0xfe, 0x6, 0xf0, 0x5f, 0xfe,

    /* U+F243 "" */
    0x0, 0x7, 0xff, 0xac, 0x5, 0xe0, 0x1f, 0x0,
    0xf8, 0x6, 0xc0, 0x5f, 0xfe,

    /* U+F244 "" */
    0x0, 0x7, 0xff, 0xa0, 0x5, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x0, 0x5f, 0xfe,

    /* U+F293 "" */
    0x8, 0x3e, 0x76, 0x53, 0x63, 0x77, 0x63, 0x73,
    0x76, 0x3e, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_h = 0, .box_w = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 87, .box_h = 0, .box_w = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 87, .box_h = 7, .box_w = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 87, .box_h = 3, .box_w = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 4, .adv_w = 87, .box_h = 5, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 13, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 87, .box_h = 3, .box_w = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 24, .adv_w = 87, .box_h = 9, .box_w = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 28, .adv_w = 87, .box_h = 9, .box_w = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 32, .adv_w = 87, .box_h = 5, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 87, .box_h = 5, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 87, .box_h = 3, .box_w = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 41, .adv_w = 87, .box_h = 1, .box_w = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 42, .adv_w = 87, .box_h = 1, .box_w = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 48, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 52, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 66, .adv_w = 87, .box_h = 7, .box_w = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 87, .box_h = 8, .box_w = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 78, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 83, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 87, .box_h = 8, .box_w = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 94, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 99, .adv_w = 87, .box_h = 5, .box_w = 1, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 87, .box_h = 7, .box_w = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 102, .adv_w = 87, .box_h = 5, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 87, .box_h = 3, .box_w = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 107, .adv_w = 87, .box_h = 5, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 119, .adv_w = 87, .box_h = 7, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 133, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 152, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 87, .box_h = 7, .box_w = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 164, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 186, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 87, .box_h = 9, .box_w = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 195, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 203, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 212, .adv_w = 87, .box_h = 7, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 87, .box_h = 7, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 87, .box_h = 7, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 87, .box_h = 10, .box_w = 2, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 242, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 247, .adv_w = 87, .box_h = 10, .box_w = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 250, .adv_w = 87, .box_h = 4, .box_w = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 253, .adv_w = 87, .box_h = 1, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 254, .adv_w = 87, .box_h = 2, .box_w = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 255, .adv_w = 87, .box_h = 6, .box_w = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 259, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 263, .adv_w = 87, .box_h = 6, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 266, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 270, .adv_w = 87, .box_h = 6, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 274, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 283, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 87, .box_h = 7, .box_w = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 87, .box_h = 9, .box_w = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 295, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 87, .box_h = 7, .box_w = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 87, .box_h = 5, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 87, .box_h = 5, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 87, .box_h = 6, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 313, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 317, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 321, .adv_w = 87, .box_h = 5, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 87, .box_h = 6, .box_w = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 330, .adv_w = 87, .box_h = 8, .box_w = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 336, .adv_w = 87, .box_h = 6, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 339, .adv_w = 87, .box_h = 5, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 87, .box_h = 5, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 87, .box_h = 5, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 87, .box_h = 7, .box_w = 6, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 357, .adv_w = 87, .box_h = 5, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 87, .box_h = 10, .box_w = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 364, .adv_w = 87, .box_h = 8, .box_w = 1, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 365, .adv_w = 87, .box_h = 10, .box_w = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 369, .adv_w = 87, .box_h = 3, .box_w = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 371, .adv_w = 87, .box_h = 7, .box_w = 1, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 87, .box_h = 5, .box_w = 6, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 386, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 87, .box_h = 8, .box_w = 1, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 392, .adv_w = 87, .box_h = 9, .box_w = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 398, .adv_w = 87, .box_h = 2, .box_w = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 399, .adv_w = 87, .box_h = 6, .box_w = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 404, .adv_w = 87, .box_h = 6, .box_w = 4, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 407, .adv_w = 87, .box_h = 3, .box_w = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 409, .adv_w = 87, .box_h = 3, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 87, .box_h = 1, .box_w = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 412, .adv_w = 87, .box_h = 7, .box_w = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 418, .adv_w = 87, .box_h = 1, .box_w = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 419, .adv_w = 87, .box_h = 5, .box_w = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 422, .adv_w = 87, .box_h = 6, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 426, .adv_w = 87, .box_h = 4, .box_w = 3, .ofs_x = -1, .ofs_y = 3},
    {.bitmap_index = 428, .adv_w = 87, .box_h = 4, .box_w = 3, .ofs_x = -1, .ofs_y = 3},
    {.bitmap_index = 430, .adv_w = 87, .box_h = 2, .box_w = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 431, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 435, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 87, .box_h = 1, .box_w = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 441, .adv_w = 87, .box_h = 2, .box_w = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 442, .adv_w = 87, .box_h = 4, .box_w = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 444, .adv_w = 87, .box_h = 6, .box_w = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 447, .adv_w = 87, .box_h = 3, .box_w = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 449, .adv_w = 87, .box_h = 8, .box_w = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 455, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 460, .adv_w = 87, .box_h = 8, .box_w = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 466, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 470, .adv_w = 87, .box_h = 9, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 87, .box_h = 9, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 87, .box_h = 9, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 87, .box_h = 9, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 87, .box_h = 9, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 87, .box_h = 8, .box_w = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 87, .box_h = 7, .box_w = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 87, .box_h = 9, .box_w = 5, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 523, .adv_w = 87, .box_h = 9, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 87, .box_h = 9, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 87, .box_h = 9, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 87, .box_h = 9, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 87, .box_h = 9, .box_w = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 87, .box_h = 9, .box_w = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 87, .box_h = 9, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 87, .box_h = 9, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 87, .box_h = 9, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 87, .box_h = 10, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 581, .adv_w = 87, .box_h = 10, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 586, .adv_w = 87, .box_h = 10, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 591, .adv_w = 87, .box_h = 10, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 598, .adv_w = 87, .box_h = 10, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 603, .adv_w = 87, .box_h = 3, .box_w = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 605, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 609, .adv_w = 87, .box_h = 10, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 614, .adv_w = 87, .box_h = 10, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 619, .adv_w = 87, .box_h = 10, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 624, .adv_w = 87, .box_h = 10, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 629, .adv_w = 87, .box_h = 9, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 644, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 649, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 654, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 659, .adv_w = 87, .box_h = 8, .box_w = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 665, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 670, .adv_w = 87, .box_h = 9, .box_w = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 676, .adv_w = 87, .box_h = 6, .box_w = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 681, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 686, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 691, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 696, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 701, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 706, .adv_w = 87, .box_h = 7, .box_w = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 87, .box_h = 7, .box_w = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 87, .box_h = 7, .box_w = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 724, .adv_w = 87, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 733, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 737, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 741, .adv_w = 87, .box_h = 8, .box_w = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 746, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 750, .adv_w = 87, .box_h = 5, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 87, .box_h = 6, .box_w = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 759, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 763, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 767, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 771, .adv_w = 87, .box_h = 8, .box_w = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 775, .adv_w = 87, .box_h = 9, .box_w = 6, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 782, .adv_w = 87, .box_h = 9, .box_w = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 787, .adv_w = 87, .box_h = 9, .box_w = 6, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 794, .adv_w = 137, .box_h = 10, .box_w = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 806, .adv_w = 171, .box_h = 10, .box_w = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 820, .adv_w = 160, .box_h = 8, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 160, .box_h = 7, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 839, .adv_w = 126, .box_h = 8, .box_w = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 847, .adv_w = 137, .box_h = 10, .box_w = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 859, .adv_w = 137, .box_h = 9, .box_w = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 870, .adv_w = 126, .box_h = 9, .box_w = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 879, .adv_w = 149, .box_h = 8, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 149, .box_h = 9, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 137, .box_h = 9, .box_w = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 912, .adv_w = 69, .box_h = 7, .box_w = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 103, .box_h = 7, .box_w = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 149, .box_h = 9, .box_w = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 936, .adv_w = 171, .box_h = 9, .box_w = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 949, .adv_w = 137, .box_h = 9, .box_w = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 960, .adv_w = 91, .box_h = 9, .box_w = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 967, .adv_w = 126, .box_h = 9, .box_w = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 976, .adv_w = 137, .box_h = 9, .box_w = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 987, .adv_w = 91, .box_h = 9, .box_w = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 994, .adv_w = 137, .box_h = 8, .box_w = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1003, .adv_w = 114, .box_h = 10, .box_w = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1012, .adv_w = 114, .box_h = 10, .box_w = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1021, .adv_w = 126, .box_h = 8, .box_w = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1029, .adv_w = 126, .box_h = 3, .box_w = 8, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1032, .adv_w = 160, .box_h = 10, .box_w = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1045, .adv_w = 160, .box_h = 10, .box_w = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1058, .adv_w = 160, .box_h = 6, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1066, .adv_w = 171, .box_h = 7, .box_w = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1076, .adv_w = 149, .box_h = 8, .box_w = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1086, .adv_w = 149, .box_h = 10, .box_w = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1099, .adv_w = 126, .box_h = 8, .box_w = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1107, .adv_w = 160, .box_h = 9, .box_w = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1119, .adv_w = 160, .box_h = 11, .box_w = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1133, .adv_w = 137, .box_h = 9, .box_w = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1144, .adv_w = 80, .box_h = 10, .box_w = 5, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1151, .adv_w = 160, .box_h = 11, .box_w = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1165, .adv_w = 126, .box_h = 9, .box_w = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1174, .adv_w = 137, .box_h = 11, .box_w = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1187, .adv_w = 183, .box_h = 8, .box_w = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1199, .adv_w = 206, .box_h = 8, .box_w = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1212, .adv_w = 206, .box_h = 8, .box_w = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1225, .adv_w = 206, .box_h = 8, .box_w = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1238, .adv_w = 206, .box_h = 8, .box_w = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1251, .adv_w = 206, .box_h = 8, .box_w = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1264, .adv_w = 137, .box_h = 11, .box_w = 8, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static uint16_t unicode_list_2[] = {
    0x0, 0x7, 0xa, 0xb, 0xc, 0x10, 0x12, 0x13,
    0x14, 0x18, 0x20, 0x25, 0x26, 0x27, 0x3d, 0x3f,
    0x47, 0x4a, 0x4b, 0x50, 0x51, 0x52, 0x53, 0x66,
    0x67, 0x70, 0x73, 0x76, 0x78, 0x7a, 0x92, 0x94,
    0xc3, 0xc4, 0xc6, 0xe6, 0xf2, 0x123, 0x15a, 0x1ea,
    0x23f, 0x240, 0x241, 0x242, 0x243, 0x292
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY,
        .glyph_id_start = 1, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0
    },
    {
        .range_start = 161, .range_length = 95, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY,
        .glyph_id_start = 96, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0
    },
    {
        .range_start = 61441, .range_length = 659, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY,
        .glyph_id_start = 191, .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 46
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
    .cmap_num = 3,
    .bpp = 1,

    .kern_scale = 0,
    .kern_dsc = NULL,
    .kern_classes = 0,
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t anonymous_pro_10 = {
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
};

#endif /*#if ANONYMOUS_PRO_10*/

