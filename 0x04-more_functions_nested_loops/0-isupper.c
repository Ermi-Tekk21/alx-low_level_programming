#include "main.h"
/**
 * _isupper - check uppercase and lowercase
 *
 * @c: any alphabet letter
 * Return: 1 if c is uppercase, 0 if c is lower.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
