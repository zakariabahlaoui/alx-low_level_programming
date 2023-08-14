#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: print cmob using putchar
 *
 *  Return: return 0
 */

int main(void)
{
    int n = '0';
    int b;
    int k;
    int l;

    while (n <= '9')
    {
        b = n;
        while (b <= '9')
        {

            k = b;
            while (k <= '9')
            {

                l = '0';
                while (l <= '9')
                {

                    putchar(n);
                    putchar(b);
                    putchar(' ');
                    putchar(k);
                    putchar(l);
                    if (n != '7')
                    {
                        putchar(',');
                        putchar(' ');
                    }
                    l++;
                }
                k++;
            }
            b++;
        }

        n++;
    }

    putchar('\n');

    return (0);
}

