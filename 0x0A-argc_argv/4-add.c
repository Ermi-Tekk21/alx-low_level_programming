#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - this function calulates the sum the given numbers
 *
 * @argc: the size of argv array
 * @argv: array of number
 * Return: 0 - no error, 1 - with error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
