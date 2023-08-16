#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *  followed by a new line.
 *@n: the integer we print
 *
 * Description: take a integer and lop it ad print it
 *
 *  Return:  is void
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
			n--;
		}
	}
	printf("\n");
}
