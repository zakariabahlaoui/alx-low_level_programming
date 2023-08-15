#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Description: print it character by character
 *
 *  Return: is void
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
