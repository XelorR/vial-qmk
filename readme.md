# Xellum QMK keyboard layout

## Inspiration

- [Callum](https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum)
- [Wellum](https://github.com/braindefender/wellum)
- [Miryoku](https://github.com/manna-harbour/miryoku)
- [Dreymar's Extend layer](https://dreymar.colemak.org/layers-extend.html)

Also, I use two layouts: [Colemak-dh](https://colemakmods.github.io/mod-dh/) for English and national (Russian), and it leads to the following challenges:

- Language switching button should also toggle layers (implemented [here](https://github.com/xelorr/xellum/blob/vial/keyboards/ergohaven/ergohaven_ruen.c#L20-L36) as layer_invert(1))
- Keyboard shortcuts becomes different for different layouts, so special BUTTON layer for unified qwerty-like shortcuts added

## Layers

eng
```
! q w f p b   j l u y ' ?
. a r s t g   m n e i o ,
: z x c d v   k h , . / ;
```

rus
```
! й ц у к е   н г ш з х ?
. ф ы в а п   р о л д ж ,
: я ч с м и   т ь б ю э ;
```

sym
```
! ` @ # $ %   ^ & * " ' ?
. ~ / ( ) _   | ⇧ ⌃ ⌥ ⌘ ,
: < > - = +   \ ] [ } { ;
```

nav
```
tt  wt   ⌃⇞  ⌃⇟  ⎋    ⎋ gm ⌃⌫  ⌫   ⌦
 ⌘   ⌥   ⌃  ⇧   ↵    ↵  ←   ↓   ↑   →
⌘⌃← ⌘⌃→ ⇞  ⇟   ⇥   ⇥  ↖  ⌃←  ⌃→  ↘
```

num
```
 1  2  3  4  5     6  7  8  9  0
 ⌘  ⌥  ⌃  ⇧ f11  f12  ⇧  ⌃  ⌥  ⌘
f1 f2 f3 f4 f5    f6 f7 f8 f9 f10
```

game
```
   i  tab q w e r
caps shft a s d f
   m ctrl z x c v
                ⌥ spc
```

## Macros and Combos to paste (as I don't know how to pre-configure it in firmware)

Macros:
```json
[[], [], [], [], [["tap", "LSFT(KC_1)", "KC_SPACE", "OSM(MOD_LSFT)"]], [["tap", "USER20", "KC_SPACE", "OSM(MOD_LSFT)"]], [["tap", "USER16", "KC_SPACE"]], [["tap", "USER15", "KC_SPACE", "OSM(MOD_LSFT)"]], [], [], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Terminal"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Files"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Sublime Text"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Browser"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Calculator"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Vial"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Outlook"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Telegram"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Excel"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Visual Studio Code"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "LGUI(KC_R)"], ["delay", 500], ["text", "shutdown -s -f -t 00"], ["delay", 100], ["tap", "KC_ENTER"]], [["tap", "LGUI(KC_R)"], ["delay", 500], ["text", "shutdown -r -f -t 00"], ["delay", 100], ["tap", "KC_ENTER"]], [], [], [], [], [], [], [], [["text", "https://monkeytype.com/"], ["tap", "KC_ENTER"]], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], []]
```

Combos:
```json
[["KC_I", "KC_P", "KC_NO", "KC_NO", "KC_O"], ["M4", "KC_Q", "KC_NO", "KC_NO", "KC_GRAVE"], ["KC_C", "KC_V", "KC_NO", "KC_NO", "LSFT(KC_9)"], ["KC_C", "KC_D", "KC_NO", "KC_NO", "LSFT(KC_9)"], ["KC_M", "KC_COMMA", "KC_NO", "KC_NO", "LSFT(KC_0)"], ["KC_H", "KC_COMMA", "KC_NO", "KC_NO", "LSFT(KC_0)"], ["KC_X", "KC_C", "KC_NO", "KC_NO", "USER19"], ["KC_COMMA", "KC_DOT", "KC_NO", "KC_NO", "USER36"], ["KC_DOT", "KC_QUOTE", "KC_NO", "KC_NO", "USER21"], ["KC_J", "KC_K", "KC_NO", "KC_NO", "KC_MINUS"], ["KC_N", "KC_E", "KC_NO", "KC_NO", "KC_MINUS"], ["KC_L", "KC_K", "KC_NO", "KC_NO", "LSFT(KC_MINUS)"], ["KC_E", "KC_I", "KC_NO", "KC_NO", "LSFT(KC_MINUS)"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"]]
```

## Current version

- [Ergohaven](https://ergohaven.xyz/) [K03](https://ergohaven.xyz/k03): [keymap](./keyboards/ergohaven/k03/keymaps/xellum/keymap.c), precompiled [firmware](https://github.com/XelorR/xellum/releases/download/latest/ergohaven_k03_xellum.uf2)
