#include "main.h"

/**
 * leet - encode
 * @s: pointer to char params
 * Return: *s
 */

char *leet(char *s)
{
	int i;
	int j;
	char str[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (s[i] == str[j] || s[i] == (str[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
