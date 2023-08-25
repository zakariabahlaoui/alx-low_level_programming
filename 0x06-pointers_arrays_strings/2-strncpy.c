#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: the first string
 * @src: the second to copy
 * @n: the number the charachter to copy
 *
 * Return: return dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
