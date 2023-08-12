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

	while (c <= 'z')
	{
		if (c == 'e')
			c++;
		if (c == 'q')
			c++;
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}

