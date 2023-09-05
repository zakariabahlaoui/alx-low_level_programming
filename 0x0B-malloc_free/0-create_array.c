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

	if (size == 0)
		str = NULL;

	i = 0;
	while (i <= size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}

int main(void)
{
	char *buffer;
	unsigned int size;

	size = 0;
	buffer = create_array(size, 'H');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	free(buffer);
	return (0);
}
