# Xellum QMK keyboard layout

## Inspiration

- [Callum](https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum)
- [Wellum](https://github.com/braindefender/wellum)
- [Miryoku](https://github.com/manna-harbour/miryoku)
- [Dreymar's Extend layer](https://dreymar.colemak.org/layers-extend.html)
- [Раскладка Ильи Шепрута](https://optozorax.github.io/p/my-keyboard-layout/)
- [Designing Symbol Layer](https://getreuer.info/posts/keyboards/symbol-layer/index.html)

Also, I use two layouts: [Colemak-dh](https://colemakmods.github.io/mod-dh/) for English and national (Russian), and it leads to the following challenges:

- Language switching button should also toggle layers (implemented [here](https://github.com/xelorr/xellum/blob/vial/keyboards/ergohaven/ergohaven_ruen.c#L20-L36) as layer_invert(1))

## Layers ideas/collection


key voc

| abbr | key symbol | key name |
| ---- | ---------- | -------- |
| S | ⇧ | OSM or OSSM Shift |
| C | ⌃ | OSM or OSSM Control |
| A | ⌥ | OSM or OSSM Alt |
| G | ⌘ | OSM or OSSM Gui |
| LS | ⇧ | Regular (non-sticky) Left Shift |
| LC | ⌃ | Regular (non-sticky) Left Control |
| LA | ⌥ | Regular (non-sticky) Left Alt/Option |
| LG | ⌘ | Regular (non-sticky) Left Gui/Super/Win/Command |
| RS | ⇧ | Regular (non-sticky) Right Shift |
| RC | ⌃ | Regular (non-sticky) Right Control |
| RA | ⌥ | Regular (non-sticky) AltGr |
| RG | ⌘ | Regular (non-sticky) Right Gui/Super/Win/Command |
| __ | | nothing/transition to previous layer |
| E | ⎋ | Escape |
| N | ↵ | Enter |
| T | ⇥ | Tab |
| P | | Print Screen |
| sp | ␣ | Space |
| bs | ⌫ | Backspace |
| dl | ⌦ | Delete |
| ap | | App/Menu |
| U | ↑ | Up |
| D | ↓ | Down |
| L | ← | Left |
| R | → | Right |
| ed | ↘ | End |
| hm | ↖ | Home |
| pd | ⇟ | Page Down |
| pu | ⇞ | Page Up |
| lb | | Left mouse button / button 1 |
| rb | | Right mouse button / button 2 |
| mb | | Miggle mouse button / button 3 |
| nl | | Num Lock |
| sl | | Scroll Lock |
| cl | ⇪ | Caps Lock |
| cw | ⇪ | Caps Word |
| lw | | RuEn Word |
| lg | | Language toggle |
| en | | Language set English |
| ru | | Language set Russian |
| pa | | Pause/Break |
| rm | | Record macro |
| pm | | Play recorded macro |
| sm | | Stop recording macro |
| st | | Switch Tab (sticky Ctrl-tab) |
| sw | | Switch Window (sticky Alt-tab or Command-tab) |
| pt | | Previous tab |
| nt | | Next tab |
| qt | | Close tab |
| qw | | Close window |
| vu | | Volume up |
| vd | | Volume down |
| mu | | Mute |
| ^c | | Copy |
| ^v | | Paste |
| ^x | | Cut |
| ^z | | Undo |
| eng / EN | | English alphas layer |
| rus / RU | | Russian alphas layer |
| nav / NV | | navigation layer |
| mos / MS | | mouse/cursor layer |
| sym / SY | | symbol later |
| mac / MC | | macro/launcher layer |
| but / BU | | button layer |
| num / NU | | numbers layer |
| med / ME | | media layer |
| fun / FN | | F-row/function layer |
| gam / GM | | Gaming layer |
| gfn / GF | | Function layer for Gaming layer |

comfort K03 diagram
```
 5  5  4  3  4  5          5  4  3  4  5  5
 4  3  3  2  2  4          4  2  2  3  3  4
 2  1  0  0  0  2          2  0  0  0  1  2
 3  3  2  2  1  4  5    5  4  1  2  2  3  3
       4  4  3  0  1    1  0  3  4  4
```

blank layer to copy
```
__ __ __ __ __ __         __ __ __ __ __ __
__ __ __ __ __ __         __ __ __ __ __ __
__ __ __ __ __ __         __ __ __ __ __ __
__ __ __ __ __ __ __   __ __ __ __ __ __ __
      __ __ __ __ __   __ __ __ __ __
```

sacred spots
```
__ __ __ __ __ __         __ __ __ __ __ __
__ __ __ __ __ __         __ __ __ __ __ __
__ __ __ __ __ __         __ __ __ __ __ __
__ __ __ __ __ __ __   __ __ __ __ __ __ __
      __ __ __ sp __   __ __ __ __ __
```

must be placed on base layer
```
, . sp S
```

eng
```
 `  1  2  3  4  5          6  7  8  9  0  -
 !  q  w  f  p  b          j  l  u  y  '  ?
 ,  a  r  s  t  g          m  n  e  i  o  .
 :  z  x  c  d  v          k  h  ,  .  |  /
       <  >                      -  =
```

rus1 (combos: щ = шз, ё = ке, ъ = ьб)
```
 ё  1  2  3  4  5          6  7  8  9  0  -
 !  й  ц  у  к  е          н  г  ш  з  х  ?
 ,  ф  ы  в  а  п          р  о  л  д  ж  .
 :  я  ч  с  м  и          т  ь  б  ю  э  /
       <  >                      -  =
```

nav - my
```
F11 F1 F2 F3 F4 F5         F6 F7 F8 F9 F10 F12
 __ st sw pt nt qt         qw hm  U ed pu __
 LG  G  A  C  S lw         cw  L  D  R pd RA
 __ ^z ^x ^c ^c __ __   __ __  P ap MC GM __
       __ __ __ __ __    E dl bs __ __
```

num - my
```
 `  1  2  3  4  5         6  7  8  9  0  -
 !  -  7  8  9  ÷                        ?
 ,  +  4  5  6  *            S  C  A  G  .
 ;  0  1  2  3  =           ^v ^c ^x ^z  \
       <  >  .  0  -                
```

num - [beakl](http://ieants.cc/beakl/?i=3)
```
       +  /  *  =            y  x  z  
    -  5  2  3  :         ~  F  E  D  
    7  .  1  0  4         {  C  B  A  }
    ,  6  9  8               [  ]  %  
```

num shifted - [beakl](http://ieants.cc/beakl/?i=3)
```
 @  $  #  %                  Y  X  Z
       !  [  ]  =         _  f  e  d
    &  $  #  %  |         {  c  b  a  }
    ;  ^  <  >               (  )  \
```

sym - my, 1
```
 ~  !  @  #  $  %         ^  &  *  (  )  _
 !  &  *  #  $  %         ^ () [] {} <>  ?
 ,  ~  `  '  "  ""        @  S  C  A  G  .
 ;  [  ]  (  )              ^v ^c ^x ^z  \
       {  }  ,     _                
```

sym - [ergohaven](https://ergohaven.xyz/k03)
```
       @  $  #                   ^         
       <  =  >  `             [  _  ]      
    \  (  -  )  +          %  {  ;  }  !   
       *  :  /                |  ~  &      
```

sym - [beakl](http://ieants.cc/beakl/?i=3)
```
       @  $  #                ~  _  `  
       <  =  >                [  ^  ]  
    \  (  -  )  +          %  {  ;  }  !
       *  :  /                |  ~  &  
```

sym - [beakl z](http://thedarnedestthing.com/beakl%20zi%20revisited)
```
       .  *  &  |          *  [  ^  ]      
    G  <  %  >  ?          ?  (  $  )      
       +  @  /  !          |  {  #  }      
             E  =  \       N  \ dl   
```

sym - sunaku

sym - [miryoku](https://github.com/manna-harbour/miryoku)
```
    {  &  *  ( }                           
    :  $  %  ^  +             S  C  A  G   
    ~  !  @  #  |                          
             (  )  _                 
```

sym - [t34](https://www.jonashietala.se/blog/2021/06/03/the-t-34-keyboard-layout/)
```
    ~  +  *  %                #  .  @  ,   
    |  {  }  -  \          `  ?  [  ]      
    =  <  >  !             =  &  (  )  _   
```

sym - [wellum](https://github.com/braindefender/wellum)
```
    !  @  #  $  %          ^  &  *  (  )   
    ~  `  '  "  -          +  S  C  A  G   
    \  |  ;  ,  _          =  .  :  |  /   
```

sym - [callum](https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum)
```
    E  [  {  (  ~          ^  )  }  ]  `   
    -  *  =  _  -          +  G  A  C  S   
    +  |  @  /  %             \  &  ?  !   
```

fun
```
  F12 F7 F8 F9 ps                       rm
  F11 F4 F5 F6 sl            S  C  A  G sm
  F10 F1 F2 F3 pa           ^v ^c ^x ^z pm
```

game
```
  es  1  2  3  4  5
   i  T  q  w  e  r
  cl  S  a  s  d  f
   m  C  z  x  c  v
               A sp gfn
```

## Macros and Combos to paste (as I don't know how to pre-configure it in firmware)

Macros:
```json
"macro": [[["text", "()"], ["tap", "KC_LEFT"]], [["tap", "USER22", "USER23", "KC_LEFT"]], [["tap", "USER24", "USER25", "KC_LEFT"]], [["tap", "USER26", "USER27", "KC_LEFT"]], [["tap", "LSFT(KC_1)", "KC_SPACE", "OSM(MOD_LSFT)"]], [["tap", "USER20", "KC_SPACE", "OSM(MOD_LSFT)"]], [["tap", "USER16", "KC_SPACE"]], [["tap", "USER15", "KC_SPACE", "OSM(MOD_LSFT)"]], [["tap", "USER18", "KC_SPACE"]], [["tap", "USER19", "USER19", "KC_LEFT"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Terminal"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Files"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Sublime Text"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Browser"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Calculator"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Vial"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Outlook"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Telegram"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Excel"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "KC_LGUI"], ["delay", 200], ["text", "Visual Studio Code"], ["delay", 200], ["tap", "KC_ENTER"]], [["tap", "LGUI(KC_R)"], ["delay", 500], ["text", "shutdown -s -f -t 00"], ["delay", 100], ["tap", "KC_ENTER"]], [["tap", "LGUI(KC_R)"], ["delay", 500], ["text", "shutdown -r -f -t 00"], ["delay", 100], ["tap", "KC_ENTER"]], [], [], [], [["tap", "KC_DOWN", "KC_DOWN", "KC_DOWN"], ["delay", 100], ["text", "some useless pass 1"], ["tap", "KC_ENTER"]], [["text", "some useless pass 2"], ["tap", "KC_ENTER"]], [], [], [["text", "https://monkeytype.com/"], ["tap", "KC_ENTER"]], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], [], []]
```

Combos:
```json
"combo": [["KC_I", "KC_P", "KC_NO", "KC_NO", "KC_O"], ["KC_R", "KC_T", "KC_NO", "KC_NO", "KC_GRAVE"], ["KC_M", "KC_COMMA", "KC_NO", "KC_NO", "KC_RBRACKET"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"]]
```

## Current version

- [Ergohaven](https://ergohaven.xyz/) [K03](https://ergohaven.xyz/k03): [keymap](./keyboards/ergohaven/k03/keymaps/miryoku/keymap.c), precompiled [firmware](https://github.com/XelorR/xellum/releases/download/latest/ergohaven_k03_miryoku.uf2)
