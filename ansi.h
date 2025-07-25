#ifndef ANSI_CODES_H
#define ANSI_CODES_H

#include <stdio.h>

/* ==================== COLOR MACROS ==================== */

// Text Colors (Foreground)
#define BLACK           "\033[30m"
#define RED             "\033[31m"
#define GREEN           "\033[32m"
#define YELLOW          "\033[33m"
#define BLUE            "\033[34m"
#define MAGENTA         "\033[35m"
#define CYAN            "\033[36m"
#define WHITE           "\033[37m"
#define BRIGHT_BLACK    "\033[90m"
#define BRIGHT_RED      "\033[91m"
#define BRIGHT_GREEN    "\033[92m"
#define BRIGHT_YELLOW   "\033[93m"
#define BRIGHT_BLUE     "\033[94m"
#define BRIGHT_MAGENTA  "\033[95m"
#define BRIGHT_CYAN     "\033[96m"
#define BRIGHT_WHITE    "\033[97m"

// Background Colors
#define BG_BLACK        "\033[40m"
#define BG_RED          "\033[41m"
#define BG_GREEN        "\033[42m"
#define BG_YELLOW       "\033[43m"
#define BG_BLUE         "\033[44m"
#define BG_MAGENTA      "\033[45m"
#define BG_CYAN         "\033[46m"
#define BG_WHITE        "\033[47m"
#define BG_BRIGHT_BLACK "\033[100m"
#define BG_BRIGHT_RED   "\033[101m"
#define BG_BRIGHT_GREEN "\033[102m"
#define BG_BRIGHT_YELLOW "\033[103m"
#define BG_BRIGHT_BLUE  "\033[104m"
#define BG_BRIGHT_MAGENTA "\033[105m"
#define BG_BRIGHT_CYAN  "\033[106m"
#define BG_BRIGHT_WHITE "\033[107m"

// Text Styles
#define RESET           "\033[0m"
#define BOLD            "\033[1m"
#define DIM             "\033[2m"
#define ITALIC          "\033[3m"
#define UNDERLINE       "\033[4m"
#define BLINK           "\033[5m"
#define REVERSE         "\033[7m"
#define STRIKETHROUGH   "\033[9m"
#define BOLD_OFF        "\033[22m"
#define ITALIC_OFF      "\033[23m"
#define UNDERLINE_OFF   "\033[24m"
#define BLINK_OFF       "\033[25m"
#define REVERSE_OFF     "\033[27m"
#define STRIKETHROUGH_OFF "\033[29m"

// Combined Styles and Colors
#define BOLD_BLACK      "\033[1;30m"
#define BOLD_RED        "\033[1;31m"
#define BOLD_GREEN      "\033[1;32m"
#define BOLD_YELLOW     "\033[1;33m"
#define BOLD_BLUE       "\033[1;34m"
#define BOLD_MAGENTA    "\033[1;35m"
#define BOLD_CYAN       "\033[1;36m"
#define BOLD_WHITE      "\033[1;37m"

#define DIM_BLACK       "\033[2;30m"
#define DIM_RED         "\033[2;31m"
#define DIM_GREEN       "\033[2;32m"
#define DIM_YELLOW      "\033[2;33m"
#define DIM_BLUE        "\033[2;34m"
#define DIM_MAGENTA     "\033[2;35m"
#define DIM_CYAN        "\033[2;36m"
#define DIM_WHITE       "\033[2;37m"

#define UNDERLINE_BLACK "\033[4;30m"
#define UNDERLINE_RED   "\033[4;31m"
#define UNDERLINE_GREEN "\033[4;32m"
#define UNDERLINE_YELLOW "\033[4;33m"
#define UNDERLINE_BLUE  "\033[4;34m"
#define UNDERLINE_MAGENTA "\033[4;35m"
#define UNDERLINE_CYAN  "\033[4;36m"
#define UNDERLINE_WHITE "\033[4;37m"

/* ==================== CURSOR CONTROL MACROS ==================== */

