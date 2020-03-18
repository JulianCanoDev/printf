#include "holberton.h"
/**
 * _printpercent - char %
 * @s: argument char
 * Return: Void
 */

int _printpercent(char *s)
{
	s++;

	_putchar('%');

	return (1);
}

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
	int i, l;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		l = 6;
		s = "(null)";

		for (i = 0; i < l; i++)
			_putchar(*(s + i));
		return (l);
	}
	else
	{
		for (i = 0; s[i]; i++)
			_putchar(s[i]);
		return (i);
	}
}
