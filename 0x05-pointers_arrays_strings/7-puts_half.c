#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: the string
 *
 * Return: is void
 *
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	i = (len - 1) / 2;

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