// Cursor Movement
#define CURSOR_UP(n)          printf("\033[%dA", n)
#define CURSOR_DOWN(n)        printf("\033[%dB", n)
#define CURSOR_RIGHT(n)       printf("\033[%dC", n)
#define CURSOR_LEFT(n)        printf("\033[%dD", n)
#define CURSOR_NEXT_LINE(n)   printf("\033[%dE", n)
#define CURSOR_PREV_LINE(n)   printf("\033[%dF", n)
#define CURSOR_COLUMN(col)    printf("\033[%dG", col)
#define CURSOR_POSITION(row,col) printf("\033[%d;%dH", row, col)

// Cursor Position Saving/Restoring
#define SAVE_CURSOR           printf("\033[s")
#define RESTORE_CURSOR        printf("\033[u")

// Cursor Visibility
#define HIDE_CURSOR           printf("\033[?25l")
#define SHOW_CURSOR           printf("\033[?25h")

// Screen Clearing
#define CLEAR_SCREEN          printf("\033[2J")
#define CLEAR_SCREEN_HOME     printf("\033[2J\033[H")
#define CLEAR_TO_END          printf("\033[0J")
#define CLEAR_TO_BEGINNING    printf("\033[1J")

// Line Clearing
#define CLEAR_LINE            printf("\033[2K")
#define CLEAR_TO_END_LINE     printf("\033[0K")
#define CLEAR_TO_BEGIN_LINE   printf("\033[1K")

// Scrolling
#define SCROLL_UP(n)          printf("\033[%dS", n)
#define SCROLL_DOWN(n)        printf("\033[%dT", n)

// Line Editing
#define INSERT_LINE           printf("\033[L")
#define DELETE_LINE           printf("\033[M")

// Terminal Bell
#define BELL                  printf("\a")

/* ==================== FUNCTION-LIKE MACROS ==================== */

// Color printing functions
#define PRINT_BLACK(str)      printf(BLACK "%s" RESET, str)
#define PRINT_RED(str)        printf(RED "%s" RESET, str)
#define PRINT_GREEN(str)      printf(GREEN "%s" RESET, str)
#define PRINT_YELLOW(str)     printf(YELLOW "%s" RESET, str)
#define PRINT_BLUE(str)       printf(BLUE "%s" RESET, str)
#define PRINT_MAGENTA(str)    printf(MAGENTA "%s" RESET, str)
#define PRINT_CYAN(str)       printf(CYAN "%s" RESET, str)
#define PRINT_WHITE(str)      printf(WHITE "%s" RESET, str)

#define PRINT_BOLD_RED(str)   printf(BOLD_RED "%s" RESET, str)
#define PRINT_BOLD_GREEN(str) printf(BOLD_GREEN "%s" RESET, str)
#define PRINT_BOLD_BLUE(str)  printf(BOLD_BLUE "%s" RESET, str)

// Background printing functions
#define PRINT_ON_RED(str)     printf(BG_RED "%s" RESET, str)
#define PRINT_ON_GREEN(str)   printf(BG_GREEN "%s" RESET, str)
#define PRINT_ON_BLUE(str)    printf(BG_BLUE "%s" RESET, str)
#define PRINT_ON_YELLOW(str)  printf(BG_YELLOW "%s" RESET, str)

// Combined styling
#define PRINT_BOLD_UNDERLINE_RED(str) printf(BOLD UNDERLINE RED "%s" RESET, str)

/* ==================== 256 COLOR SUPPORT ==================== */

// 256 Color Foreground
#define FG_256(color)         printf("\033[38;5;%dm", color)
#define BG_256(color)         printf("\033[48;5;%dm", color)

// RGB Color Foreground
#define FG_RGB(r,g,b)         printf("\033[38;2;%d;%d;%dm", r, g, b)
#define BG_RGB(r,g,b)         printf("\033[48;2;%d;%d;%dm", r, g, b)

// Reset to default colors
#define RESET_FG              printf("\033[39m")
#define RESET_BG              printf("\033[49m")

/* ==================== UTILITY MACROS ==================== */

// Home position
#define CURSOR_HOME           printf("\033[H")

// Query cursor position (response: ESC[row;colR)
#define QUERY_CURSOR          printf("\033[6n")

// Set title
#define SET_TITLE(title)      printf("\033]0;%s\007", title)

// Reset all attributes
#define RESET_ALL             printf("\033[0m")

#endif // ANSI_CODES_H
