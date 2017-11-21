#include "misc_conf.h"
#if  USE_FONT_SYMBOL_20_BASIC != 0
#include <stdint.h>
#include "lvgl/misc/gfx/font.h"

/*Store the image of the letters (glyph) */
static const uint8_t symbol_20_basic_bitmap[] = 
{
    // ASCII: 57344, char width: 20
    0x00, 0x00, 0x00,  // --------------------....
    0xf9, 0xff, 0xf0,  // OOOOO--OOOOOOOOOOOOO....
    0xfd, 0xff, 0xf0,  // OOOOOO-OOOOOOOOOOOOO....
    0xfd, 0xff, 0xf0,  // OOOOOO-OOOOOOOOOOOOO....
    0xfd, 0xff, 0xf0,  // OOOOOO-OOOOOOOOOOOOO....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0xf9, 0xff, 0xf0,  // OOOOO--OOOOOOOOOOOOO....
    0xfd, 0xff, 0xf0,  // OOOOOO-OOOOOOOOOOOOO....
    0xfd, 0xff, 0xf0,  // OOOOOO-OOOOOOOOOOOOO....
    0xfd, 0xff, 0xf0,  // OOOOOO-OOOOOOOOOOOOO....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0xfd, 0xff, 0xf0,  // OOOOOO-OOOOOOOOOOOOO....
    0xfd, 0xff, 0xf0,  // OOOOOO-OOOOOOOOOOOOO....
    0xfd, 0xff, 0xf0,  // OOOOOO-OOOOOOOOOOOOO....
    0xf9, 0xff, 0xf0,  // OOOOO--OOOOOOOOOOOOO....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....

    // ASCII: 57345, char width: 20
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x01, 0x80,  // ---------------OO---....
    0x00, 0x03, 0xc0,  // --------------OOOO--....
    0x00, 0x07, 0xe0,  // -------------OOOOOO-....
    0x00, 0x0f, 0xc0,  // ------------OOOOOO--....
    0x18, 0x1f, 0x80,  // ---OO------OOOOOO---....
    0x3c, 0x3f, 0x00,  // --OOOO----OOOOOO----....
    0x7e, 0x7e, 0x00,  // -OOOOOO--OOOOOO-----....
    0x3f, 0xfc, 0x00,  // --OOOOOOOOOOOO------....
    0x1f, 0xf8, 0x00,  // ---OOOOOOOOOO-------....
    0x0f, 0xf0, 0x00,  // ----OOOOOOOO--------....
    0x07, 0xe0, 0x00,  // -----OOOOOO---------....
    0x03, 0xc0, 0x00,  // ------OOOO----------....
    0x01, 0x80, 0x00,  // -------OO-----------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....

    // ASCII: 57346, char width: 16
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x18, 0x18,  // ---OO------OO---
    0x3c, 0x3c,  // --OOOO----OOOO--
    0x7e, 0x7c,  // -OOOOOO--OOOOO--
    0x7f, 0xfc,  // -OOOOOOOOOOOOO--
    0x3f, 0xf8,  // --OOOOOOOOOOO---
    0x1f, 0xf0,  // ---OOOOOOOOO----
    0x0f, 0xe0,  // ----OOOOOOO-----
    0x0f, 0xf0,  // ----OOOOOOOO----
    0x1f, 0xf8,  // ---OOOOOOOOOO---
    0x3f, 0xfc,  // --OOOOOOOOOOOO--
    0x7e, 0xfc,  // -OOOOOO-OOOOOO--
    0x7c, 0x7c,  // -OOOOO---OOOOO--
    0x38, 0x38,  // --OOO-----OOO---
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------

    // ASCII: 57347, char width: 17
    0x00, 0xc0, 0x00,  // --------OO-------.......
    0x01, 0xc0, 0x00,  // -------OOO-------.......
    0x09, 0xc8, 0x00,  // ----O--OOO--O----.......
    0x3d, 0xde, 0x00,  // --OOOO-OOO-OOOO--.......
    0x39, 0xcf, 0x00,  // --OOO--OOO--OOOO-.......
    0x71, 0xc7, 0x00,  // -OOO---OOO---OOO-.......
    0xf1, 0xc7, 0x80,  // OOOO---OOO---OOOO.......
    0xe1, 0xc3, 0x80,  // OOO----OOO----OOO.......
    0xe1, 0xc3, 0x80,  // OOO----OOO----OOO.......
    0xe0, 0xc3, 0x80,  // OOO-----OO----OOO.......
    0xe0, 0x03, 0x80,  // OOO-----------OOO.......
    0xe0, 0x03, 0x80,  // OOO-----------OOO.......
    0x70, 0x07, 0x80,  // -OOO---------OOOO.......
    0x78, 0x07, 0x00,  // -OOOO--------OOO-.......
    0x3c, 0x1e, 0x00,  // --OOOO-----OOOO--.......
    0x3f, 0xfe, 0x00,  // --OOOOOOOOOOOOO--.......
    0x0f, 0xf8, 0x00,  // ----OOOOOOOOO----.......
    0x03, 0xe0, 0x00,  // ------OOOOO------.......
    0x00, 0x00, 0x00,  // -----------------.......
    0x00, 0x00, 0x00,  // -----------------.......

    // ASCII: 57348, char width: 17
    0x00, 0x00, 0x00,  // -----------------.......
    0x01, 0xc0, 0x00,  // -------OOO-------.......
    0x01, 0xc0, 0x00,  // -------OOO-------.......
    0x1b, 0xec, 0x00,  // ---OO-OOOOO-OO---.......
    0x3f, 0xfe, 0x00,  // --OOOOOOOOOOOOO--.......
    0x3f, 0xfe, 0x00,  // --OOOOOOOOOOOOO--.......
    0x3f, 0xfc, 0x00,  // --OOOOOOOOOOOO---.......
    0x3e, 0x3c, 0x00,  // --OOOOO---OOOO---.......
    0xfc, 0x1f, 0x80,  // OOOOOO-----OOOOOO.......
    0xfc, 0x1f, 0x80,  // OOOOOO-----OOOOOO.......
    0xfc, 0x1f, 0x80,  // OOOOOO-----OOOOOO.......
    0xfc, 0x1f, 0x80,  // OOOOOO-----OOOOOO.......
    0x1e, 0x3c, 0x00,  // ---OOOO---OOOO---.......
    0x1f, 0xfc, 0x00,  // ---OOOOOOOOOOO---.......
    0x3f, 0xfe, 0x00,  // --OOOOOOOOOOOOO--.......
    0x3f, 0xfe, 0x00,  // --OOOOOOOOOOOOO--.......
    0x1b, 0xec, 0x00,  // ---OO-OOOOO-OO---.......
    0x01, 0xc0, 0x00,  // -------OOO-------.......
    0x01, 0xc0, 0x00,  // -------OOO-------.......
    0x00, 0x00, 0x00,  // -----------------.......

    // ASCII: 57349, char width: 19
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0xe7, 0x00,  // --------OOO--OOO---.....
    0x01, 0xf7, 0x00,  // -------OOOOO-OOO---.....
    0x03, 0x1f, 0x00,  // ------OO---OOOOO---.....
    0x0e, 0xef, 0x00,  // ----OOO-OOO-OOOO---.....
    0x1d, 0xf7, 0x00,  // ---OOO-OOOOO-OOO---.....
    0x3b, 0xfb, 0x80,  // --OOO-OOOOOOO-OOO--.....
    0x77, 0xfd, 0xc0,  // -OOO-OOOOOOOOO-OOO-.....
    0x7f, 0xff, 0x40,  // -OOOOOOOOOOOOOOO-O-.....
    0x1f, 0xff, 0x00,  // ---OOOOOOOOOOOOO---.....
    0x1f, 0xff, 0x00,  // ---OOOOOOOOOOOOO---.....
    0x1f, 0x1f, 0x00,  // ---OOOOO---OOOOO---.....
    0x1f, 0x1f, 0x00,  // ---OOOOO---OOOOO---.....
    0x1f, 0x1f, 0x00,  // ---OOOOO---OOOOO---.....
    0x1f, 0x1f, 0x00,  // ---OOOOO---OOOOO---.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....

    // ASCII: 57350, char width: 17
    0x00, 0x00, 0x00,  // -----------------.......
    0x01, 0xc0, 0x00,  // -------OOO-------.......
    0x0f, 0xf8, 0x80,  // ----OOOOOOOOO---O.......
    0x1f, 0xff, 0x80,  // ---OOOOOOOOOOOOOO.......
    0x3e, 0x3f, 0x80,  // --OOOOO---OOOOOOO.......
    0x78, 0x0f, 0x80,  // -OOOO-------OOOOO.......
    0x70, 0x0f, 0x80,  // -OOO--------OOOOO.......
    0xe0, 0x1f, 0x80,  // OOO--------OOOOOO.......
    0x00, 0x00, 0x00,  // -----------------.......
    0x00, 0x00, 0x00,  // -----------------.......
    0x00, 0x00, 0x00,  // -----------------.......
    0xfc, 0x03, 0x80,  // OOOOOO--------OOO.......
    0xfc, 0x07, 0x80,  // OOOOOO-------OOOO.......
    0xf8, 0x07, 0x00,  // OOOOO--------OOO-.......
    0xfc, 0x1f, 0x00,  // OOOOOO-----OOOOO-.......
    0xff, 0xfe, 0x00,  // OOOOOOOOOOOOOOO--.......
    0xcf, 0xf8, 0x00,  // OO--OOOOOOOOO----.......
    0x03, 0xf0, 0x00,  // ------OOOOOO-----.......
    0x00, 0x00, 0x00,  // -----------------.......
    0x00, 0x00, 0x00,  // -----------------.......

    // ASCII: 57351, char width: 14
    0x00, 0x30,  // ----------OO--..
    0x00, 0x78,  // ---------OOOO-..
    0x00, 0xf8,  // --------OOOOO-..
    0x01, 0xf8,  // -------OOOOOO-..
    0x03, 0xf0,  // ------OOOOOO--..
    0x07, 0xe0,  // -----OOOOOO---..
    0x0f, 0xc0,  // ----OOOOOO----..
    0x1f, 0x80,  // ---OOOOOO-----..
    0x3f, 0x00,  // --OOOOOO------..
    0x3f, 0x00,  // --OOOOOO------..
    0x1f, 0x80,  // ---OOOOOO-----..
    0x0f, 0xc0,  // ----OOOOOO----..
    0x07, 0xe0,  // -----OOOOOO---..
    0x03, 0xf0,  // ------OOOOOO--..
    0x01, 0xf8,  // -------OOOOOO-..
    0x00, 0xf8,  // --------OOOOO-..
    0x00, 0x78,  // ---------OOOO-..
    0x00, 0x30,  // ----------OO--..
    0x00, 0x00,  // --------------..
    0x00, 0x00,  // --------------..

    // ASCII: 57352, char width: 14
    0x10, 0x00,  // ---O----------..
    0x38, 0x00,  // --OOO---------..
    0x7c, 0x00,  // -OOOOO--------..
    0x3e, 0x00,  // --OOOOO-------..
    0x1f, 0x00,  // ---OOOOO------..
    0x0f, 0x80,  // ----OOOOO-----..
    0x07, 0xc0,  // -----OOOOO----..
    0x03, 0xe0,  // ------OOOOO---..
    0x01, 0xf0,  // -------OOOOO--..
    0x01, 0xf0,  // -------OOOOO--..
    0x03, 0xe0,  // ------OOOOO---..
    0x07, 0xc0,  // -----OOOOO----..
    0x0f, 0x80,  // ----OOOOO-----..
    0x1f, 0x00,  // ---OOOOO------..
    0x3e, 0x00,  // --OOOOO-------..
    0x7c, 0x00,  // -OOOOO--------..
    0x38, 0x00,  // --OOO---------..
    0x10, 0x00,  // ---O----------..
    0x00, 0x00,  // --------------..
    0x00, 0x00,  // --------------..

    // ASCII: 57353, char width: 16
    0x00, 0x00,  // ----------------
    0x03, 0x80,  // ------OOO-------
    0x03, 0xc0,  // ------OOOO------
    0x03, 0xc0,  // ------OOOO------
    0x03, 0xc0,  // ------OOOO------
    0x03, 0xc0,  // ------OOOO------
    0x03, 0xc0,  // ------OOOO------
    0xff, 0xfe,  // OOOOOOOOOOOOOOO-
    0xff, 0xff,  // OOOOOOOOOOOOOOOO
    0xff, 0xff,  // OOOOOOOOOOOOOOOO
    0xff, 0xff,  // OOOOOOOOOOOOOOOO
    0x07, 0xc0,  // -----OOOOO------
    0x03, 0xc0,  // ------OOOO------
    0x03, 0xc0,  // ------OOOO------
    0x03, 0xc0,  // ------OOOO------
    0x03, 0xc0,  // ------OOOO------
    0x03, 0xc0,  // ------OOOO------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------

    // ASCII: 57354, char width: 16
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0xff, 0xfe,  // OOOOOOOOOOOOOOO-
    0xff, 0xff,  // OOOOOOOOOOOOOOOO
    0xff, 0xff,  // OOOOOOOOOOOOOOOO
    0xff, 0xff,  // OOOOOOOOOOOOOOOO
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------

    // ASCII: 57355, char width: 20
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x60, 0x00,  // ---------OO---------....
    0x00, 0xf0, 0x00,  // --------OOOO--------....
    0x01, 0xf8, 0x00,  // -------OOOOOO-------....
    0x03, 0xfc, 0x00,  // ------OOOOOOOO------....
    0x07, 0xfe, 0x00,  // -----OOOOOOOOOO-----....
    0x0f, 0xff, 0x00,  // ----OOOOOOOOOOOO----....
    0x1f, 0x9f, 0x80,  // ---OOOOOO--OOOOOO---....
    0x3f, 0x0f, 0xc0,  // --OOOOOO----OOOOOO--....
    0x7e, 0x07, 0xe0,  // -OOOOOO------OOOOOO-....
    0x7c, 0x03, 0xe0,  // -OOOOO--------OOOOO-....
    0x38, 0x01, 0xc0,  // --OOO----------OOO--....
    0x10, 0x00, 0x80,  // ---O------------O---....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....

    // ASCII: 57356, char width: 20
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x18, 0x01, 0x80,  // ---OO----------OO---....
    0x3c, 0x03, 0xc0,  // --OOOO--------OOOO--....
    0x7e, 0x07, 0xe0,  // -OOOOOO------OOOOOO-....
    0x3f, 0x0f, 0xc0,  // --OOOOOO----OOOOOO--....
    0x1f, 0x9f, 0x80,  // ---OOOOOO--OOOOOO---....
    0x0f, 0xff, 0x00,  // ----OOOOOOOOOOOO----....
    0x07, 0xfe, 0x00,  // -----OOOOOOOOOO-----....
    0x03, 0xfc, 0x00,  // ------OOOOOOOO------....
    0x01, 0xf8, 0x00,  // -------OOOOOO-------....
    0x00, 0xf0, 0x00,  // --------OOOO--------....
    0x00, 0x60, 0x00,  // ---------OO---------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....

    // ASCII: 57357, char width: 21
    0x00, 0x00, 0x00,  // ---------------------...
    0x00, 0x00, 0x00,  // ---------------------...
    0x00, 0x00, 0x00,  // ---------------------...
    0x00, 0x00, 0x00,  // ---------------------...
    0xff, 0xff, 0xf8,  // OOOOOOOOOOOOOOOOOOOOO...
    0xc0, 0x00, 0x18,  // OO-----------------OO...
    0x80, 0x00, 0x08,  // O-------------------O...
    0x92, 0xdb, 0x48,  // O--O--O-OO-OO-OO-O--O...
    0x80, 0x00, 0x48,  // O----------------O--O...
    0x80, 0x00, 0x48,  // O----------------O--O...
    0x9d, 0x24, 0xc8,  // O--OOO-O--O--O--OO--O...
    0x80, 0x00, 0x08,  // O-------------------O...
    0x80, 0x00, 0x08,  // O-------------------O...
    0x93, 0xff, 0x48,  // O--O--OOOOOOOOOO-O--O...
    0x80, 0x00, 0x08,  // O-------------------O...
    0xc0, 0x00, 0x18,  // OO-----------------OO...
    0xff, 0xff, 0xf8,  // OOOOOOOOOOOOOOOOOOOOO...
    0x00, 0x00, 0x00,  // ---------------------...
    0x00, 0x00, 0x00,  // ---------------------...
    0x00, 0x00, 0x00,  // ---------------------...
};

/*Store the start index of the glyphs in the bitmap array*/
static const uint32_t symbol_20_basic_map[] = 
{
     0, 60, 120, 160, 220, 280, 340, 400, 
    440, 480, 520, 560, 620, 680, 
};

/*Store the width (column count) of each glyph*/
static const uint8_t symbol_20_basic_width[] = 
{
    20, 20, 16, 17, 17, 19, 17, 14, 
    14, 16, 16, 20, 20, 21, 
};

font_t font_symbol_20_basic = 
{
#if TXT_UTF8 == 0
    192,        /*First letter's unicode */
    207,        /*Last letter's unicode */
#else
    57344,        /*First letter's unicode */
    57358,        /*Last letter's unicode */
#endif
    20,        /*Letters height (rows) */
    symbol_20_basic_bitmap,    /*Glyph's bitmap*/
    symbol_20_basic_map,    /*Glyph start indexes in the bitmap*/
    symbol_20_basic_width,    /*Glyph widths (columns)*/
};

#endif /*SYMBOL_20_BASIC_H*/