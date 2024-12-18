# Microcontroller Abstraction Layer (MCAL) for ATmega328

This directory contains the Microcontroller Abstraction Layer (MCAL) drivers for the ATmega328 microcontroller, specifically focusing on the DIO and TIMER modules. These drivers provide low-level access and control over the microcontroller's hardware.

## Directory Overview

- **DIO**: Contains the drivers and configuration files for digital input/output operations.
- **TIMER**: Contains drivers and configuration files for handling timer operations.

## DIO Module

### Files

- `DIO_config.h` - Configuration file to set the direction of each pin.
- `DIO_int.h` - Interface file with functions to initialize and set pin values.
- `DIO_priv.h` - Contains private definitions for port and pin management.
- `DIO_prog.c` - Implementation of DIO functions.
- `DIO_register.h` - Definition of DIO registers.

### Configuration

Edit the `DIO_config.h` to set each pin's direction:
- `DIO_u8_PIN_DIR_X`: Set the direction for pin X, where X can be from 0 to 31. Options are `DIO_u8OUTPUT` or `DIO_u8INPUT`.

### Usage

To use the DIO drivers in your application, include `DIO_int.h` and use the following functions as needed:

- `DIO_voidInitialize()`: Initializes the directions of all DIO pins as configured.
- `DIO_voidSetPinValue(u8 u8PinIndexCpy, u8 u8PinValueCpy)`: Sets the specified pin to a high or low value.
- `DIO_voidGetPinValue(u8 u8PinIndexCpy)`: Returns the current value of the specified pin.

## TIMER Module

### Files

- `TIM_config.h` - Configuration file for setting the timer prescaler and initial value.
- `TIM_int.h` - Interface file with functions to manage timer operations.
- `TIM_priv.h` - Contains private definitions and includes configurations for the TIMER module.
- `TIM_prg.c` - Implementation of timer functions.

### Configuration

Edit the `TIM_config.h` to set the timer's prescaler and initial value:
- `Tim_u8_PRESCALER`: Set the timer prescaler, options include `TIM_u8_NO_DIVISION`, `TIM_u8_DIV_BY_8`, `TIM_u8_DIV_BY_64`, `TIM_u8_DIV_BY_256`, and `TIM_u8_DIV_BY_1024`.
- `TIM_u8_INIT_VALUE`: Set the initial value for the timer.

### Usage

To use the TIMER drivers in your application, include `TIM_int.h` and use the following functions as needed:

- `TIM_voidInitialize()`: Initializes the timer with the configured settings.
- `TIM_voidEnableInt()`: Enables the timer interrupt.
- `TIM_voidDisableInt()`: Disables the timer interrupt.
- `TIM_voidSetCallBack(void (*ptrCpy)(void))`: Registers a callback function to be called when the timer interrupt occurs.
- `TIM_voidInitRegister(u8 u8ValueCpy)`: Sets a specific value to the timer register.

## Contributing

Contributions to enhance the drivers or add new functionality are welcome. Please follow the standard GitHub pull request process to submit your changes.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
