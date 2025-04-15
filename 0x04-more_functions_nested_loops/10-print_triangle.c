#include "main.h"
/**
 * print_triangle - program prints triangles
 * @size: variable that holds number of triangles to print
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int iLine1, iLine2;

	iLine1 = 1;
	while (iLine1 <= size)
	{
		iLine2 = 1;
		while (iLine2 <= size)
		{
			if (iLine1 + iLine2 <= size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			iLine2++;
		}
		_putchar('\n');
		iLine1++;
	}
}
