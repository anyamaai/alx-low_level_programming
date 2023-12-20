#include "main.h"

/**
 * print_last_digit - function prints last digit of a number
 * @r: variable with number
 *
 * Return: r
 */
int print_last_digit(int r)
{
	int iRem;

	if (r < 0)
		r = -r;
	else
		r = r;

	iRem = _putchar('0' + r % 10);
	return (iRem);
}
