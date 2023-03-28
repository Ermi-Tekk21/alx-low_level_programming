#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	int last_char = 122;
	int alpha;

	for (alpha = 97; alpha <= last_char; alpha++)
	{
		putchar(alpha);
		if (alpha == 122)
		{
			alpha = 64;
			last_char = 90;
																	}										}
	printf("\n");
	return (0);
	}
