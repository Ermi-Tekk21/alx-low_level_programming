#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: delimiter
 * @n: n args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int s;
    char *copy;

    va_start(args, n);

    for (s = 0; s < n; s++)
    {
        copy = va_arg(args, char *);
        if (copy != NULL)
            printf("%s", copy);
        else
            printf("%p", copy);
        if (separator != NULL && s < n - 1)
            printf("%s", separator);
    }
    printf("\n");
    va_end(args);
}
