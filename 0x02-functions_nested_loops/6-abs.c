#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 * @i : the intiger
 *
 * Description:  if i < 10 we times it a (-1)
 *
 *  Return:  return i
 */

int _abs(int i)
{
	if (i < 0)
		i = i * (-1);

	return (i);
}
