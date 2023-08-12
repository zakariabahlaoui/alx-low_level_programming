#include <stdio.h>

/**
 * main - print alpabet revers
 *
 * Description: print using putchar
 *
 *  Return: return 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}

