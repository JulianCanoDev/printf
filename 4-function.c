#include "holberton.h"
/**
 * number_p_u - print numbers
 * @n: int for print
 * Return: int
 */
int number_p_u(unsigned int n)
{

	unsigned int get_num, m, l = 1, leng = 0;

	get_num = n;

	while (get_num > 9)
	{
		get_num = get_num / 10;
		l = l * 10;
	}
	while (l > 9)
	{
		m = (n / l) % 10;
		_putchar(m + '0');
		l = l / 10;
		leng++;
	}
	 _putchar(n % 10 + '0');
	leng++;

	return (leng);
}

/**
 * _printu - print decimals numbers
 * @args: arguments
 * Return: int
 */
int _printu(va_list args)
{

	unsigned int num;
	int len;

	num = va_arg(args, unsigned int);

	len = number_p_u(num);

	return (len);
}

/**
 * _printo - printo
 * @args: good
 * Return: value
 */
int _printo(va_list args)
{
	int i = 0;
	int j = 0;
	unsigned int decimal = va_arg(args, int);
	long octal[50];

	if (decimal == 0)
	{
	number_p(0);
	return (1);
	}
	while (decimal > 0)
	{
	octal[i] = decimal % 8;
	decimal = decimal / 8;
	i++;
	}

	for (j = i - 1  ; j >= 0; j--)
	{
		number_p(octal[j]);
	}
	return (i);
}

