/* The height of the bar (in pixels) */
#define BAR_HEIGHT  15
/* The width of the bar. Set to -1 to fit screen */
#define BAR_WIDTH   -1
/* Offset from the left. Set to 0 to have no effect */
#define BAR_OFFSET 0
/* Choose between an underline or an overline */
#define BAR_UNDERLINE 1
/* The thickness of the underline (in pixels). Set to 0 to disable. */
#define BAR_UNDERLINE_HEIGHT 2
/* Default bar position, overwritten by '-b' switch */
#define BAR_BOTTOM 0
/* The fonts used for the bar, comma separated. Only the first 2 will be used. */
#define BAR_FONT       "-*-stlarch-medium-r-*-*-10-*-*-*-c-*-*-1","-*-ohsnap.icons-medium-r-*-*-12-*-*-*-c-*-*-1"
/* Some fonts don't set the right width for some chars, pheex it */
#define BAR_FONT_FALLBACK_WIDTH 6
/* Define the opacity of the bar (requires a compositor such as compton) */
#define BAR_OPACITY 1.0 /* 0 is invisible, 1 is opaque */
/* Color palette */
#define BACKGROUND 0x222222
#define COLOR0		0x222222
#define COLOR1      0x004d66
#define COLOR2      0x262729
#define COLOR3      0xf92671
#define COLOR4      0xa6e22e
#define COLOR5      0xfd971f
#define COLOR6      0x34bdef
#define COLOR7      0x9e6ffe
#define COLOR8      0x5e7175
#define COLOR9      0xccccc6
#define FOREGROUND 0x004d66
