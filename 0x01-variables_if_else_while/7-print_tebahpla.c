#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet--)
	{
		putchar(alphabet);
	}
	printf("\n");

	return (0);
}
