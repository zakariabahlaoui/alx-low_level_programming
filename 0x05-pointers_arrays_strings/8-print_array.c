#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 * @a: the string
 * @n: the number the string want print
 *
 * Return: is void
 *
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
