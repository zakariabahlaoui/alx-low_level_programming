#include <stdlib.h>
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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d  and is 0", n, m);
	else if (m < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	return (0);
}
