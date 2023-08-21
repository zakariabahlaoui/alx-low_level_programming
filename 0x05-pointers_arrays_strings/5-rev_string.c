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
	char tmp;
	int i, j;

	j = 0;
	while (s[j])
		j++;

	i = 0;
	j--;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
