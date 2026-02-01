/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx = 6; /* border pixel of windows */
static const unsigned int gappx = 15;   /* gaps between windows */
static const unsigned int snap = 32;    /* snap pixel */
static const int swallowfloating =
    0;                         /* 1 means swallow floating windows by default */
static const int showbar = 1;  /* 0 means no bar */
static const int topbar = 1;   /* 0 means bottom bar */
static const int user_bh = 25; /* 0 means that dwm will calculate bar height, >=
                                  1 means dwm will user_bh as bar height */
static const Bool viewontag = True; /* Switch view on tag switch */

static const char *fonts[] = {
    "Gohu:weight=bold:size=11:antialias=true:hinting=true",
    "Hack Nerd Font:weight=bold:size=11:antialias=true:hinting=true",
    "NotoColorEmoji:weight=bold:size=11:antialias=true:hinting=true",
    "NotoEmoji:weight=bold:size=11:antialias=true:hinting=true",
    "fontello:size=30:antialias=true:hinting=true"};
// static const char dmenufont[]       = "monospace:size=14";
static const char dmenufont[] = "Gohu:size=14";
static const char col_gray1[] = "#1f2935";
static const char col_gray2[] = "#444444";
static const char col_gray3[] = "#bbbbbb";
static const char col_gray4[] = "#ffffff";
// static const char col_red[]         = "#924441";
// static const char col_red[]         = "#0f4b6e";
static const char col_red[] = "#013966";
// static const char col_red[]         = "#506f96";
// static const char col_red[]         = "#444b6a";

static const unsigned int baralpha = 180;
static const unsigned int borderalpha = 180;
static const char *colors[][3] = {
    /*               fg         bg         border   */
    [SchemeNorm] = {col_gray3, col_gray1, col_gray2},
    [SchemeSel] = {col_gray4, col_red, col_red},
};
static const unsigned int alphas[][3] = {
    /*               fg      bg        border     */
    [SchemeNorm] = {180, baralpha, borderalpha},
    [SchemeSel] = {180, baralpha, borderalpha},
};

static const int horizpadbar = 8; /* horizontal padding for statusbar */
static const int vertpadbar = 9;  /* vertical padding for statusbar */

/* tagging */
static const char *tags[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
// static const char *tags[] = { " ", "dev", "chat", "doc", "mult", "dir",
// "set" };

static const Rule rules[] = {
    /* xprop(1):
     *	WM_CLASS(STRING) = instance, class
     *	WM_NAME(STRING) = title
     *  use tags mask to point an application to a specific workspace
     */

    /* class                    instance              title tags mask iscenterd
       isfloating      isterminal   noswallow    monitor */
    {"firefox", NULL, NULL, 1, 0, 0, 0, 0, -1},
    {"TelegramDesktop", NULL, NULL, 1 << 2, 0, 0, 0, 0, -1},
    {"chatgpt-nativefier-ad5e7a", NULL, NULL, 1 << 2, 0, 0, 0, 0, -1},
    {"discord", NULL, NULL, 1 << 2, 0, 0, 0, 0, -1},
    {"thunderbird", NULL, NULL, 1 << 9, 0, 0, 0, 0, -1},
    {"evolution", NULL, NULL, 1 << 9, 0, 0, 0, 0, -1},
    {"Notion", "notion", NULL, 1 << 8, 0, 0, 0, 0, -1},
    {"mpv", NULL, NULL, 1 << 4, 1, 1, 0, 1, -1},
    {"Standard Notes", NULL, NULL, 1 << 3, 0, 0, 0, 0, -1},
    {NULL, "libreoffice", NULL, 1 << 3, 0, 0, 0, 0, -1},
    {"wps", NULL, "WPS Writer", 1 << 3, 0, 0, 0, 0, -1},
    {"wpp", NULL, "WPS Presentation", 1 << 3, 0, 0, 0, 0, -1},
    {"et", NULL, "WPS Spreadsheets", 1 << 3, 0, 0, 0, 0, -1},
    {"Thunar", "thunar", NULL, 1 << 5, 0, 0, 0, 0, -1},
    {"st-256color", NULL, NULL, 0, 1, 0, 1, 0, -1},
    {"Alacritty", NULL, "Neomutt", 1 << 6, 0, 0, 0, 0, -1},
    {"Alacritty", NULL, "bluetuith", 1 << 8, 0, 0, 0, 0, -1},
    {NULL, "st-256color", "ranger", 0, 0, 0, 1, 0, -1},
    {"Postman", NULL, NULL, 0, 0, 0, 0, 0, -1},
    {"vlc", NULL, NULL, 1 << 4, 0, 0, 0, 0, -1},
    {"termite", NULL, "nmtui", 1 << 6, 1, 1, 0, 0, -1},
    /* class                    instance              title tags mask iscenterd
       isfloating      isterminal   noswallow    monitor */
    {"st-256color", NULL, "man", 0, 1, 1, 0, 1, -1},
    {"st-256color", NULL, "dmenu_man.sh", 0, 1, 1, 0, 1, -1},
    {"st-256color", NULL, "musikcube", 1 << 4, 1, 1, 0, 1, -1},
    {"Alacritty", NULL, "falacritty", 0, 1, 1, 1, 1, -1},
    {"pritunl", NULL, "Pritunl Client", 1 << 8, 1, 1, 0, 0, -1},
    {"Evince", NULL, "Recent Documents", 1 << 3, 0, 0, 0, 0, -1},
    {"Yad", NULL, "YAD", 1 << 3, 0, 0, 0, 0, -1},
    {"SimpleScreenRecorder", NULL, NULL, 1 << 6, 1, 1, 0, 1, -1},
    {"xfce4-screenshooter", NULL, "Save screenshot as...", 0, 1, 1, 0, 1, -1},
    {"Thunar", "thunar", "File Operation Progress", 0, 0, 1, 0, 1, -1},
    {"GParted", NULL, NULL, 0, 1, 1, 0, 1, -1},
    {"trayer", NULL, NULL, 1 << 9, 1, 1, 0, 1, -1},
};

/* layout(s) */
static const float mfact = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster = 1;    /* number of clients in master area */
static const int resizehints =
    0; /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen =
    1; /* 1 will force focus on the fullscreen window */

#include "layouts.c"
static const Layout layouts[] = {
    /* symbol     arrange function */
    {"[]=", tile}, /* first entry is default */
    {"[...]", grid},
    {"[M]", monocle},
    {"><>", NULL},
    {"|M|", centeredmaster},
    {">F>", centeredfloatingmaster},
    /* no layout function means floating behavior */
    {NULL, NULL},
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY, TAG)                                                      \
  {MODKEY, KEY, view, {.ui = 1 << TAG}},                                       \
      {MODKEY | ControlMask, KEY, toggleview, {.ui = 1 << TAG}},               \
      {MODKEY | ShiftMask, KEY, tag, {.ui = 1 << TAG}},                        \
      {MODKEY | ControlMask | ShiftMask, KEY, toggletag, {.ui = 1 << TAG}},

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd)                                                             \
  {                                                                            \
    .v = (const char *[]) { "/bin/sh", "-c", cmd, NULL }                       \
  }

