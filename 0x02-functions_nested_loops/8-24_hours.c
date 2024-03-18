#include "main.h"

/**
 * jack_bauer - program that display 24 hour digital clock
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int iHour;
	int iMinute;

	iHour = 0;
	while (iHour < 24)
	{
		iMinute = 0;
		while (iMinute < 60)
		{
			_putchar((iHour / 10) + '0');
			_putchar((iHour % 10) + '0');
			_putchar(':');
			_putchar((iMinute / 10) + '0');
			_putchar((iMinute % 10) + '0');
			_putchar('\n');
			iMinute++;
		}
		iHour++;
	}
	return (0);
}
