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
	char *str;
	int i;

	str = (char *)s;
	i = 0;

	while (i <= n)
	{
		str[i] = b;
		i++;
	}
	return (str);
}
