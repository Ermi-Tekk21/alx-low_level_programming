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
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
