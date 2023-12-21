#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function prints numbers from n to 98
 * @n: variable to be printed
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d,", n);
			}
			n--;
		}
	}
}
