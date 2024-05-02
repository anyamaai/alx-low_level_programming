#include <stdio.h>

/**
 * main - program prints all possible combinations of
 * two two digits number
 *
 * Return: Always 0(success).
 */

int main(void)
{
	int iDigit1;
	int iDigit2;

	iDigit1 = 0;
	while (iDigit1 <= 98)
	{
		iDigit2 = iDigit1 + 1;
		while (iDigit2 <= 99)
		{
			putchar('0' + (iDigit1 / 10));
			putchar('0' + (iDigit1 % 10));
			putchar(' ');
			putchar('0' + (iDigit2 / 10));
			putchar('0' + (iDigit2 % 10));

			if (!(iDigit1 == 98 && iDigit2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
			iDigit2++;
		}
		iDigit1++;
	}
	putchar('\n');

	return (0);
}
