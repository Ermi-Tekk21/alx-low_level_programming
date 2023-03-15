#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, len = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		len++;
		pl = s[i++];
	}
	return (len);
}
