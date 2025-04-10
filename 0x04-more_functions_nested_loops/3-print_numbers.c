#include "main.h"
/**
 * print_numbers - program prints numbers 0 through 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int number;

	number = '0';
	while (number <= '9')
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
