#include "main.h"

/**
 * print_last_digit - function prints last digit of a number
 * @r: variable with number
 *
 * Return: r
 */
int print_last_digit(int r)
{
	if (r < 0)
		r = -r;
	else 
		r = r;

	r = r % 10;
	return(_putchar(r + '0'));
}
