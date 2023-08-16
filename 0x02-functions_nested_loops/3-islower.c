#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c : the character to check
 *
 * Description: lope all character from a at z
 *
 *  Return:  if true return 1 if fals return 0
 */

int _islower(int c)
{
	int c = 'a';

	while (c <= 'z')
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		c++;
	}

	return (0);
}
