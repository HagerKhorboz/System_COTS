
# ATmega328 Drivers Repository

This repository contains the Microcontroller Abstraction Layer (MCAL) and Hardware Abstraction Layer (HAL) drivers for the ATmega328 microcontroller. It is structured to provide a clear and organized approach to interfacing with the hardware functionalities of the ATmega328.

## Directory Structure

- **MCAL**: This folder contains all the Microcontroller Abstraction Layer drivers, which provide direct interaction capabilities with the microcontroller hardware.
- **HAL**: The Hardware Abstraction Layer drivers in this folder offer a higher-level interface to the external peripherals and are dependent on the MCAL drivers for their operation.

## Getting Started

### Prerequisites

Ensure you have the following software installed:
- AVR-GCC Compiler
- AVR Dude
- Any suitable AVR programming software

### Installation

1. Clone this repository to your local machine using:
   ```bash
   git clone https://github.com/yourusername/atmega328-drivers.git
   ```
2. Navigate to the cloned directory:
   ```bash
   cd atmega328-drivers
   ```

### Compiling and Uploading

To compile and upload the drivers to your ATmega328, use the following commands:
```bash
avr-gcc -mmcu=atmega328p -Os -DF_CPU=16000000UL -o main.bin main.c
avr-objcopy -O ihex -R .eeprom main.bin main.hex
avrdude -c arduino -p m328p -P [PORT] -b 115200 -U flash:w:main.hex
```
Replace `[PORT]` with the port your ATmega328 is connected to (e.g., `/dev/ttyUSB0`).

## Usage

Include the necessary driver headers in your main program file, initialize the drivers, and use them as required.

```c
#include "MCAL/DIO.h"
#include "HAL/DRIVER_OF_YOUR_CHOICE.h"

int main(void) {
    // Initialize drivers
    gpio_init();
    sensor_init();

    // Application logic
    while(1) {
        // Your code here
    }
    return 0;
}
```

## Contributing

Contributions to this repository are welcome. Please adhere to the following guidelines:
- Fork the repository and create your feature branch.
- Make your changes and commit them with clear, descriptive messages.
- Push your changes to your fork and submit a pull request to this repository.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.

## Acknowledgments

- Thanks to all contributors who have helped with the development of these drivers.
- Special thanks to the open-source community for providing invaluable resources and support.
