#include <stdio.h>

/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	int div = 2;

	while (div < n)
	{
		if (n % div != 0)
		{
			div++;
		}
		else
		{
			n = n / div;
			div = 2;
		}
	}
	printf("%ld", n);
	printf("\n");
	return (0);
}
