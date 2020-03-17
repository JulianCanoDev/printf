#include "holberton.h"

/**
 * *get_fn - get function correct
 * @charac: pointer function
 * @pos: increment
 * Return: a function
 */

int (*get_fn(const char *charac, int pos))(va_list)
{
	int j = 0, len_type = 0;
	c_pf type[] = {
		{ "c", _printchar },
		{ "s", _printstr },
	};

	len_type = sizeof(type) / sizeof(c_pf);

	while (j < len_type)
{

		if (charac[pos] == type[j].op[0])
		{
			return (type[j].f);
		}
		j++;
	}

	return (NULL);
}
