#include "main.h"
/**
 * jack_bauer - time counter function
 * Return: null.
 */
void jack_bauer(void)
{
	int min = 0, hr = 0, mc = 48, hc = 48, mc1 = 48, hc1 = 48;

	while (!(hc1 == 50 && hc == 52))
	{
		while (min < 60)
		{
			_putchar(hc1), _putchar(hc);
			_putchar(':');
			_putchar(mc1), _putchar(mc);
																								_putchar('\n');
																								(mc == 57) ? (mc = 48) : mc++;
																								min++;
																								if (min % 10 == 0)
																								{
				mc1++;
																								}
																							}
		min = 0, mc = 48, mc1 = 48;
		(hc == 57) ? (hc = 48) : hc++;
		hr++;
		if (hr % 10 == 0)
		{
			hc1++;
		}
	}
}
