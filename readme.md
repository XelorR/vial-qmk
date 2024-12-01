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
`  !  @  #  $  %     ^  &  *  (  )  "
!  q  w  f  p  b     j  l  u  y  '  ?
.  a  r  s  t  g     m  n  e  i  o  ,
:  z  x  c  d  v     k  h  ,  .  |  /
      ~  `                 -  =
```

rus
```
ё  !  @  #  $  %     ^  &  *  (  )  "
!  й  ц  у  к  е     н  г  ш  з  х  ?
.  ф  ы  в  а  п     р  о  л  д  ж  ,
:  я  ч  с  м  и     т  ь  б  ю  э  /
      ~  `                 -  =
```

sym + num + mouse
```
№  1  2  3  4  5     6  7  8  9  0  '
! dl w← m↑ w→ esc  esc  [  ]  {  }  ?
. bs m← m↓ m→ ent  ent  S  C  A  G  ,
; gm ap w↓ w↑ tab  tab ^v ^c ^x ^z  \
     3. 3`                 <  >
```

nav + fn
```
    F1 F2 F3 F4 F5    F6 F7 F8 F9 F10
vu  tt wt tp tn esc  esc hm ↑  ed del print
vd  G  A  C  S  ent  ent ←  ↓  →  bs  A-print
mu ^z ^x ^c ^v  tab  tab p↑ p↓ ap gm  G-S-s
```

game
```
 esc    1  2  3  4  5
   i  tab  q  w  e  r
caps shft  a  s  d  f
   m ctrl  z  x  c  v
                    ⌥ spc
```

## Macros and Combos to paste (as I don't know how to pre-configure it in firmware)

Macros:
```json
"macro": [[], [], [], [], [["tap", "LSFT(KC_1)", "KC_SPACE", "OSM(MOD_LSFT)"]], [["tap", "USER20", "KC_SPACE", "OSM(MOD_LSFT)"]], [["tap", "USER16", "KC_SPACE"]], [["tap", "USER15", "KC_SPACE", "OSM(MOD_LSFT)"]], [["tap", "USER18", "KC_SPACE"]], [["text", " - "]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Terminal"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Files"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Sublime Text"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Browser"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Calculator"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Vial"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Outlook"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Telegram"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Excel"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Visual Studio Code"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "LGUI(KC_R)"], ["delay", 500], ["text", "shutdown -s -f -t 00"], ["delay", 100], ["tap", "KC_ENTER"]], [["tap", "LGUI(KC_R)"], ["delay", 500], ["text", "shutdown -r -f -t 00"], ["delay", 100], ["tap", "KC_ENTER"]], [], [], [], [], [], [], [], [["text", "https://monkeytype.com/"], ["tap", "KC_ENTER"]], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], []]
```

Combos:
```json
"combo": [["KC_I", "KC_P", "KC_NO", "KC_NO", "KC_O"], ["KC_R", "KC_T", "KC_NO", "KC_NO", "KC_GRAVE"], ["KC_M", "KC_COMMA", "KC_NO", "KC_NO", "KC_RBRACKET"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"]]
```

## Current version

- [Ergohaven](https://ergohaven.xyz/) [K03](https://ergohaven.xyz/k03): [keymap](./keyboards/ergohaven/k03/keymaps/xellum/keymap.c), precompiled [firmware](https://github.com/XelorR/xellum/releases/download/latest/ergohaven_k03_xellum.uf2)
