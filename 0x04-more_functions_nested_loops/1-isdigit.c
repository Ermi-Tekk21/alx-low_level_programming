#include "main.h"
/**
 * _isdigit - check if c is digit
 *
 * @c: any character
 * Return: 1 if c digit, 0 if c isn't
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
