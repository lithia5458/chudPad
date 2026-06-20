# chudpad

![chudpad] https://imgur.com/a/vi2WSB4

An ortho 3x3 macropad created for the Hackpad mission as a part of Hack Club Stardance 2026!

* Keyboard Maintainer: [eugene](https://github.com/lithia5458)
* Hardware Supported: Seeed XIAO RP2040, Raspberry Pi 2040
* Hardware Availability: https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html?srsltid=AfmBOorxzguCwNUs_uDxf6hBdayBUMbAJO51ASffFirCR7sAJAJYTYS_

Make example for this keyboard (after setting up your build environment):

    make chudpad:default

Flashing example for this keyboard:

    make chudpad:default:flash

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
