#include "main.h"

/**
 * get_function - takes a conversion specifier
 * @c: char  type
 *
 * Return:  function pointer.
 */

int (*get_function(char c))(va_list ap)
{
	int t = 0;

	convert con[] = {

		{"c", printf_c},

		{"s", printf_s},

		{"%", printf_p},

		{"d", print_int},

		{"i", print_int},

		{'\0', NULL}
	};

	while (con[t].id != NULL)
	{
		if (con[t].id[0] == c)
			return (con[t].func);
		t++;
	}

	return (NULL);
}
