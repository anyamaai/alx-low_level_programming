#include "main.h"

/**
 * times_table - program prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int iNum1;
	int iNum2;
	int sum;

	iNum1 = 0;
	while (iNum1 <= 9)
	{
		iNum2 = 0;
		while (iNum2 <= 9)
		{
			sum = 0;
			sum = iNum1 * iNum2;

			if (sum <= 9 && iNum2 < 9)
			{
				_putchar(sum + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (sum <= 9 && iNum2 > 8)
			{
				_putchar(sum + '0');
			}
			if (sum > 9 && iNum2 < 9)
			{
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
			if (sum > 9 && iNum2 > 8)
			{
				putchar((sum / 10) + '0');
				putchar((sum % 10) + '0');
			}
			iNum2++;
		}
		iNum1++;
	}
}
