#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: print cmob using putchar
 *
 *  Return: return 0
 */

int main(void)
{
	int n = 48;
	int b;
	int k;

	while (n <= '9')
	{
		b = n;
		while (b < '9')
		{
			b++;
			k = b;
			while (k < '9')
			{
				putchar(n);
				putchar(b);
				k++;
				putchar(k);
				if (n != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

		n++;
	}

	putchar('\n');

	return (0);
}

