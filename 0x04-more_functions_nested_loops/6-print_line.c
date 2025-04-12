#include "main.h"
/**
 * print_line - program prints line
 * @n: variable that holds number of lines to print
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int line;

	line = 1;
	while (line <= n)
	{
		if (n == 0 || n < 0)
		{
			break;
		}
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
