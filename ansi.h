#ifndef ANSI_CODES_H
#define ANSI_CODES_H

#include <stdio.h>

/* ==================== BASIC FORMATTING ==================== */

// Reset
#define RESET           "\033[0m"

// Text Styles
#define BOLD            "\033[1m"
#define DIM             "\033[2m"
#define ITALIC          "\033[3m"
#define UNDERLINE       "\033[4m"
#define BLINK           "\033[5m"
#define RAPID_BLINK     "\033[6m"
#define REVERSE         "\033[7m"
#define CONCEAL         "\033[8m"
#define STRIKETHROUGH   "\033[9m"

// Disable Styles
#define BOLD_OFF        "\033[22m"
#define DIM_OFF         "\033[22m"
#define ITALIC_OFF      "\033[23m"
#define UNDERLINE_OFF   "\033[24m"
#define BLINK_OFF       "\033[25m"
#define RAPID_BLINK_OFF "\033[25m"
#define REVERSE_OFF     "\033[27m"
#define CONCEAL_OFF     "\033[28m"
#define STRIKETHROUGH_OFF "\033[29m"

/* ==================== STANDARD COLORS (3/4 BIT) ==================== */

// Foreground Colors
#define BLACK           "\033[30m"
#define RED             "\033[31m"
#define GREEN           "\033[32m"
#define YELLOW          "\033[33m"
#define BLUE            "\033[34m"
#define MAGENTA         "\033[35m"
#define CYAN            "\033[36m"
#define WHITE           "\033[37m"
#define DEFAULT_FG      "\033[39m"

// Bright Foreground Colors
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
#define DEFAULT_BG      "\033[49m"

// Bright Background Colors
#define BG_BRIGHT_BLACK "\033[100m"
#define BG_BRIGHT_RED   "\033[101m"
#define BG_BRIGHT_GREEN "\033[102m"
#define BG_BRIGHT_YELLOW "\033[103m"
#define BG_BRIGHT_BLUE  "\033[104m"
#define BG_BRIGHT_MAGENTA "\033[105m"
#define BG_BRIGHT_CYAN  "\033[106m"
#define BG_BRIGHT_WHITE "\033[107m"

/* ==================== 8-BIT COLOR (256 COLORS) ==================== */

// Set foreground color (0-255)
#define FG_256(color)   "\033[38;5;" #color "m"

// Set background color (0-255)
#define BG_256(color)   "\033[48;5;" #color "m"

#define SET_FG_256(color)    printf("\033[38;5;%dm", color)
#define SET_BG_256(color)    printf("\033[48;5;%dm", color)

/* ==================== 24-BIT COLOR (TRUE COLOR) ==================== */

// RGB foreground color
#define FG_RGB(r,g,b)   "\033[38;2;" #r ";" #g ";" #b "m"

// RGB background color
#define BG_RGB(r,g,b)   "\033[48;2;" #r ";" #g ";" #b "m"

#define SET_FG_RGB(r,g,b)    printf("\033[38;2;%d;%d;%dm", r, g, b)
#define SET_BG_RGB(r,g,b)    printf("\033[48;2;%d;%d;%dm", r, g, b)

/* ==================== CURSOR MOVEMENT ==================== */

// Absolute positioning
#define ANSI_CURSOR_HOME    "\033[H"
#define CURSOR_POS(row,col) "\033[" #row ";" #col "H"

// Relative movement
#define CURSOR_UP(n)    "\033[" #n "A"
#define CURSOR_DOWN(n)  "\033[" #n "B"
#define CURSOR_RIGHT(n) "\033[" #n "C"
#define CURSOR_LEFT(n)  "\033[" #n "D"

// Line positioning
#define CURSOR_NEXT_LINE(n) "\033[" #n "E"
#define CURSOR_PREV_LINE(n) "\033[" #n "F"
#define CURSOR_COLUMN(col)  "\033[" #col "G"

