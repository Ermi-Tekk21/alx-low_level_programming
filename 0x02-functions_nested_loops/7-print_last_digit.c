#include "main.h"
#include <limits.h>

/**
 * print_last_digit - print the last digit of n
 *
 * @n: any number as para n
 * Return: n%10 if n>=0, -n%10 if n<0
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		if (n == INT_MIN)
		{
			long m = INT_MAX;

			m++;
			_putchar(m % 10 + '0');
			return (m % 10);
																							}
	n = -n;
	_putchar(n % 10 + '0');
	return (n % 10);
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
