#include "main.h"

/**
 *jack_bauer - prints every minute of JB, from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int min, hour;
	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(10);
		}
	}
}
