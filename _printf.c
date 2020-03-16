#include "holberton.h"
/**
 * _printf - Our own printf function.
 * @format: Undefined arguments to print
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;

	va_list arg;
	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (get_fn(format, i + 1) != NULL)
			{
				(get_fn(format, i + 1))(arg);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	
	va_end(arg);
	return (0);
}



