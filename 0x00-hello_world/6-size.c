#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byts(s)"), sizeof(long int);
	printf("Size of a long long int: %ld byte(s)", sizeof(long long));
	printf("Size of a float: %ld byte(s)", sizeof(float));
	return (0);
}
