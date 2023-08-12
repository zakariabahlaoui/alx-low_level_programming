#include <stdio.h>

/**
 * main - print hexadecimal
 *
 * Description: print hexadecimal using ptuchar
 *
 *  Return: return 0
 */

int main(void)
{
	int n = 48;
	char c = 'a';

	while (n <= 57)
	{
		putchar(c);
		n++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}

