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
	int n = 0;
	int n2;

	while (n <= 99)
	{
		n2 = n + 1;
		while (n2 <= 99)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');
			if (n != 98 && n != 99)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n++;
	}

	putchar('\n');
	return (0);
}

