#include "main.h"

/**
 * create_buffer - holds string.
 *
 * Return: pointer to buff
 */

int *create_buffer(void)
{
	int *buff;

	buff = malloc(sizeof(int) * 1024);

	if (buff == NULL)
	{
		return (NULL);
	}

	return (buff);
}

/**
 * write_buffer- prints buffer
 * @buffer: holding string
 * @len: size
 * @list: list
 */

void write_buffer(int *buffer, int len, va_list list)
{
	int *buffs;

	buffs = realloc(buffer, len);
	 write(1, buffs, len);

	 free(buffs);
	 va_end(list);
}
