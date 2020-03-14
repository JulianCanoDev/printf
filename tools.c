#include "holberton.h"

/**
 * _strlen - Entry point
 * @s: char pointer
 * Return: Always 0 (Success).
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0 ; s[i] != 0 ; i++)
	{
		len++;
	}
	return (len);
}

/**
 * _memcpy - Entry point
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int variable
 * Return: Always 0 (Success).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
return (dest);
}

/**
 * _puts - Entry pointer
 * @str: char variable
 * Return: Always 0 (Success).
 */
void _puts(char *buffer, int size)
{
	write(1, buffer, size);
}
