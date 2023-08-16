#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Description: print alphabet 10 times
 *
 *  Return: is void
 */

void print_alphabet_x10(void)
{
	int i;
	int c;

	i = 0;
	c = 'a';
	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
