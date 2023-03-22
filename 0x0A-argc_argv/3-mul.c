#include <stdio.h>
#include <stdlib.h>
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
	if (argc != 3)
	{
		puts("Error");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
