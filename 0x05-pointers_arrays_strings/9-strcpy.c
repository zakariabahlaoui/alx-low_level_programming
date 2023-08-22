#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src
 * @src: the string want to copy
 * @dest: the copy string
 *
 * Return: return a aray string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