// Function-like cursor movement
#define MOVE_CURSOR_UP(n)        printf("\033[%dA", n)
#define MOVE_CURSOR_DOWN(n)      printf("\033[%dB", n)
#define MOVE_CURSOR_RIGHT(n)     printf("\033[%dC", n)
#define MOVE_CURSOR_LEFT(n)      printf("\033[%dD", n)
#define MOVE_CURSOR_TO(row,col)  printf("\033[%d;%dH", row, col)
#define MOVE_CURSOR_COLUMN(col)  printf("\033[%dG", col)
#define MOVE_CURSOR_NEXT_LINE(n) printf("\033[%dE", n)
#define MOVE_CURSOR_PREV_LINE(n) printf("\033[%dF", n)

/* ==================== CURSOR VISIBILITY ==================== */

#define ANSI_HIDE_CURSOR     "\033[?25l"
#define ANSI_SHOW_CURSOR     "\033[?25h"
#define ANSI_SAVE_CURSOR     "\033[s"
#define ANSI_RESTORE_CURSOR  "\033[u"
#define ANSI_QUERY_CURSOR    "\033[6n"

#define HIDE_CURSOR          printf("\033[?25l")
#define SHOW_CURSOR          printf("\033[?25h")
#define SAVE_CURSOR          printf("\033[s")
#define RESTORE_CURSOR       printf("\033[u")
#define QUERY_CURSOR         printf("\033[6n")

/* ==================== SCREEN AND LINE CLEARING ==================== */

#define ANSI_CLEAR_SCREEN    "\033[2J"
#define ANSI_CLEAR_TO_END    "\033[0J"
#define ANSI_CLEAR_TO_BEGIN  "\033[1J"
#define ANSI_CLEAR_ALL       "\033[3J"
#define ANSI_CLEAR_LINE      "\033[2K"
#define ANSI_CLEAR_LINE_END  "\033[0K"
#define ANSI_CLEAR_LINE_BEGIN "\033[1K"

#define CLEAR_SCREEN         printf("\033[2J")
#define CLEAR_TO_END         printf("\033[0J")
#define CLEAR_TO_BEGIN       printf("\033[1J")
#define CLEAR_ALL            printf("\033[3J")
#define CLEAR_LINE           printf("\033[2K")
#define CLEAR_LINE_END       printf("\033[0K")
#define CLEAR_LINE_BEGIN     printf("\033[1K")

/* ==================== SCROLLING ==================== */

#define ANSI_SCROLL_UP(n)    "\033[" #n "S"
#define ANSI_SCROLL_DOWN(n)  "\033[" #n "T"

#define SCROLL_UP(n)         printf("\033[%dS", n)
#define SCROLL_DOWN(n)       printf("\033[%dT", n)

/* ==================== LINE EDITING ==================== */

#define ANSI_INSERT_LINES(n) "\033[" #n "L"
#define ANSI_DELETE_LINES(n) "\033[" #n "M"
#define ANSI_INSERT_CHARS(n) "\033[" #n "@"
#define ANSI_DELETE_CHARS(n) "\033[" #n "P"
#define ANSI_ERASE_CHARS(n)  "\033[" #n "X"

#define INSERT_LINES(n)      printf("\033[%dL", n)
#define DELETE_LINES(n)      printf("\033[%dM", n)
#define INSERT_CHARS(n)      printf("\033[%d@", n)
#define DELETE_CHARS(n)      printf("\033[%dP", n)
#define ERASE_CHARS(n)       printf("\033[%dX", n)

/* ==================== TAB CONTROL ==================== */

#define ANSI_SET_TAB         "\033[H"
#define ANSI_CLEAR_TAB       "\033[g"
#define ANSI_CLEAR_ALL_TABS  "\033[3g"

#define SET_TAB              printf("\033[H")
#define CLEAR_TAB            printf("\033[g")
#define CLEAR_ALL_TABS       printf("\033[3g")

/* ==================== TERMINAL MODES ==================== */

#define ANSI_ENABLE_ALT_BUFFER   "\033[?1049h"
#define ANSI_DISABLE_ALT_BUFFER  "\033[?1049l"
#define ANSI_ENABLE_MOUSE        "\033[?1000h"
#define ANSI_DISABLE_MOUSE       "\033[?1000l"
#define ANSI_ENABLE_BRACKETED_PASTE "\033[?2004h"
#define ANSI_DISABLE_BRACKETED_PASTE "\033[?2004l"

