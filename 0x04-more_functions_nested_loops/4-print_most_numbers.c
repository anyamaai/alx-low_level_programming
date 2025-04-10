#include "main.h"
/**
 * print_most_numbers - program prints numbers 0 through 9 skipping 2 and 4
 *
 * Return: always 0.
 */
void print_most_numbers(void)
{
	int number;

	number = '0';
	while (number <= '9')
	{
		if (number == '2' || number == '4')
		{
			number++;
		}
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
