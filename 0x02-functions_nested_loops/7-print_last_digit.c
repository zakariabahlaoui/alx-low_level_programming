#include "main.h"

/**
 * print_last_digit -   prints the last digit of a number
 * @i : the intiger
 *
 * Description:  if i < 10 we times it a (-1) and print it
 *
 *  Return:  return i
 */

int print_last_digit(int i)
{
	int r;

	if (i == -2147483648)
		i = 8;

	if (i < 0)
		i = i * (-1);

	r = i % 10;

	_putchar('0' + r);

	return (r);
}
