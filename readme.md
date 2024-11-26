# Xellum QMK keyboard layout

## Inspiration

- [Callum](https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum)
- [Wellum](https://github.com/braindefender/wellum)
- [Miryoku](https://github.com/manna-harbour/miryoku)
- [Dreymar's Extend layer](https://dreymar.colemak.org/layers-extend.html)

## Key ideas

I love everything in [Miryoku](https://github.com/manna-harbour/miryoku) except two things:

- home row mod-taps - to be replaced with home row one shot sticky [Callum](https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum)-like mods
- navigation layer is very pure and lots of useful things can be allocated additionally

I also like following ideas:

- [Wellum](https://github.com/braindefender/wellum)'s game layer
- Combos for frequent symbols
- [Ergohaven](https://ergohaven.xyz/)'s [RuEn](keyboards/ergohaven/docs/ruen.md) symbols
- as I use two layouts: national and [Colemak-dh](https://colemakmods.github.io/mod-dh/) for English, so **language switching button should also toggle layers** (implemented [here](https://github.com/xelorr/xellum/blob/vial/keyboards/ergohaven/ergohaven_ruen.c#L20-L36) as layer_invert(1))

## Layers

TODO

## Combos to paste (as I don't know how to pre-configure it in firmware)

TODO

## Current version

- [Ergohaven](https://ergohaven.xyz/) [K03](https://ergohaven.xyz/k03): [keymap](./keyboards/ergohaven/k03/keymaps/xellum/keymap.c), precompiled [firmware](https://github.com/XelorR/xellum/releases/download/latest/ergohaven_k03_xellum.uf2)
