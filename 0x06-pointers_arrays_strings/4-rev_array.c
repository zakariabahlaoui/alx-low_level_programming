#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: is void
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
