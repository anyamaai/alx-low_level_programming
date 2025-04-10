#include "main.h"
/**
 * more_numbers - program prints 10 times the numbers 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int line, number;

	line = 0;
	while (line <= 9)
	{
		number = 0;
		while (number <= 14)
		{
			if (number > 9)
			{
				_putchar('0' + (number / 10));
			}
			_putchar('0' + (number % 10));
			number++;
		}
		_putchar('\n');
		line++;
	}
}
