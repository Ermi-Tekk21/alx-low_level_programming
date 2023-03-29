#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: n args
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum_ = 0;
	unsigned int index;
	va_list args;

	if (n)
	{
		va_start(args, n);
		for (index = 0; index < n; index++)
		{
			sum_ += va_arg(args, int);
		}
		va_end(args);
	}
	return (sum_);
}
