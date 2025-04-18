
#include "shared-bindings/displayio/Bitmap.h"
#include "shared-bindings/displayio/Palette.h"
#include "supervisor/shared/display.h"

#if CIRCUITPY_REPL_LOGO
const uint32_t blinka_bitmap_data[28] = {
    0x11010000, 0x00000000,
    0x53110000, 0x00000010,
    0x56110000, 0x00000011,
    0x11110000, 0x00000014,
    0x12010000, 0x00002000,
    0x11000000, 0x00000030,
    0x11000000, 0x00000020,
    0x44110100, 0x00000013,
    0x24232300, 0x00000012,
    0x44141101, 0x00000013,
    0x34323232, 0x00000112,
    0x44111111, 0x00001044
};
const displayio_bitmap_t blinka_bitmap = {
    .base = {.type = &displayio_bitmap_type },
    .width = 12,
    .height = 12,
    .data = (uint32_t*) blinka_bitmap_data,
    .stride = 2,
    .bits_per_value = 4,
    .x_shift = 1,
    .x_mask = 0x01,
    .bitmask = 0x0f,
    .read_only = true
};

_displayio_color_t blinka_colors[7] = {
    {
        .rgb888 = 0x000000,
        .transparent = true
    },
    { // Purple
        .rgb888 = 0x8428bc
    },
    { // Pink
        .rgb888 = 0xff89bc
    },
    { // Light blue
        .rgb888 = 0x7beffe
    },
    { // Dark purple
        .rgb888 = 0x51395f
    },
    { // White
        .rgb888 = 0xffffff
    },
    { // Dark Blue
        .rgb888 = 0x0736a0
    },
};

displayio_palette_t blinka_palette = {
    .base = {.type = &displayio_palette_type },
    .colors = blinka_colors,
    .color_count = 7,
    .needs_refresh = false
};

displayio_tilegrid_t supervisor_blinka_sprite = {
    .base = {.type = &displayio_tilegrid_type },
    .bitmap = (displayio_bitmap_t*) &blinka_bitmap,
    .pixel_shader = &blinka_palette,
    .x = 0,
    .y = 0,
    .pixel_width = 12,
    .pixel_height = 12,
    .bitmap_width_in_tiles = 1,
    .width_in_tiles = 1,
    .height_in_tiles = 1,
    .tile_width = 12,
    .tile_height = 12,
    .top_left_x = 12,
    .top_left_y = 12,
    .tiles = 0,
    .partial_change = false,
    .full_change = false,
    .hidden = false,
    .hidden_by_parent = false,
    .moved = false,
    .inline_tiles = true,
    .in_group = true
};
#endif
#if CIRCUITPY_TERMINALIO
_displayio_color_t terminal_colors[2] = {
    {
        .rgb888 = 0x000000
    },
    {
        .rgb888 = 0xffffff
    },
};

