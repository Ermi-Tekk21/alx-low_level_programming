#include <stdio.h>
/**
 * main - Fizz and Buzz
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
		{
			if (i % 3 == 0)
				printf("Fizz ");
			else if (i % 5 == 0)
			{
				if (i == 100)
				{
					printf("Buzz");
				}
				else
				{
					printf("Buzz ");
				}
			}
			else
				printf("%i ", i);
		}

	}
	printf("\n");
	return (0);
}
