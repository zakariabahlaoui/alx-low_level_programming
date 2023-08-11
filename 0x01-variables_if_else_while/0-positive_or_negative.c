#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - assign a random number to variable
 *
 * Description: print positive if n is positive if
 * negative ptint negative and if 0 ptint zwro
 *
 *  Return: return 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
