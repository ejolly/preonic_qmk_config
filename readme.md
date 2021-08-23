# My custom layout for Preonic

*Created 08/23/21*

## Notes   
- After installing `qmk` from homebrew, all the files below will live inside `~/qmk_firmware/keyboards/preonic/keymaps`
- Clone this repo into that directory (this avoids forking the entire QMK firmware and just retains the config files)

## Steps  
1. Install qmk: `brew install qmk/qmk/qmk`
2. Setup qmk: `qmk setup`
3. Set preonic to default keyboard: `qmk config user.keyboard=preonic/rev3`
4. Set me as default user: `qmk config user.keymap=ejolly`
5. Create new preonic profile by duplicating default: `qmk new-keymap` (name it `ejolly`)
6. Visually setup and dowload keymap file from `https://config.qmk.fm`
7. Convert downloaded file to `keymap.c`: `qmk json2c filename.json > keymap.c`
8. Move converted file overwriting default: `mv keymap.c ~/qmk_firmware/keyboards/preonic/keymaps/ejolly/keymap.c`
9. Adjust additional config like music mode and timing in `config.h` and `rules.mk`
10. Compile: `qmk compile -km ejolly`
11. Flash the resulting `.bin` file using QMK Toolbox
12. On updates might need to `qmk clean` and restart terminal before running another `qmk compile`

## References  
[QMK Configurator](https://config.qmk.fm/#/)

[QMK Toolbox](https://github.com/qmk/qmk_toolbox)

[QMK Music Mode](https://beta.doc.qmk.fm/using-qmk/hardware-features/feature_audio#music-map)   

[Full keycode list](https://beta.doc.qmk.fm/using-qmk/simple-keycodes/keycodes) 

[Tapping/mod settings](https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold) 

[Nice blog post on mod key settings](https://precondition.github.io/home-row-mods#using-home-row-mods-with-qmk)

[Testing timing of dual mod keys](https://precondition.github.io/home-row-mods#tapping-term-test-area)