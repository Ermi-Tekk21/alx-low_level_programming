#include "main.h"

/**
 * print_alphabet - print all lowercase letters
 *
 * Return: null.
 */

void print_alphabet(void)
{
	int terminate = 122, count = 97;

	while (count <= terminate)
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
}
