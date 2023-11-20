# zhol/island_chalice

![zhol/island_chalice](imgur.com image replace me!)

*PCB replacement for Owlabs Chalice40 that supports 2.25u Left Shift*

* Keyboard Maintainer: [Zhol Internet](https://github.com/zhol0777)
* Hardware Supported: RP2040
* Hardware Availability: Private run

Make example for this keyboard (after setting up your build environment):

    make zhol/island_chalice:default

Flashing example for this keyboard:

    make zhol/island_chalice:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: ask dom about this lol i dont know how the two button solution works
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