displayio_palette_t supervisor_terminal_color = {
    .base = {.type = &displayio_palette_type },
    .colors = terminal_colors,
    .color_count = 2,
    .needs_refresh = false
};
displayio_tilegrid_t supervisor_terminal_scroll_area_text_grid = {
    .base = { .type = &displayio_tilegrid_type },
    .bitmap = (displayio_bitmap_t*) &supervisor_terminal_font_bitmap,
    .pixel_shader = &supervisor_terminal_color,
    .x = 0,
    .y = 0,
    .pixel_width = 6,
    .pixel_height = 12,
    .bitmap_width_in_tiles = 95,
    .tiles_in_bitmap = 95,
    .width_in_tiles = 1,
    .height_in_tiles = 1,
    .tile_width = 6,
    .tile_height = 12,
    .tiles = NULL,
    .partial_change = false,
    .full_change = false,
    .hidden = false,
    .hidden_by_parent = false,
    .moved = false,
    .inline_tiles = false,
    .in_group = true
};
displayio_tilegrid_t supervisor_terminal_status_bar_text_grid = {
    .base = { .type = &displayio_tilegrid_type },
    .bitmap = (displayio_bitmap_t*) &supervisor_terminal_font_bitmap,
    .pixel_shader = &supervisor_terminal_color,
    .x = 0,
    .y = 0,
    .pixel_width = 6,
    .pixel_height = 12,
    .bitmap_width_in_tiles = 95,
    .tiles_in_bitmap = 95,
    .width_in_tiles = 1,
    .height_in_tiles = 1,
    .tile_width = 6,
    .tile_height = 12,
    .tiles = NULL,
    .partial_change = false,
    .full_change = false,
    .hidden = false,
    .hidden_by_parent = false,
    .moved = false,
    .inline_tiles = false,
    .in_group = true
};
const uint32_t font_bitmap_data[216] = {
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000500, 0x00000800, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00020000, 0x00000020, 0x80000000, 0x00000080, 0x00000000, 0x00000000, 0x80040000, 
0x21148500, 0x00110822, 0x02000000, 0x0b1c8770, 0xc0713ee7, 0x1c000000, 0xe31ccf71, 0xc3899cef, 0x9c2882a2, 0xfa1ccff1, 0x2f8aa228, 0x00c5419c, 0x08000800, 0x80808001, 0x00006090, 0x20000000, 0x00000000, 0x808a2106, 
0x72148500, 0x802008a5, 0x02000000, 0x1aa28889, 0x208a0208, 0x22040800, 0x92a2288a, 0x81882208, 0xa2688324, 0x22a2288a, 0x208aa228, 0x80484090, 0x08000800, 0x00800002, 0x00002010, 0x20000000, 0x00000000, 0x00492008, 
0xa93e8000, 0x45400045, 0x04000008, 0x2a828898, 0x228a0208, 0x22e21308, 0x8aa0289a, 0x81882008, 0xa2ac8228, 0x22a0288a, 0x4151a228, 0x00402010, 0x791ccf01, 0x81f11ec7, 0x1ccf2392, 0x729eebf1, 0x2f8aa228, 0x00402088, 
0xa0148000, 0x42400042, 0x04000008, 0x4b8c80a8, 0x227204cf, 0x04012008, 0x8b202faa, 0x81f820cf, 0xa2aa8230, 0x229c288a, 0x42212225, 0x00402010, 0x8aa22800, 0x80882222, 0xa2a82294, 0x22202c8a, 0x2152a228, 0x00202010, 
0x70148000, 0x4f408086, 0x08e003be, 0x880281c8, 0xe0898428, 0x88004000, 0x8aa0e8ab, 0x81882e08, 0xa2298230, 0x22022ff2, 0x84202a25, 0x00401010, 0x8ba0e801, 0x808822e2, 0xa2a82298, 0x221c288a, 0x22222a25, 0x00402008, 
0x283e0000, 0x424000a9, 0x08000008, 0xf8028288, 0x20888828, 0x00e12300, 0x8aa0289a, 0x89882208, 0xa2288228, 0x22022a82, 0x88502a25, 0x00401010, 0x8aa02802, 0x80882202, 0xa2a82298, 0x2202288a, 0x24222a25, 0x00402008, 
0xa9148000, 0x85200059, 0x10022008, 0x0a228488, 0x22888828, 0x08021008, 0x92a22882, 0x89882208, 0xa2288224, 0x2222a982, 0x88883622, 0x00400810, 0x8aa22802, 0x80882202, 0xa2a82294, 0x2202288a, 0x28522a22, 0x00402008, 
0x71148000, 0x00118026, 0x10022000, 0x099ccf71, 0xc27108c7, 0x08040808, 0xe31c2f7a, 0xc6891ce8, 0x9c28fa22, 0x219cc881, 0x8f8822c2, 0x00c0099c, 0x791cef01, 0xc0891ee2, 0x9ca87292, 0x193ce8f1, 0xef891ce2, 0x00802186, 
0x20000000, 0x00000000, 0x00004000, 0x00000000, 0x00000000, 0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00002000, 0x00000000, 0x3e000000, 0x00000000, 0x04000200, 0x00000080, 0x00002080, 0x20000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x03001c00, 0x00000000, 0x00002080, 0xc0010000, 0x00000000, 
};
displayio_bitmap_t supervisor_terminal_font_bitmap = {
    .base = {.type = &displayio_bitmap_type },
    .width = 570,
    .height = 12,
    .data = (uint32_t*) font_bitmap_data,
    .stride = 18.0,
    .bits_per_value = 1,
    .x_shift = 3,
    .x_mask = 0x07,
    .bitmask = 0x01,
    .read_only = true
};
const fontio_builtinfont_t supervisor_terminal_font = {
    .base = {.type = &fontio_builtinfont_type },
    .bitmap = &supervisor_terminal_font_bitmap,
    .width = 6,
    .height = 12,
    .unicode_characters = (const uint8_t*) "",
    .unicode_characters_len = 0
};
terminalio_terminal_obj_t supervisor_terminal = {
    .base = { .type = &terminalio_terminal_type },
    .font = MP_OBJ_FROM_PTR(&supervisor_terminal_font),
    .cursor_x = 0,
    .cursor_y = 0,
    .scroll_area = NULL,
    .status_bar = NULL
};

#endif
