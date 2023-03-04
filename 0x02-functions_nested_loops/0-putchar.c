#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	char *print = "_putchar";

	while (*print != '\0')
	{
		_putchar(*print);
		print++;
	}
	_putchar('\n');
	return (0);
}
