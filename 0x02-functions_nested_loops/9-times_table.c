#include "main.h"

/**
 * imes_table - prin time
 *
 * Description:  putchar time
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
		_putchar(' ');
		_putchar(' ');
		m = 0;
		while (m < 9)
		{
			r += n;
			if (r < 10)
				_putchar(r + '0');
			else if (r > 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
