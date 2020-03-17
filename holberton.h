#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _printchar(va_list arg);
int _printdecimal(va_list arg);
int _printstr(va_list arg);
int _printint(va_list arg);
int _printpercent(char *s);
int number_p(int n);

/**
 * struct check_pf - base verification de function
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct check_pf
{
	char *op;
	int (*f)();
} c_pf;

int (*get_fn(char const *charac, int pos))(va_list);

#endif
