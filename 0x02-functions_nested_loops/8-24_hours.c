#include "main.h"
/**
 * jack_bauer - a function prints every minute
 * Return: zero
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_reminder;
	int mins_reminder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			mins_reminder = minutes % 10;
			hours_reminder = hours % 10;
			_putchar(hours_reminder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_reminder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}