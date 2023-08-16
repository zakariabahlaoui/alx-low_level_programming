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

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
