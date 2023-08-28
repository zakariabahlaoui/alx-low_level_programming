#include "main.h"

/**
 * _memset -   fills memory with a constant byte
 * @s: the string that fill
 * @b: the charater
 * @n: the size
 *
 * Return: return array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
