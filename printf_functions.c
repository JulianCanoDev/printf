#include "holberton.h"
/**
 * _printchar - char
 * @args: arguments
 * Return: Void
 */

int _printchar(va_list args)
{
	char var = (char) va_arg(args, int);

	_putchar(var);

	return (1);
}

/**
 * _printstr - print string
 * @args: arguments
 * Return: Void
 */
int _printstr(va_list args)
{
	char *s;
	int i;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		i = 6;
		write(1, "(null)", 6);

		return (i);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	write(1, s, i);

	return (i);
}
/**
  * _printpercent - passes a % sign through
  * Return: percent sign as a character string
  */
char *_printpercent(void)
{
	char *str;

	string = "%";
	return (str);
}
