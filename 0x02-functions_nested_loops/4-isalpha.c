#include "main.h"

/**
 * _isalpha - check is the char is letter or not
 *
 * @c: the char parameter
 * Return: 1 if c is letter, 0 if c is not letter.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
