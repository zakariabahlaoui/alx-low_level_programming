#include "main.h"

/**
 * create_array - creates an array of chars, and
 *  initializes it with a specific char
 * @size: the suze of array
 * @c: thr character
 *
 * Return: return array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size + 1);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
