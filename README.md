# _printf

A re-creation of the printf function in C.

## Requirements for this project

- Code must comply with the [Betty](https://github.com/holbertonschool/Betty) style and document checks.
- Compile code using flags: `-Wall`, `-Werror`, `-Wextra`, `-pedantic`, `-Wno-format`
- Cannot use global variables.
- Restricted to no more than 5 functions per file.
- Function prototypes should be included in header file `holberton.h`
- Header files should be include guarded.
- Authorized functions and macros:
..* `write` (`man 2 write`)
..* `va_start` (`man 3 va_start`)
..* `va_end` (`man 3 va_end`)
..* `va_arg` (`man 3 va_arg`)

## File Descriptions

- `holberton.h`: Header file which contains `<stdarg.h>`, constant `BUFSIZE`, struct `validTypes` definition, and all function prototypes.
- `_printf.c`: Main printf function
- `printf_functions.c`: Functions stored within our struct `validTypes` array, which handles char, string, %, int, and unsigned int.

## Team

*Camilo Moncada* - [Github](https://github.com/moncada92) || [Twitter](https://twitter.com/camilo_mon1992)

*Julian Cano* - [Github](https://github.com/juliancanodev) || [Twitter](https://twitter.com/juliancanodev)


