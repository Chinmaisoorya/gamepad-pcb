# Custom USB Gamepad PCB

A 2-layer PCB gamepad built around the ATmega32U4 microcontroller. It enumerates as a standard Xbox 360 controller on Windows via XInput — no drivers needed.

## Features

- Native USB 2.0 HID via ATmega32U4
- Dual analog joysticks (5-pin headers)
- 4 tactile buttons (A / B / X / Y)
- 16MHz external crystal for USB timing
- 2-layer PCB — hand-routed
- USB-C connector

## Preview

![3D Render](images/3d_render.png)

## Tech Stack

| Layer | Tool |
|-------|------|
| Schematic | KiCad 8 |
| PCB Layout | KiCad 8 |
| Firmware | Arduino + XInput library |
| Manufacturing | JLCPCB-compatible Gerbers |

## Repository Structure
gamepad-pcb/
├── hardware/ KiCad project + Gerbers
├── firmware/ Arduino XInput code
├── images/ Renders and screenshots
└── README.md

## Hardware Details

- **MCU:** ATmega32U4-AU (QFN-44)
- **Crystal:** 16MHz HC49
- **USB:** USB-C receptacle (USB 2.0)
- **Joysticks:** 5-pin headers × 2
- **Buttons:** 6mm tactile push buttons × 4
- **PCB:** 2-layer, 1.6mm FR4

## Building the Firmware

1. Install the [Arduino XInput library](https://github.com/dmadison/ArduinoXInput).
2. Open `firmware/gamepad.ino`.
3. Select **Arduino Leonardo** as the board (ATmega32U4).
4. Upload via USB.

The gamepad will appear in Windows as **"Xbox 360 Controller"**.

## Manufacturing

Gerbers are in `hardware/gamepad_gerbers.zip`. Upload directly to JLCPCB or PCBWay.

## License

MIT — free to use, modify, and build.

## Author

Chinmai soorya P — [www.linkedin.com/in/chinmai-soorya-p-52184941a]
