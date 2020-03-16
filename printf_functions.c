#include "holberton.h"
/**
 * _printchar - char
 * @c: int}
 * Return: Void
 */
int _printchar(va_list args)
{
	char var = (char) va_arg(args, int);
	_putchar(var);
	return(1);
}

/**
 * found_char - char
 * @c: int}
 * Return: Void
 */
int _printstr(va_list args)
{
	char *s;
	int i;
	s = va_arg(args, char *);

	if (s == NULL){
		i = 6;
 		write(1, "(null)", 6);
		return (i);
	}

	for(i = 0; s[i] != '\0'; i++)
	{
	}
	write(1, s, i);

	return(i);
}
