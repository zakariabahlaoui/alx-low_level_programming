#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: the string
 *
 * Return: is void
 *
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
