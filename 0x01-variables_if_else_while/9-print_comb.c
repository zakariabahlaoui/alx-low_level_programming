#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: print nuber using putchar
 *
 *  Return: return 0
 */

int main(void)
{
    int n = 48;

    while (n <= 57)
    {
        putchar(n);
        putchar(',');
        putchar(' ');
        n++;
    }

    putchar('\n');

    return (0);
}

