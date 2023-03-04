#include "main.h"

/**
 * print_sign - check the sign of n and print it
 *
 * @n: any number as para
 * Return: 1 if n is +ve, 0 if n is 0, -1 if n is -ve.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
