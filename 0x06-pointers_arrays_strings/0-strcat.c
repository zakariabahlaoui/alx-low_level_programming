#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: ehe second to concatenate
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
