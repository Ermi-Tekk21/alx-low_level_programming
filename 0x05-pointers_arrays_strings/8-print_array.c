#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		int nu = *(a + i);

		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		else
		{
			printf("%d, ", nu);
		}
	}
	printf("\n");
}
