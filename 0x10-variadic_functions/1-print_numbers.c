#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: delimiter
* @n: n args
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_1;
	unsigned int i;

	va_start(arg_1, n);
	if (n != 0)
	{
		for (i = 0; (i < n - 1); i++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(arg_1, int), separator);
			}
			else
			{
				printf("%d", va_arg(arg_1, int));
			}
		}
		printf("%d", va_arg(arg_1, int));
		va_end(arg_1);
	}
	printf("\n");
}