/* commands */
static char dmenumon[2] =
    "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = {
    "dmenu_run", "-m",      dmenumon, "-fn",   dmenufont, "-nb",     col_gray1,
    "-nf",       col_gray3, "-sb",    col_red, "-sf",     col_gray4, NULL};
static const char *filecmd[] = {"thunar", NULL};
static const char *taskmanager[] = {"xfce4-taskmanager", NULL};
static const char *calendar[] = {"gsimplecal", NULL};

#include "movestack.c"
#include "selfrestart.c"
#include "shiftview.c"

static Key keys[] = {
    /* modifier                     key        function        argument */
    /* Add to keys[] array. With 0 as modifier, you are able to use the keys
       directly. */
    // { 0, XF86XK_AudioLowerVolume,              spawn,          {.v = downvol
    // } }, { 0, XF86XK_AudioMute,                     spawn,          {.v =
    // mutevol } }, { 0, XF86XK_AudioRaiseVolume,              spawn, {.v =
    // upvol   } },
    {MODKEY | ShiftMask, XK_m, spawn, {.v = dmenucmd}},
    {MODKEY | ShiftMask, XK_Return, spawn, {.v = filecmd}},
    {MODKEY, XK_b, togglebar, {0}},
    {MODKEY, XK_j, focusstack, {.i = +1}},
    {MODKEY, XK_k, focusstack, {.i = -1}},
    {MODKEY, XK_h, focusstack, {.i = +1}},
    {MODKEY, XK_l, focusstack, {.i = -1}},
    {MODKEY, XK_i, incnmaster, {.i = +1}},
    {MODKEY, XK_d, incnmaster, {.i = -1}},
    {MODKEY, XK_Left, setmfact, {.f = -0.05}},
    {MODKEY, XK_Right, setmfact, {.f = +0.05}},
    {MODKEY, XK_minus, setgaps, {.i = -1}},
    {MODKEY, XK_equal, setgaps, {.i = +1}},
    {MODKEY | ShiftMask, XK_equal, setgaps, {.i = 0}},
    /*{ MODKEY,                       XK_Return, zoom,           {0} },*/
    /*{ MODKEY,                       XK_Tab,    view,           {0} },*/
    {MODKEY, XK_q, killclient, {0}},
    {MODKEY | ControlMask | ShiftMask, XK_q, quit, {1}},
    {MODKEY, XK_t, setlayout, {.v = &layouts[0]}},
    // { MODKEY,                       XK_g,      setlayout,      {.v =
    // &layouts[1]} },
    {MODKEY, XK_m, setlayout, {.v = &layouts[2]}},
    {MODKEY, XK_f, setlayout, {.v = &layouts[3]}},
    {MODKEY, XK_u, setlayout, {.v = &layouts[4]}},
    {MODKEY, XK_o, setlayout, {.v = &layouts[5]}},
    {MODKEY | ControlMask, XK_comma, cyclelayout, {.i = -1}},
    {MODKEY | ControlMask, XK_period, cyclelayout, {.i = +1}},
    {MODKEY, XK_space, cyclelayout, {.i = +1}},
    {MODKEY | ShiftMask, XK_space, togglefloating, {0}},
    // { MODKEY,                       XK_0,      view,           {.ui = ~0 } },
    // { MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
    {MODKEY | ShiftMask, XK_j, rotatestack, {.i = +1}},
    {MODKEY | ShiftMask, XK_k, rotatestack, {.i = -1}},
    {MODKEY, XK_comma, focusmon, {.i = -1}},
    {MODKEY, XK_period, focusmon, {.i = +1}},
    {MODKEY | ShiftMask, XK_Left, tagmon, {.i = -1}},
    {MODKEY | ShiftMask, XK_Right, tagmon, {.i = +1}},
    {MODKEY | ShiftMask, XK_r, self_restart, {0}},
    {Mod1Mask | ControlMask, XK_Right, shiftview, {.i = 1}},
    {Mod1Mask | ControlMask, XK_Left, shiftview, {.i = -1}},
    {Mod1Mask | ControlMask, XK_Up, shiftview, {.i = 1}},
    {Mod1Mask | ControlMask, XK_Down, shiftview, {.i = -1}},
    {Mod1Mask, XK_Tab, shiftview, {.i = 1}},
    {Mod1Mask | ShiftMask, XK_Tab, shiftview, {.i = -1}},
    {MODKEY, XK_Tab, shiftview, {.i = 1}},
    {MODKEY | ShiftMask, XK_Tab, shiftview, {.i = -1}},

    TAGKEYS(XK_1, 0) TAGKEYS(XK_2, 1) TAGKEYS(XK_3, 2) TAGKEYS(XK_4, 3)
        TAGKEYS(XK_5, 4) TAGKEYS(XK_6, 5) TAGKEYS(XK_7, 6) TAGKEYS(XK_8, 7)
            TAGKEYS(XK_9, 8) TAGKEYS(XK_0, 9)};

