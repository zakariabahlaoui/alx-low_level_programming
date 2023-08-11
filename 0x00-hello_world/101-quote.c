#include <unistd.h>

/**
 * main - a program print string whit quote
 *
 * Return: reurm 1
 *
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}

