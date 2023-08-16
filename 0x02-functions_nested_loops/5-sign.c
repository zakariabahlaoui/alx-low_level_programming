#include "main.h"

/**
 * print_sign -   prints the sign of a number
 * @n : the intiger
 *
 * Description:  if n < 0 print -1 and if n > 0 print 1 if n == 0 print0
 *
 *  Return:  return integer
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