#define ENABLE_ALT_BUFFER        printf("\033[?1049h")
#define DISABLE_ALT_BUFFER       printf("\033[?1049l")
#define ENABLE_MOUSE             printf("\033[?1000h")
#define DISABLE_MOUSE            printf("\033[?1000l")
#define ENABLE_BRACKETED_PASTE   printf("\033[?2004h")
#define DISABLE_BRACKETED_PASTE  printf("\033[?2004l")

/* ==================== WINDOW TITLE ==================== */

#define TITLE(title)    "\033]0;" title "\007"
#define ICON_TITLE(title) "\033]1;" title "\007"
#define WINDOW_TITLE(title) "\033]2;" title "\007"

#define SET_TITLE(title)     printf("\033]0;%s\007", title)
#define SET_ICON_TITLE(title) printf("\033]1;%s\007", title)
#define SET_WINDOW_TITLE(title) printf("\033]2;%s\007", title)

/* ==================== MISCELLANEOUS ==================== */

#define ANSI_BELL            "\007"
#define ANSI_BACKSPACE       "\010"
#define ANSI_TAB             "\011"
#define ANSI_LINE_FEED       "\012"
#define ANSI_CARRIAGE_RETURN "\015"
#define ESCAPE               "\033"

#define BELL                 printf("\a")
#define BACKSPACE            printf("\b")
#define TAB                  printf("\t")
#define NEWLINE              printf("\n")
#define CARRIAGE_RETURN      printf("\r")

/* ==================== DEVICE STATUS ==================== */

#define DEVICE_STATUS   "\033[c"
#define REPORT_CURSOR   "\033[6n"
#define REPORT_WINDOW   "\033[18t"
#define REPORT_ICON     "\033[19t"

#define REQUEST_DEVICE_STATUS printf("\033[c")
#define REQUEST_CURSOR_POS    printf("\033[6n")
#define REQUEST_WINDOW_SIZE   printf("\033[18t")
#define REQUEST_ICON_NAME     printf("\033[19t")

/* ==================== KEYBOARD MODIFIERS ==================== */

#define APPLICATION_KEYPAD "\033="
#define NORMAL_KEYPAD      "\033>"

#define ENABLE_APPLICATION_KEYPAD printf("\033=")
#define ENABLE_NORMAL_KEYPAD      printf("\033>")

/* ==================== CHARACTER SETS ==================== */

#define DEC_SPECIAL_CHARS "\033(0"
#define US_ASCII          "\033(B"

#define USE_SPECIAL_CHARS      printf("\033(0")
#define USE_ASCII_CHARS        printf("\033(B")

/* ==================== FUNCTION KEYS ==================== */

#define F1              "\033OP"
#define F2              "\033OQ"
#define F3              "\033OR"
#define F4              "\033OS"
#define F5              "\033[15~"
#define F6              "\033[17~"
#define F7              "\033[18~"
#define F8              "\033[19~"
#define F9              "\033[20~"
#define F10             "\033[21~"
#define F11             "\033[23~"
#define F12             "\033[24~"

/* ==================== ARROW KEYS ==================== */

#define UP_ARROW        "\033[A"
#define DOWN_ARROW      "\033[B"
#define RIGHT_ARROW     "\033[C"
#define LEFT_ARROW      "\033[D"

/* ==================== COMBINATION MACROS ==================== */

#define ANSI_CLEAR_HOME      "\033[2J\033[H"
#define BOLD_RED        "\033[1;31m"
#define BOLD_GREEN      "\033[1;32m"
#define BOLD_YELLOW     "\033[1;33m"
#define BOLD_BLUE       "\033[1;34m"
#define BOLD_MAGENTA    "\033[1;35m"
#define BOLD_CYAN       "\033[1;36m"
#define BOLD_WHITE      "\033[1;37m"

#define CLEAR_HOME           printf("\033[2J\033[H")
#define CURSOR_HOME          printf("\033[H")

#endif
