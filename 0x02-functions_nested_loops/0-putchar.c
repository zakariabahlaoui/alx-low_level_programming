#include "main.h"

/**
 * main - print str
 *
 * Description: print str using _outchar
 *
 * Return: return 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
