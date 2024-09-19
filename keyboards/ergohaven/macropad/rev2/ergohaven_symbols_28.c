/*******************************************************************************
 * Size: 28 px
 * Bpp: 2
 * Opts: --bpp 2 --size 28 --no-compress --font fa-solid-900.woff --range 63145,62761,61453,63692,61829,61932,61664,61442,61830,61444,62217-62220,61696-61699,61530,62201,62186,61705,61612,62973 --font fa-brands-400.woff --range 61817,61818,61820 --format lvgl -o ergohaven_symbols_28.c
 ******************************************************************************/

#include "qp_lvgl.h"

#ifndef ERGOHAVEN_SYMBOLS_28
#define ERGOHAVEN_SYMBOLS_28 1
#endif

#if ERGOHAVEN_SYMBOLS_28

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+F002 "" */
    0x0, 0x0, 0x15, 0x50, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x3, 0xff, 0xe0, 0x2,
    0xff, 0xf0, 0x0, 0x2, 0xff, 0xc0, 0x0, 0xf,
    0xfd, 0x0, 0x0, 0xff, 0xc0, 0x0, 0x0, 0xff,
    0xc0, 0x0, 0x7f, 0xd0, 0x0, 0x0, 0x1f, 0xf0,
    0x0, 0x2f, 0xf0, 0x0, 0x0, 0x3, 0xfe, 0x0,
    0xf, 0xf8, 0x0, 0x0, 0x0, 0xff, 0x80, 0x3,
    0xfd, 0x0, 0x0, 0x0, 0x2f, 0xe0, 0x0, 0xff,
    0x40, 0x0, 0x0, 0xb, 0xf8, 0x0, 0x3f, 0xe0,
    0x0, 0x0, 0x3, 0xfe, 0x0, 0xb, 0xfc, 0x0,
    0x0, 0x0, 0xff, 0x40, 0x1, 0xff, 0x40, 0x0,
    0x0, 0xbf, 0xc0, 0x0, 0x3f, 0xf0, 0x0, 0x0,
    0x7f, 0xf0, 0x0, 0x7, 0xff, 0x40, 0x0, 0x7f,
    0xf4, 0x0, 0x0, 0xff, 0xfd, 0x1, 0xff, 0xf8,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xd0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x0,
    0x0, 0xb, 0xff, 0xff, 0xf6, 0xff, 0xd0, 0x0,
    0x0, 0x2f, 0xff, 0xd0, 0x7f, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xfd, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x50, 0x0,

    /* U+F004 "" */
    0x0, 0x6, 0xa4, 0x0, 0x1, 0xaa, 0x0, 0x0,
    0xb, 0xff, 0xf8, 0x1, 0xff, 0xfe, 0x0, 0x2,
    0xff, 0xff, 0xe0, 0xbf, 0xff, 0xfc, 0x0, 0xbf,
    0xff, 0xff, 0xef, 0xff, 0xff, 0xe0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x42, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x2f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0xb, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0x0, 0x0, 0x0, 0x0,

    /* U+F00D "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0x40, 0x0,
    0x3, 0xe0, 0x7f, 0xd0, 0x0, 0xf, 0xf8, 0xff,
    0xf4, 0x0, 0x3f, 0xfc, 0xbf, 0xfd, 0x0, 0xff,
    0xfc, 0x3f, 0xff, 0x43, 0xff, 0xf4, 0xf, 0xff,
    0xdf, 0xff, 0xd0, 0x3, 0xff, 0xff, 0xff, 0x40,
    0x0, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x3f, 0xff,
    0xf4, 0x0, 0x0, 0xf, 0xff, 0xe0, 0x0, 0x0,
    0x3f, 0xff, 0xf4, 0x0, 0x0, 0xff, 0xff, 0xfd,
    0x0, 0x3, 0xff, 0xff, 0xff, 0x40, 0xf, 0xff,
    0xdf, 0xff, 0xd0, 0x3f, 0xff, 0x43, 0xff, 0xf4,
    0xff, 0xfd, 0x0, 0xff, 0xfc, 0xff, 0xf4, 0x0,
    0x3f, 0xfc, 0x7f, 0xd0, 0x0, 0xf, 0xf8, 0x1f,
    0x40, 0x0, 0x3, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+F05A "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1b, 0xff, 0xe4, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0xfd, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x40, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0xb, 0xff, 0xff, 0x82, 0xff, 0xff, 0xf0,
    0xf, 0xff, 0xff, 0x0, 0xbf, 0xff, 0xf4, 0x2f,
    0xff, 0xff, 0x0, 0xbf, 0xff, 0xfc, 0x3f, 0xff,
    0xff, 0x0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff,
    0xd7, 0xff, 0xff, 0xfd, 0x7f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x7f, 0xff, 0xfc, 0x0, 0xff,
    0xff, 0xfe, 0xbf, 0xff, 0xfc, 0x0, 0xff, 0xff,
    0xfe, 0x7f, 0xff, 0xfe, 0x0, 0xff, 0xff, 0xfe,
    0x7f, 0xff, 0xff, 0x40, 0xff, 0xff, 0xfe, 0x3f,
    0xff, 0xff, 0x40, 0xff, 0xff, 0xfd, 0x3f, 0xff,
    0xff, 0x0, 0xff, 0xff, 0xfc, 0x2f, 0xff, 0xfc,
    0x0, 0x3f, 0xff, 0xfc, 0xf, 0xff, 0xfc, 0x0,
    0x3f, 0xff, 0xf4, 0xb, 0xff, 0xfe, 0xaa, 0xbf,
    0xff, 0xf0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xfd, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x1b,
    0xff, 0xe4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0,

    /* U+F0AC "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbc, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xc3, 0xff, 0xe, 0x0, 0x0, 0x0, 0x1f, 0x87,
    0xff, 0x87, 0xd0, 0x0, 0x0, 0xbf, 0xf, 0xff,
    0xc3, 0xf8, 0x0, 0x2, 0xff, 0x1f, 0xff, 0xd2,
    0xfe, 0x0, 0x7, 0xfe, 0x2f, 0xff, 0xf1, 0xff,
    0x40, 0xf, 0xfd, 0x3f, 0xff, 0xf0, 0xff, 0xc0,
    0x2f, 0xfc, 0x3f, 0xff, 0xf0, 0xff, 0xe0, 0x5,
    0x50, 0x15, 0x55, 0x50, 0x15, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf8, 0xbf,
    0xff, 0xf8, 0xbf, 0xf8, 0xff, 0xf8, 0xbf, 0xff,
    0xf8, 0xbf, 0xfc, 0xff, 0xf8, 0xbf, 0xff, 0xfc,
    0x7f, 0xfc, 0xff, 0xf8, 0xbf, 0xff, 0xfc, 0x7f,
    0xfc, 0xff, 0xf8, 0xbf, 0xff, 0xfc, 0x7f, 0xfc,
    0xff, 0xf8, 0xbf, 0xff, 0xf8, 0xbf, 0xfc, 0xbf,
    0xf8, 0xbf, 0xff, 0xf8, 0xbf, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x50, 0x15,
    0x55, 0x50, 0x15, 0x40, 0x2f, 0xfc, 0x3f, 0xff,
    0xf0, 0xff, 0xe0, 0xf, 0xfd, 0x3f, 0xff, 0xf0,
    0xff, 0xc0, 0x7, 0xfe, 0x2f, 0xff, 0xf1, 0xff,
    0x40, 0x2, 0xff, 0x1f, 0xff, 0xd2, 0xfe, 0x0,
    0x0, 0xbf, 0xf, 0xff, 0xc3, 0xf8, 0x0, 0x0,
    0x1f, 0x87, 0xff, 0x87, 0xd0, 0x0, 0x0, 0x2,
    0xc3, 0xff, 0xe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0,

    /* U+F0E0 "" */
    0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xbf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf4, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0xd0, 0xbf, 0xff, 0xff, 0xff, 0xfe, 0x7,
    0xf8, 0x1f, 0xff, 0xff, 0xff, 0xf4, 0x2f, 0xff,
    0x3, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xd0,
    0xbf, 0xff, 0xfe, 0x7, 0xff, 0xff, 0xf8, 0x1f,
    0xff, 0xf4, 0x2f, 0xff, 0xff, 0xff, 0x3, 0xff,
    0xc0, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x7d, 0x7,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x96, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf8,

    /* U+F100 "" */
    0x0, 0x0, 0x10, 0x0, 0x1, 0x0, 0x0, 0x7,
    0xe0, 0x0, 0x3f, 0x0, 0x0, 0x7f, 0xd0, 0x3,
    0xff, 0x0, 0x7, 0xff, 0x80, 0x3f, 0xfc, 0x0,
    0x7f, 0xfc, 0x3, 0xff, 0xd0, 0x7, 0xff, 0xc0,
    0x3f, 0xfd, 0x0, 0x7f, 0xfc, 0x3, 0xff, 0xd0,
    0x7, 0xff, 0xc0, 0x3f, 0xfd, 0x0, 0x7f, 0xfc,
    0x2, 0xff, 0xd0, 0x2, 0xff, 0xd0, 0xf, 0xff,
    0x0, 0x3, 0xff, 0xc0, 0x2f, 0xfe, 0x0, 0x3,
    0xff, 0xc0, 0x2f, 0xfe, 0x0, 0x3, 0xff, 0xc0,
    0x2f, 0xfe, 0x0, 0x3, 0xff, 0xc0, 0x2f, 0xfe,
    0x0, 0x3, 0xff, 0xc0, 0x2f, 0xfe, 0x0, 0x3,
    0xff, 0x80, 0x2f, 0xfc, 0x0, 0x3, 0xfc, 0x0,
    0x2f, 0xe0, 0x0, 0x3, 0xd0, 0x0, 0x2e, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+F101 "" */
    0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0xbd, 0x0,
    0x3, 0xf0, 0x0, 0x7, 0xfd, 0x0, 0x3f, 0xf0,
    0x0, 0x2f, 0xfd, 0x0, 0xff, 0xf0, 0x0, 0x3f,
    0xfd, 0x1, 0xff, 0xf0, 0x0, 0x3f, 0xfd, 0x1,
    0xff, 0xf0, 0x0, 0x3f, 0xfd, 0x1, 0xff, 0xf0,
    0x0, 0x3f, 0xfd, 0x1, 0xff, 0xf0, 0x0, 0x3f,
    0xfd, 0x1, 0xff, 0xe0, 0x0, 0x3f, 0xf8, 0x2,
    0xff, 0xc0, 0x3, 0xff, 0xc0, 0x2f, 0xfe, 0x0,
    0x3f, 0xfc, 0x2, 0xff, 0xe0, 0x3, 0xff, 0xc0,
    0x2f, 0xfe, 0x0, 0x3f, 0xfc, 0x2, 0xff, 0xe0,
    0x3, 0xff, 0xc0, 0x2f, 0xfe, 0x0, 0x2f, 0xfc,
    0x0, 0xff, 0xe0, 0x0, 0x3f, 0xc0, 0x2, 0xfe,
    0x0, 0x0, 0x7c, 0x0, 0x2, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+F102 "" */
    0x0, 0x0, 0x40, 0x0, 0x0, 0x0, 0x2f, 0x40,
    0x0, 0x0, 0xb, 0xfd, 0x0, 0x0, 0x2, 0xff,
    0xf4, 0x0, 0x0, 0xbf, 0xff, 0xd0, 0x0, 0x2f,
    0xff, 0xff, 0x40, 0xb, 0xff, 0xbf, 0xfd, 0x2,
    0xff, 0xe0, 0xff, 0xf4, 0xbf, 0xf8, 0x3, 0xff,
    0xcf, 0xfe, 0x0, 0xf, 0xfe, 0x7f, 0x80, 0x0,
    0x3f, 0xc1, 0xe0, 0xe, 0x0, 0xa0, 0x0, 0x3,
    0xf8, 0x0, 0x0, 0x0, 0xff, 0xe0, 0x0, 0x0,
    0x3f, 0xff, 0x80, 0x0, 0xf, 0xff, 0xfe, 0x0,
    0x3, 0xff, 0xff, 0xf8, 0x0, 0xff, 0xf1, 0xff,
    0xe0, 0x3f, 0xfc, 0x7, 0xff, 0x8f, 0xff, 0x0,
    0x1f, 0xfd, 0xbf, 0xc0, 0x0, 0x7f, 0xd3, 0xf0,
    0x0, 0x1, 0xf4, 0x4, 0x0, 0x0, 0x0, 0x0,

    /* U+F103 "" */
    0x4, 0x0, 0x0, 0x0, 0x3, 0xf0, 0x0, 0x1,
    0xf4, 0xbf, 0xc0, 0x0, 0x7f, 0xdf, 0xff, 0x0,
    0x1f, 0xfd, 0x3f, 0xfc, 0x7, 0xff, 0x80, 0xff,
    0xf1, 0xff, 0xe0, 0x3, 0xff, 0xff, 0xf8, 0x0,
    0xf, 0xff, 0xfe, 0x0, 0x0, 0x3f, 0xff, 0x80,
    0x0, 0x0, 0xff, 0xe0, 0x0, 0x0, 0x3, 0xf8,
    0x0, 0x1, 0xe0, 0xe, 0x0, 0xa0, 0x7f, 0x80,
    0x0, 0x3f, 0xcf, 0xfe, 0x0, 0xf, 0xfe, 0xbf,
    0xf8, 0x3, 0xff, 0xc2, 0xff, 0xe0, 0xff, 0xf4,
    0xb, 0xff, 0xbf, 0xfd, 0x0, 0x2f, 0xff, 0xff,
    0x40, 0x0, 0xbf, 0xff, 0xd0, 0x0, 0x2, 0xff,
    0xf4, 0x0, 0x0, 0xb, 0xfd, 0x0, 0x0, 0x0,
    0x2f, 0x40, 0x0, 0x0, 0x0, 0x40, 0x0, 0x0,

    /* U+F109 "" */
    0x0, 0x16, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x50,
    0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x40, 0x2, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xfe, 0x0, 0xb, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xf8, 0x0, 0x2f, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0xbf, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x2, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0xb,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xf8, 0x0,
    0x2f, 0xc0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0,
    0x0, 0xbf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0x80, 0x2, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xfe, 0x0, 0xb, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x2f, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xe0, 0x0, 0xbf, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0x80, 0x2, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xfe, 0x0, 0xb, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0xbf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x2,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0x6, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xff, 0xf8, 0x0, 0xf, 0xff,
    0xff, 0xfe, 0xff, 0xff, 0xff, 0xf8, 0x0, 0xbf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0x5, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xa9, 0x40,

    /* U+F179 "" */
    0x0, 0x0, 0x0, 0x9, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0x80, 0x0, 0x0, 0x0, 0x1f, 0xd0, 0x0,
    0x0, 0x0, 0xf, 0xf0, 0x0, 0x0, 0x0, 0x7,
    0xf0, 0x0, 0x0, 0x0, 0x1, 0xe0, 0x0, 0x0,
    0x6, 0xe4, 0x2, 0xf9, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xf0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xff, 0xff, 0x7, 0xff, 0xff, 0xff,
    0xff, 0x2, 0xff, 0xff, 0xff, 0xff, 0x80, 0xbf,
    0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff,
    0xf4, 0xb, 0xff, 0xff, 0xff, 0xfe, 0x2, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff,
    0xf8, 0xf, 0xff, 0xff, 0xff, 0xff, 0x83, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff,
    0xfd, 0xf, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x1f, 0xff, 0xff, 0xff,
    0x80, 0x2, 0xff, 0xff, 0xff, 0x80, 0x0, 0x1a,
    0x40, 0x1a, 0x40, 0x0,

    /* U+F17A "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x16, 0x40, 0x0,
    0x0, 0x1, 0xaf, 0xff, 0xd0, 0x0, 0x5a, 0x3f,
    0xff, 0xff, 0xf5, 0xaf, 0xff, 0xcf, 0xff, 0xff,
    0xfd, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0x7f,
    0xff, 0xfc, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xcf, 0xff,
    0xff, 0xfd, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff,
    0x7f, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xdf, 0xff,
    0xff, 0x3f, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xcf,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xdf,
    0xff, 0xff, 0x3f, 0xff, 0xff, 0xf7, 0xff, 0xff,
    0xcf, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xf3, 0xff,
    0xff, 0xff, 0x7f, 0xff, 0xfc, 0xff, 0xff, 0xff,
    0xdf, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xf7, 0xff,
    0xff, 0xcf, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xf3,
    0xff, 0xff, 0xff, 0x5a, 0xff, 0xfc, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x5a, 0x3f, 0xff, 0xff, 0xf4,
    0x0, 0x0, 0x0, 0x1a, 0xff, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x16, 0x40,

    /* U+F17C "" */
    0x0, 0x0, 0x2, 0xa4, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x7f, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x6b, 0x8f, 0xc0, 0x0, 0x0, 0x0,
    0x93, 0x23, 0xc0, 0x0, 0x0, 0x0, 0x69, 0x73,
    0xc0, 0x0, 0x0, 0x0, 0x60, 0xb, 0xc0, 0x0,
    0x0, 0x0, 0x90, 0x7, 0xc0, 0x0, 0x0, 0x0,
    0xe0, 0x13, 0xd0, 0x0, 0x0, 0x0, 0xc0, 0x2,
    0xf0, 0x0, 0x0, 0x3, 0xc0, 0x1, 0xfc, 0x0,
    0x0, 0xb, 0x80, 0x0, 0xfe, 0x0, 0x0, 0xf,
    0x0, 0x0, 0x7f, 0x0, 0x0, 0x3f, 0x0, 0x0,
    0x3b, 0xc0, 0x0, 0x7d, 0x0, 0x0, 0x2f, 0xc0,
    0x0, 0xac, 0x0, 0x0, 0xe, 0xe0, 0x0, 0xe8,
    0x0, 0x0, 0xa, 0xf0, 0x0, 0xe4, 0x0, 0x0,
    0xa, 0xf0, 0x0, 0xb4, 0x0, 0x0, 0x3f, 0xa0,
    0x1, 0xd, 0x0, 0x0, 0x5f, 0x90, 0x14, 0x7,
    0x80, 0x0, 0x40, 0x4, 0x10, 0x3, 0xd0, 0x0,
    0x40, 0x4, 0x10, 0x0, 0xd0, 0x0, 0x0, 0x1,
    0x10, 0x0, 0x40, 0x2, 0x0, 0x1, 0x0, 0x0,
    0x29, 0x6f, 0x0, 0x4, 0x25, 0x0, 0x2f, 0xbe,
    0x0, 0x40, 0x0, 0x54, 0x50, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x0, 0x0, 0x54, 0x0,

    /* U+F185 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x50, 0x1,
    0xff, 0x80, 0x1, 0x0, 0x0, 0x3f, 0x90, 0xff,
    0xf0, 0x6f, 0xc0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x3f, 0xf8, 0x0, 0x2f, 0xfd,
    0x0, 0x0, 0xf, 0xf4, 0x1a, 0x41, 0xff, 0x0,
    0x0, 0x1, 0xf4, 0x7f, 0xfd, 0x1f, 0x80, 0x0,
    0x0, 0xbc, 0x3f, 0xff, 0xd2, 0xf4, 0x0, 0x2,
    0xfd, 0x2f, 0xff, 0xfc, 0x7f, 0xd0, 0xb, 0xff,
    0xf, 0xff, 0xff, 0xf, 0xff, 0xf, 0xff, 0xc3,
    0xff, 0xff, 0xd3, 0xff, 0xf1, 0xff, 0xf0, 0xff,
    0xff, 0xf0, 0xff, 0xf4, 0x7, 0xfd, 0x3f, 0xff,
    0xfc, 0x3f, 0xd0, 0x0, 0x1f, 0x87, 0xff, 0xfd,
    0x2f, 0x40, 0x0, 0x1, 0xf0, 0x7f, 0xfe, 0xf,
    0x80, 0x0, 0x0, 0xbf, 0x2, 0xf9, 0xf, 0xf0,
    0x0, 0x0, 0x3f, 0xf4, 0x0, 0xf, 0xfc, 0x0,
    0x0, 0x1f, 0xff, 0xd5, 0x6f, 0xff, 0x40, 0x0,
    0xb, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x3,
    0xfe, 0x4f, 0xff, 0x5b, 0xfc, 0x0, 0x0, 0xe4,
    0x2, 0xff, 0xc0, 0x1b, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x18, 0x0,
    0x0, 0x0, 0x0,

    /* U+F186 "" */
    0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xbf, 0xfe, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0x40,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xfd, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0x40, 0x0,
    0x0, 0xbf, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0xff, 0x95, 0x40, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x0, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x1, 0xff, 0xff, 0xff, 0xff,
    0xd0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x1, 0xaa, 0x90, 0x0, 0x0,

    /* U+F1EC "" */
    0x6, 0xaa, 0xaa, 0xaa, 0xaa, 0x94, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xbf,
    0x80, 0x0, 0x0, 0x0, 0xf, 0xef, 0xe0, 0x0,
    0x0, 0x0, 0x3, 0xfb, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0xfe, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xbf, 0x80, 0x0, 0x0, 0x0, 0xf, 0xef, 0xe0,
    0x0, 0x0, 0x0, 0x3, 0xfb, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef,
    0xfa, 0xbf, 0xea, 0xff, 0xab, 0xfb, 0xf8, 0xf,
    0xe0, 0x3f, 0x80, 0xfe, 0xfe, 0x3, 0xf8, 0xf,
    0xe0, 0x3f, 0xbf, 0x80, 0xfe, 0x3, 0xf8, 0xf,
    0xef, 0xff, 0xff, 0xff, 0xfe, 0x3, 0xfb, 0xff,
    0xff, 0xff, 0xff, 0x80, 0xfe, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0x3f, 0xbf, 0xea, 0xff, 0xab, 0xf8,
    0xf, 0xef, 0xe0, 0x3f, 0x80, 0xfe, 0x3, 0xfb,
    0xf8, 0xf, 0xe0, 0x3f, 0x80, 0xfe, 0xfe, 0x3,
    0xf8, 0xf, 0xe0, 0x3f, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x6,
    0xaa, 0xaa, 0xaa, 0xaa, 0x94, 0x0,

    /* U+F2EA "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1b, 0xff, 0xe4, 0x0, 0x0, 0x24, 0x1,
    0xff, 0xff, 0xff, 0x40, 0x0, 0xbd, 0xf, 0xff,
    0xff, 0xff, 0xf0, 0x0, 0xbf, 0xbf, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0xbf, 0xff, 0xfe, 0x55, 0xbf,
    0xff, 0x0, 0xbf, 0xff, 0xe0, 0x0, 0x7, 0xff,
    0xc0, 0xbf, 0xff, 0x0, 0x0, 0x0, 0xff, 0xe0,
    0xbf, 0xff, 0x40, 0x0, 0x0, 0x3f, 0xf0, 0xbf,
    0xff, 0xd0, 0x0, 0x0, 0x1f, 0xf8, 0xbf, 0xff,
    0xf0, 0x0, 0x0, 0xb, 0xfc, 0x7f, 0xff, 0xf0,
    0x0, 0x0, 0x7, 0xfc, 0x5, 0x55, 0x40, 0x0,
    0x0, 0x3, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xfd, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xf0, 0x0, 0x2, 0x0, 0x0, 0x0,
    0xff, 0xe0, 0x0, 0xf, 0xe0, 0x0, 0x7, 0xff,
    0xc0, 0x0, 0x3f, 0xfe, 0x55, 0xbf, 0xff, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0xb, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x1b,
    0xff, 0xe4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0,

    /* U+F2F9 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1b, 0xff, 0xe4, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0x40, 0x18, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xf0, 0x7d, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0xfe, 0xfe, 0x0, 0xff, 0xfe, 0x55, 0xbf,
    0xff, 0xfe, 0x3, 0xff, 0xe0, 0x0, 0x7, 0xff,
    0xfe, 0xb, 0xff, 0x0, 0x0, 0x0, 0xff, 0xfe,
    0xf, 0xfc, 0x0, 0x0, 0x1, 0xff, 0xfe, 0x2f,
    0xf4, 0x0, 0x0, 0x7, 0xff, 0xfe, 0x3f, 0xe0,
    0x0, 0x0, 0xf, 0xff, 0xfe, 0x3f, 0xd0, 0x0,
    0x0, 0xf, 0xff, 0xfd, 0x7f, 0xc0, 0x0, 0x0,
    0x1, 0x55, 0x50, 0x7f, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb, 0xff, 0x0, 0x0, 0x0,
    0x80, 0x0, 0x3, 0xff, 0xd0, 0x0, 0xb, 0xf0,
    0x0, 0x0, 0xff, 0xfe, 0x55, 0xbf, 0xfc, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x1b,
    0xff, 0xe4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0,

    /* U+F309 "" */
    0x0, 0x2a, 0x80, 0x0, 0x3, 0xfc, 0x0, 0x0,
    0x3f, 0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f,
    0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0,
    0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0, 0x0,
    0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x3,
    0xfc, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x3, 0xfc,
    0x0, 0x0, 0x3f, 0xc0, 0x0, 0x3, 0xfc, 0x0,
    0x0, 0x3f, 0xc0, 0x0, 0x57, 0xfd, 0x50, 0x3f,
    0xff, 0xff, 0xc3, 0xff, 0xff, 0xfc, 0xf, 0xff,
    0xff, 0x0, 0x3f, 0xff, 0xc0, 0x0, 0xff, 0xf0,
    0x0, 0x3, 0xfc, 0x0, 0x0, 0xf, 0x0, 0x0,

    /* U+F30A "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xfe, 0x55, 0x55, 0x55, 0x55, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x42, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x28, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+F30B "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xb, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xc0, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xfc, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x19,
    0x0, 0x0,

    /* U+F30C "" */
    0x0, 0x5, 0x0, 0x0, 0x2, 0xf8, 0x0, 0x0,
    0xbf, 0xe0, 0x0, 0x2f, 0xff, 0x80, 0xb, 0xff,
    0xfe, 0x2, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff,
    0xc1, 0xff, 0xff, 0xf4, 0x0, 0x3f, 0xc0, 0x0,
    0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x3,
    0xfc, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x3, 0xfc,
    0x0, 0x0, 0x3f, 0xc0, 0x0, 0x3, 0xfc, 0x0,
    0x0, 0x3f, 0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0,
    0x3f, 0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f,
    0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0,
    0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0, 0x0,

    /* U+F529 "" */
    0x0, 0x0, 0x7, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xff, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd7,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xbf, 0x40, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xe0, 0x0, 0x0, 0x0,

    /* U+F5FD "" */
    0x0, 0x0, 0x0, 0x14, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xfe, 0x40, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0xfd, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf4, 0x7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4,
    0x0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0,
    0x0, 0xb, 0xff, 0xff, 0xfe, 0x40, 0x0, 0x7,
    0xd0, 0x2f, 0xff, 0xf8, 0x2, 0xd0, 0x1f, 0xff,
    0x40, 0xbf, 0xe0, 0x1f, 0xff, 0x4f, 0xff, 0xfe,
    0x1, 0x40, 0x7f, 0xff, 0xf1, 0xff, 0xff, 0xf8,
    0x2, 0xff, 0xff, 0xf4, 0x7, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd0, 0x0, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0x40, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xf9,
    0x0, 0x0, 0x1e, 0x40, 0xbf, 0xff, 0xe0, 0xb,
    0x40, 0x7f, 0xfd, 0x2, 0xff, 0x80, 0x7f, 0xfd,
    0x3f, 0xff, 0xf4, 0x5, 0x1, 0xff, 0xff, 0xc7,
    0xff, 0xff, 0xe0, 0xb, 0xff, 0xff, 0xd0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0xff, 0xe4, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0xb, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x14, 0x0,
    0x0, 0x0, 0x0,

    /* U+F6A9 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x24, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xfc,
    0x0, 0x0, 0x0, 0x2, 0xaa, 0xbf, 0xff, 0x0,
    0x20, 0x1, 0x43, 0xff, 0xff, 0xff, 0xc0, 0x2f,
    0x2, 0xf4, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xf2,
    0xff, 0x3f, 0xff, 0xff, 0xfc, 0x3, 0xff, 0xff,
    0x4f, 0xff, 0xff, 0xff, 0x0, 0x3f, 0xff, 0x43,
    0xff, 0xff, 0xff, 0xc0, 0x3, 0xff, 0x80, 0xff,
    0xff, 0xff, 0xf0, 0x2, 0xff, 0xf0, 0x3f, 0xff,
    0xff, 0xfc, 0x2, 0xff, 0xff, 0xf, 0xff, 0xff,
    0xff, 0x1, 0xff, 0xbf, 0xf3, 0xff, 0xff, 0xff,
    0xc0, 0x3f, 0x43, 0xf8, 0xbf, 0xff, 0xff, 0xf0,
    0x3, 0x40, 0x38, 0x0, 0x0, 0xbf, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xbc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+F8CC "" */
    0x0, 0x1, 0x51, 0x50, 0x0, 0x0, 0x1f, 0xf8,
    0xbf, 0xd0, 0x0, 0x2f, 0xfe, 0x2f, 0xfe, 0x0,
    0x3f, 0xff, 0x8b, 0xff, 0xf0, 0x2f, 0xff, 0xe2,
    0xff, 0xfe, 0xf, 0xff, 0xf8, 0xbf, 0xff, 0xcb,
    0xff, 0xfe, 0x2f, 0xff, 0xfb, 0xff, 0xff, 0x8b,
    0xff, 0xff, 0xff, 0xff, 0xe2, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0xbf, 0xff, 0xff, 0xff, 0xfe, 0x2f,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x2f, 0xff,
    0xff, 0xff, 0xfe, 0x3, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0x0, 0x2, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x6, 0xaa, 0xa4, 0x0,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 448, .box_w = 29, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 211, .adv_w = 448, .box_w = 30, .box_h = 25, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 399, .adv_w = 308, .box_w = 20, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 448, .box_w = 28, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 707, .adv_w = 434, .box_w = 28, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 910, .adv_w = 448, .box_w = 28, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 392, .box_w = 23, .box_h = 19, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1167, .adv_w = 392, .box_w = 23, .box_h = 19, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1277, .adv_w = 280, .box_w = 18, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1381, .adv_w = 280, .box_w = 18, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1485, .adv_w = 560, .box_w = 35, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1739, .adv_w = 336, .box_w = 21, .box_h = 25, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1871, .adv_w = 392, .box_w = 25, .box_h = 25, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2028, .adv_w = 392, .box_w = 24, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2202, .adv_w = 448, .box_w = 29, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2413, .adv_w = 448, .box_w = 26, .box_h = 29, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2602, .adv_w = 392, .box_w = 25, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2784, .adv_w = 448, .box_w = 28, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2987, .adv_w = 448, .box_w = 28, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3190, .adv_w = 224, .box_w = 14, .box_h = 25, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3278, .adv_w = 392, .box_w = 25, .box_h = 13, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 3360, .adv_w = 392, .box_w = 25, .box_h = 13, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 3442, .adv_w = 224, .box_w = 14, .box_h = 25, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3530, .adv_w = 392, .box_w = 25, .box_h = 25, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3687, .adv_w = 448, .box_w = 29, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3898, .adv_w = 448, .box_w = 29, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4065, .adv_w = 336, .box_w = 21, .box_h = 29, .ofs_x = 0, .ofs_y = -4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x2, 0xb, 0x58, 0xaa, 0xde, 0xfe, 0xff,
    0x100, 0x101, 0x107, 0x177, 0x178, 0x17a, 0x183, 0x184,
    0x1ea, 0x2e8, 0x2f7, 0x307, 0x308, 0x309, 0x30a, 0x527,
    0x5fb, 0x6a7, 0x8ca
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 61442, .range_length = 2251, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 27, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};

extern const lv_font_t lv_font_montserrat_28;


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ergohaven_symbols_28 = {
#else
lv_font_t ergohaven_symbols_28 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 29,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = &lv_font_montserrat_28,
#endif
    .user_data = NULL,
};



#endif /*#if ERGOHAVEN_SYMBOLS_28*/
