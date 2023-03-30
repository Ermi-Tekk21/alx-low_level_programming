#include <stdio.h>

void printThis(void) __attribute__((constructor));

/**
 * printThis - this function print the following text
 */

void printThis(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
