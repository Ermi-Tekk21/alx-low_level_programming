#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: length of diagonal
 */

void print_diagonal(int k)
{
        int i, j;

        if (k > 0)
        {
                for (i = 0; i < k; i++)
                {
                        for (j = 0; j < i; j++)
                        {
                                _putchar(' ');
                        }
                _putchar('\\');
                _putchar('\n');
                }
        }
        else if (k <= 0)
        {
                _putchar('\n');
        }
}

