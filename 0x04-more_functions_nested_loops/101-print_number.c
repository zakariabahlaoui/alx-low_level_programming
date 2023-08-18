#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */

void print_number(int n)
{
	int i;
	char c[10];

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n == 0)
	{
		_putchar('0');
	}
	i = 0;
	while (n > 0)
	{
		c[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
}

int main()
{
	print_number(45);
}