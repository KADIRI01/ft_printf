*This project has been created as part of the 42 curriculum by wkadiri.*

# ft_printf

## Description

The goal of this project is to recreate the standard C `printf()` function.

The project introduces variadic functions in C and teaches how formatted output works.

My implementation handles the following conversions:

- `%c` : Print a character.
- `%s` : Print a string.
- `%p` : Print a pointer address in hexadecimal.
- `%d` and `%i` : Print a signed decimal integer.
- `%u` : Print an unsigned decimal integer.
- `%x` : Print a hexadecimal number in lowercase.
- `%X` : Print a hexadecimal number in uppercase.
- `%%` : Print a percent sign.

## Instructions

Compile the library:

```bash
make
```

This generates `libftprintf.a`.

To use it in your project, include the header and link the library:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "World", 42);
    return (0);
}
```

Compile your program:

```bash
cc main.c -L. -lftprintf -I. -o program
```

Run it:

```bash
./program
```

Other Makefile commands:

```bash
make clean
make fclean
make re
```

## Algorithm and Data Structure

The implementation uses a simple character-by-character approach.

It reads the format string from left to right:

1. If the current character is not `%`, it is printed directly.
2. If `%` is found, the next character is checked to identify the requested conversion.
3. The corresponding function retrieves the correct argument using `va_arg` and prints it.
4. The number of printed characters is counted and returned.

Each conversion is handled by a separate function. This keeps the code organized and makes each part easier to understand and test.

No complex data structure is needed for this project. The implementation mainly uses:
- A `va_list` to access the variable arguments.
- Counters to keep track of the number of printed characters.
- Recursive functions to print numbers digit by digit.

The output is handled directly using `write()`, without implementing the buffer management of the original `printf()`.

## Resources

- [42 ft_printf Guide](https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf)
- [cppreference - fprintf](https://cppreference.com/w/c/io/fprintf)

### AI Usage

AI was used lightly during this project, mainly to clarify some concepts and help understand the documentation, especially regarding variadic functions and the behavior of `printf()`.

The main focus of the project was to understand how `printf()` works and implement its functionality myself.