This app is made possible by the work done by hudakz, https://developer.mbed.org/users/hudakz/code/STM32F103C8T6_Hello/

## Parts

- STM32F103C8T6 board
- STLink v2
- FTDI board (Optional, for debugging)

## Setup STLink V2

Connect CLK, DIO, GND, 3v3 from STLink to STM32 board

(Optional) Connect FTDI TX, RX and GND to suitable UART on STM32 (e.g. PA2, PA3)

## Install software

Install mbed python command line utilities

    pip install mbed-cli

Install STLink command line utilities

    brew install stlink

## Compile app and upload

In repository root, compile the app

    mbed compile

Upload the app

    st-flash write .build/NUCLEO_F103RB/GCC_ARM/mbed_uart_hid.bin 0x8000000
