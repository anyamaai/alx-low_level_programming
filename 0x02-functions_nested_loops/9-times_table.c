#include "main.h"

/**
 * times_table - program prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	const int iTable = 9;
	int iNum1;
	int iNum2;


	iNum1 = 0;
	while (iNum1 <= iTable)
	{
		iNum2 = 0;
		while (iNum2 <= iTable)
		{
			int iproduct = iNum1 * iNum2;

			if (iNum2 == 0)
			{
				_putchar((iproduct % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (iproduct <= 9)
				{
					_putchar(' ');
				}
				if (iproduct > 9)
				{
					_putchar((iproduct / 10) + '0');
				}
				_putchar((iproduct % 10) + '0');
			}
			iNum2++;
		}
		_putchar('\n');
		iNum1++;
	}
}
