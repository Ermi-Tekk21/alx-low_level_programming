#include "main.h"
/**
 *more_numbers - print 0 up to 14 numbers 10 times.
 */
void more_numbers(void)
{
	int i = 0, inc = 0, c = 0;

	while (inc < 10)
	{
		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar('1');
				if (i == 10)
				{
					i = 0;
				}
			}
			_putchar(i + '0');
			i++;
			c++;
		}
		i = 0;
		c = 0;
		inc++;
		_putchar('\n');
	}
}
