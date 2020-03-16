#include "holberton.h"

int (*get_fn(const char *charac, int pos))(va_list)
{
	int j = 0, len_type = 0;
	c_pf type[] = {
		{ "c", _printchar },
		{ "s", _printstr },
        { "i", _printint },
        { "d", _printdecimal}
	};

	len_type = sizeof(type) / sizeof(c_pf);

	while (j < len_type){

		if(charac[pos] == type[j].op[0])
		{
			return (type[j].f);
		}
		j++;	
	}

	return (NULL);
}
