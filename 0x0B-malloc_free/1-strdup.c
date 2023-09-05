#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 * @str: the  string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *strout;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i])
		i++;

	strout = malloc(sizeof(char) * i + 1);

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	i = 0;
	while (str[i])
	{
		strout[i] = str[i];
		i++;
	}

	return (strout);
}
