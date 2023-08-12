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
	int b;

	while (n <= 57)
	{
		b = n;
		while (b < '9')
		{

			putchar(n);
			b++;
			putchar(b);
			if (n != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}

		n++;
	}

	putchar('\n');

	return (0);
}

