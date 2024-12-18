# Utility Header Files for C Projects

This repository contains two utility header files that are widely used in various C projects, particularly in systems programming and embedded environments.

## Files

### 1. BIT_MATH.h

This header file provides macros for bit manipulation operations. These operations are commonly used in embedded system programming to directly manage hardware settings through registers.

#### Features

- `SetBit(value, bitno)`: Sets a specified bit in a variable.
- `ClrBit(value, bitno)`: Clears a specified bit in a variable.
- `TogBit(value, bitno)`: Toggles a specified bit in a variable.
- `GetBit(value, bitno)`: Gets the state of a specified bit in a variable.
- `BIT_CONC(B7,B6,B5,B4,B3,B2,B1,B0)`: Concatenates bits to form a byte.

### 2. STD_TYPES.h

Defines standard data types for more readability and ease of maintenance in projects. Using these type definitions ensures that the code bases are more portable across different platforms.

#### Defined Types

- `u8`, `u16`, `u32`: Unsigned integers of 8, 16, and 32 bits.
- `s8`, `s16`, `s32`: Signed integers of 8, 16, and 32 bits.
- `f16`: Alias for `float`.
- `d64`: Alias for `double`.
- `d96`: Alias for `long double`.

## Usage

Include these files in your C projects to utilize the defined macros and types for handling data and bit-level operations efficiently. These headers are particularly useful in embedded systems programming where direct hardware manipulation is frequently required.

Example of using `BIT_MATH.h`:

```c
#include "BIT_MATH.h"

int main() {
    u8 flag = 0;
    SetBit(flag, 3);
    if (GetBit(flag, 3)) {
        // This block will execute as bit 3 is set
    }
}
