#include "main.h"
/**
 * print_square - program prints a square
 * @size: varible the holds number of squares to print
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int iLine1, iLine2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		iLine1 = 1;
		while (iLine1 <= size)
		{
			iLine2 = 1;
			while (iLine2 <= size)
			{
				_putchar('#');
				iLine2++;
			}
			_putchar('\n');
			iLine1++;
		}
	}
}
