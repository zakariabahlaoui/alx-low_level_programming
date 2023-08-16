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
	int i, m, r;

	r = 0;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		_putchar(',');
		m = 0;
		while (m < n)
		{
			r = r + i;
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
				r = r - ((r / 100) * 100);
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (m < (n - 1))
				_putchar(',');
			m++;
		}
		r = 0;
		_putchar('\n');
	}
}
