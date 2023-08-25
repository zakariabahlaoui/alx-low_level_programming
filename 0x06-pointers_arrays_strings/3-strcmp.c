#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
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
			return (s1[i] - s2[i]);

		i++;
	}
	if (j > i)
		return (s1[i] - s2[i]);

	return (0);
}
