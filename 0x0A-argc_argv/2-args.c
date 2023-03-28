#include <stdio.h>
#include "main.h"
/**
 * main - the main function
 *
 * @argc: the number of parameter
 * @argv: an array contains the value of the parameter
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
