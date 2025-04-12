#include "main.h"
/**
 * print_diagonal - program prints line diagonally
 * @n: variable the holds the number of line to print
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int iLine1, iLine2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		iLine1 = 1;
		while (iLine1 <=n)
		{
			iLine2 = 1;
			while (iLine2 <= iLine1)
			{
				_putchar(' ');
				iLine2++;
			}
			_putchar('\\');
			_putchar('\n');
			iLine1++;
		}
	}
}
