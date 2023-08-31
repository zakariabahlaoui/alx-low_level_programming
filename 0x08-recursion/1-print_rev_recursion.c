#include "main.h"

/**
 * _print_rev_recursion - prints string s in reverse recursively.
 *
 * @s: string to be printed in reverse.
 *
 * Return: Nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
