#include <stdio.h>

/**
 * main - assign a random number to variable
 *
 * Description: print positive if n is positive if
 *
 *  Return: return 0
 */

int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}