/* IF YOU HAVE A AZERTY KEYBOARD USE THESE CODES
        TAGKEYS(                        XK_ampersand,              0)
        TAGKEYS(                        XK_eacute,                 1)
        TAGKEYS(                        XK_quotedbl,               2)
        TAGKEYS(                        XK_apostrophe,             3)
        TAGKEYS(                        XK_parenleft,              4)
        TAGKEYS(                        XK_section,                5)
        TAGKEYS(                        XK_egrave,                 6)
        TAGKEYS(                        XK_exclam,                 7)
        TAGKEYS(                        XK_ccedilla,               8)
*/

/* THESE ARE THE ORIGINAL QWERTY KEYBOARD CODES
        TAGKEYS(                        XK_1,                      0)
        TAGKEYS(                        XK_2,                      1)
        TAGKEYS(                        XK_3,                      2)
        TAGKEYS(                        XK_4,                      3)
        TAGKEYS(                        XK_5,                      4)
        TAGKEYS(                        XK_6,                      5)
        TAGKEYS(                        XK_7,                      6)
        TAGKEYS(                        XK_8,                      7)
        TAGKEYS(                        XK_9,                      8)
*/

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle,
 * ClkClientWin, or ClkRootWin */
static Button buttons[] = {
    /* click                event mask      button          function argument */
    {ClkLtSymbol, 0, Button1, setlayout, {0}},
    {ClkLtSymbol, 0, Button3, setlayout, {.v = &layouts[2]}},
    {ClkWinTitle, 0, Button2, zoom, {0}},
    {ClkStatusText, 0, Button1, spawn, {.v = taskmanager}},
    {ClkStatusText, 0, Button2, spawn, {.v = filecmd}},
    {ClkStatusText, 0, Button3, spawn, {.v = calendar}},
    {ClkClientWin, MODKEY, Button1, movemouse, {0}},
    {ClkClientWin, MODKEY, Button2, togglefloating, {0}},
    {ClkClientWin, MODKEY, Button3, resizemouse, {0}},
    {ClkTagBar, 0, Button1, view, {0}},
    {ClkTagBar, 0, Button3, toggleview, {0}},
    {ClkTagBar, MODKEY, Button1, tag, {0}},
    {ClkTagBar, MODKEY, Button3, toggletag, {0}},
};
