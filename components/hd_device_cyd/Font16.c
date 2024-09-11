/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: --bpp 4 --size 16 --no-compress --font 89c0WkDVqb0K.woff --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789.,?!:;'\"-()[]{}/\|@#$%^&*+~`=±§¢£¤¥©®™°±¶·÷×≠≡≤≥⊗⊕∑√∞∂∫∮∇∈∉∪∩∫∃∀∅∇∈∉
中国台北台湾上海北京南温度湿菜单窗帘风扇 --format lvgl -o ceshi.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

//#ifndef CESHI
//#define CESHI 1
#ifndef FONT16
#define FONT16 1
#endif

#if CESHI

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0041 "A" */
    0x0, 0x0, 0xce, 0x0, 0x0, 0x0, 0x0, 0x3d,
    0xa5, 0x0, 0x0, 0x0, 0x9, 0x63, 0xc0, 0x0,
    0x0, 0x0, 0xd0, 0xc, 0x20, 0x0, 0x0, 0x58,
    0x0, 0x68, 0x0, 0x0, 0xb, 0x20, 0x0, 0xd0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0x40, 0x0, 0x85,
    0x0, 0x0, 0x4a, 0x0, 0xe, 0x10, 0x0, 0x0,
    0xe1, 0x4, 0xb0, 0x0, 0x0, 0x9, 0x70, 0xb6,
    0x0, 0x0, 0x0, 0x4d, 0x0,

    /* U+0062 "b" */
    0x88, 0x0, 0x0, 0x0, 0x88, 0x0, 0x0, 0x0,
    0x88, 0x0, 0x0, 0x0, 0x88, 0x7d, 0xed, 0x70,
    0x8c, 0x80, 0x2, 0xd5, 0x8c, 0x0, 0x0, 0x6b,
    0x88, 0x0, 0x0, 0x3d, 0x87, 0x0, 0x0, 0x2e,
    0x88, 0x0, 0x0, 0x3c, 0x8d, 0x0, 0x0, 0x6a,
    0x8c, 0x80, 0x2, 0xe4, 0x86, 0x7d, 0xed, 0x60,

    /* U+0063 "c" */
    0x0, 0x7d, 0xee, 0xc0, 0x7c, 0x10, 0x2, 0xd,
    0x40, 0x0, 0x0, 0xf1, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x0, 0xf1, 0x0, 0x0, 0xd, 0x40, 0x0,
    0x0, 0x7c, 0x20, 0x3, 0x0, 0x7d, 0xee, 0xc0,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0x9, 0x70, 0x0, 0x0, 0x0,
    0x97, 0x0, 0x0, 0x0, 0x9, 0x70, 0x7, 0xee,
    0xd6, 0x97, 0x5, 0xd2, 0x0, 0x9c, 0x70, 0xc4,
    0x0, 0x0, 0xe7, 0xe, 0x10, 0x0, 0xa, 0x70,
    0xf1, 0x0, 0x0, 0x97, 0xf, 0x10, 0x0, 0xa,
    0x70, 0xc4, 0x0, 0x0, 0xe7, 0x7, 0xd1, 0x0,
    0x9c, 0x70, 0x8, 0xee, 0xd6, 0x77
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 162, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 158, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 123, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 158, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x21, 0x22, 0x23
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 65, .range_length = 36, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ceshi = {
#else
lv_font_t ceshi = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if CESHI*/

