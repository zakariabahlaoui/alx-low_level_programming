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

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
