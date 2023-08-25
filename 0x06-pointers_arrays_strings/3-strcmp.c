#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: the first string
 * @src: the second to copy
 * @n: the number the charachter to copy
 *
 * Return: return dest.
 */

int _strcmp(char *s1, char *s2);
{
	int i;
	int j;
	j = 0;
	while (s2[j] != 0)
	{
		j++;
	}
	i = 0;
	while (s1[i] != 0)
	{
		if (s1[i] != s2[i])
			return s1[i] - s2[i];

		i++;
	}
	if (j > i)
		return s1[i] - s2[i];

	return 0;
}
