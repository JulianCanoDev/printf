#include "holberton.h"
/**
 * number_p - print numbers
 * @n: int for print
 * Return: int
 */

int number_p(int n)
{

	int get_num, m, l = 1, leng = 0;

	get_num = n;

	if (n < 0)
	{
		l = l * -1;
		_putchar('-');
		leng++;
	}
	while (get_num > 9 || get_num < -9)
	{
		get_num = get_num / 10;
		l = l * 10;
	}
	while (l > 9 || l < -9)
	{
		m = (n / l) % 10;
		_putchar(m + '0');
		l = l / 10;
		leng++;
	}

	if (n < 0)
	{
		_putchar((n % 10)  * -1 + '0');
		leng++;
	}
	else
	{
		_putchar(n % 10 + '0');
		leng++;
	}

	return (leng);
}

/**
 * _printdecimal - print decimals numbers
 * @args: arguments
 * Return: int
 */
int _printdecimal(va_list args)
{

	int number, len;

	number = va_arg(args, int);

	len = number_p(number);

	return (len);
}

/**
 * _printint - print integer numbers
 * @args: arguments
 * Return: int
 */
int _printint(va_list args)
{
	int number, len;

	number = va_arg(args, int);
	len = number_p(number);

	return (len);
}
