# Questions

## What's `stdint.h`?

A library that has defined in it these unsigned interger data types.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

uint variables do not reserve their first bit for signing. uints are essentially absolute values. The different numbers
represent the amount of bits available in the data type. They are used to store an unsigned or signed value of a specific bit length.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

1, 4, 4, 2

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

66 and 77 in ASCII, or 42 and 4D in hexadecimal.

## What's the difference between `bfSize` and `biSize`?

bfSize is the size of the clue.bmp file in bits, while biSize is the size of the actual image in bits.

## What does it mean if `biHeight` is negative?

The bitmap is a top-down DIB, and its origin is in the upper-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

The file may not exsist or there might be aproblem with wether or not the user has permission to access
the file in question.

## Why is the third argument to `fread` always `1` in our code?

Because we were told read and edit the clue pixel by pixel.

## What value does line 65 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3

## What does `fseek` do?

Allows a user to move back and fowarth in a file.

## What is `SEEK_CUR`?

It finds the users place in a file.

## Whodunit?

Professor Plum with the candlestick in the library.
