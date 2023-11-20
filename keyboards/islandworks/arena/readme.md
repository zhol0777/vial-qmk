# islandworks arena

![arena](imgur.com image replace me!)

*v4n, but 12.5u*

* Keyboard Maintainer: Islandworks Keyboards (dwminik)
* Hardware Supported: RP2040
* Hardware Availability: Private Buy

Make example for this keyboard (after setting up your build environment):

    make islandworks:arena:default

Flashing example for this keyboard:

    make islandworks:arena:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
