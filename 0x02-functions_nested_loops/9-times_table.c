#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: take a integir and multple it in lop
 *
 *  Return:  is void
 */

void times_table(void)
{
	int n, m, r;

	n = 0;

	while (n <= 9)
	{
		_putchar('0');
		_putchar(',');
		m = 0;
		while (m < 9)
		{
			r += n;
			if (r < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r > 9)
			{
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (m < 8)
				_putchar(',');

			m++;
		}
		r = 0;
		_putchar('\n');
		n++;
	}
}
