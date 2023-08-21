#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 *
 * Return: is void
 *
 */

void rev_string(char *s)
{
	int i, j;

	j = 0;

	while (s[j])
		j++;

	char str[j];

	i = 0;
	while (j > 0)
	{
		j--;
		str[i] = s[j];
		i++;
	}

	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
}
