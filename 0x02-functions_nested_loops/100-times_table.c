#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number
 *
 * Description: take a integir and multple it in lop
 *
 *  Return:  is void
 */

void print_times_table(int n)
{
	int i, m, r, r2;

	r = 0;
	r2 = 0;
	for (i = 0; i <= n; i++)
	{
		if (n == 0)
			_putchar('0');
		else
		{
			_putchar('0');
			_putchar(',');
			for (m = 0; m < n; m++)
			{
				r += i;
				if (r < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r > 9 && r < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else if (r > 99 && r < 999)
				{
					_putchar(' ');
					_putchar((r / 100) + '0');
					r2 = r - ((r / 100) * 100);
					_putchar((r2 / 10) + '0');
					_putchar((r2 % 10) + '0');
				}
				if (m < (n - 1) && n != 0)
					_putchar(',');
			}
			r = 0;
			r2 = 0;
		}
		_putchar('\n');
	}
}
