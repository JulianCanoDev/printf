#ifndef HOLBERTON_H
#define HOLBERTON_H

#define BUFFER_SIZE 1024
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct validTypes
{
	char *valid;
	char *(f)();
} v_types;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void _puts(char *str);

#endif
