#ifndef DESKTOP_H
#define DESKTOP_H

#define CLOSE_BUTTON_SIZE  10
#define CLOSE_BUTTON_MARGIN 2
#define CLOSE_BUTTON_BG    VGA_RED      // Use a red background for the button
#define CLOSE_BUTTON_XCOLOR VGA_WHITE   // Use white for the “X”

#include "../kernel/types.h"
#include "mouse.h"

typedef struct {
    int16_t x, y;
    uint16_t width, height;
    bool dragging;
    int16_t drag_offset_x, drag_offset_y;
    const char* title;  // New title field
    bool visible;
} window_t;

// Function prototypes
void desktop_init(void);
void desktop_run(void);
void desktop_font_test(void);
void desktop_draw_window(window_t *win);

// Add this after the function prototypes:
extern window_t current_window;

#endif
