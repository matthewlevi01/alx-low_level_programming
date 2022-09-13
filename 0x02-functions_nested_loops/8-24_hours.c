#include "main.h"

/**
 * jack_bauer - entry point
 * Description: prints hours and minutes
 * Return: time
 */

void jack_bauer(void)
{
	int hour = 0;

	for (hour = 0; hour < 24; hour++)
	{
		int minute = 0;

		for (minute = 0; minute <= 59; minute++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}

