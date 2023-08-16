#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c : the character to check
 *
 * Description:  lope all character from a at z and A at Z
 *
 *  Return:  if true return 1 if fals return 0
 */

int _isalpha(int c)
{
	int ch = 'a';
	int ch2 = 'A';

	while (ch <= 'z')
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		ch++;
	}
	while (ch2 <= 'Z')
	{
		if (c >= 'A' && c <= 'Z')
			return (1);
	}

	return (0);
}
