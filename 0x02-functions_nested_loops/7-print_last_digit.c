#include "main.h"

/**
 * print_last_digit - function prints last digit of a number
 * @r: variable with number
 *
 * Return: r
 */
int print_last_digit(int r)
{
	r = r % 10;

	if (r >= 0)
		r = r;
	else
		r = -r;
	_putchar(r + '0');

	return (r);
}
