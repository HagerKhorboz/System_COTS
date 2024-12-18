# Hardware Abstraction Layer (HAL) for ATmega328

This directory contains the Hardware Abstraction Layer (HAL) drivers for the ATmega328 microcontroller, specifically focusing on LED and KEYPAD modules. These drivers provide a high-level interface to control these peripherals easily.

## Directory Overview

- **LED**: Contains the drivers and configuration files for controlling LEDs.
- **KEYPAD**: Contains drivers and configuration files for interfacing with a matrix keypad.

## LED Module

### Files

- `LED_config.h` - Configuration file for setting the LED mode and pin number.
- `LED_int.h` - Interface file with functions to control the LED state.
- `LED_priv.h` - Private definitions, defining constants for normal and reverse LED modes.
- `LED_prog.c` - Implementation of LED control functions.

### Configuration

Edit the `LED_config.h` to set the LED operation mode and pin:

- `LED_u8_MODE`: Choose `LED_u8_NORMAL` or `LED_u8_REVERSE` to set the LED's on and off logic level.
- `LED_u8_PIN`: Set the pin number as defined in the DIO driver.

### Usage

To use the LED drivers in your application, include `LED_int.h` and call the following functions as needed:

- `LED_voidSetLedOn()`: Turns the LED on based on the configured mode.
- `LED_voidSetLedOff()`: Turns the LED off based on the configured mode.

## KEYPAD Module

### Files

- `KEYPAD_config.h` - Configuration file for setting keypad input and output pins.
- `KEYPAD_int.h` - Interface file with functions to read keypad status.
- `KEYPAD_priv.h` - Contains private definitions for the KEYPAD module.
- `KEYPAD_prog.c` - Implementation of the function to read the keypad's status.

### Configuration

Edit the `KEYPAD_config.h` to set the input and output pins:

- Input Pins: `KEYPAD_u8_INP_1` to `KEYPAD_u8_INP_4`
- Output Pins: `KEYPAD_u8_OUT_1` to `KEYPAD_u8_OUT_4`

### Usage

To use the KEYPAD drivers in your application, include `KEYPAD_int.h` and call `KEYPAD_u16GetStatus()` to get the current status of the keypad. The function returns a 16-bit value where each bit represents the status of a switch on the keypad.

## Contributing

Contributions to enhance the drivers or add new functionality are welcome. Please follow the standard GitHub pull request process to submit your changes.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
