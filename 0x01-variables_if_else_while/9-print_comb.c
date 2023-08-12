#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: print nuber using putchar
 *
 *  Return: return 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n == 57)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}

	putchar('\n');

	return (0);
}

