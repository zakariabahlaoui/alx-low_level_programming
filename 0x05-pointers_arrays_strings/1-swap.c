#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: the pointer integer to swap
 * @b: the pointer integer
 *
 * Return: is void
 *
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
