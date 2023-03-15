#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int pick = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		pick++;
	}

	for (j = (pick - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
