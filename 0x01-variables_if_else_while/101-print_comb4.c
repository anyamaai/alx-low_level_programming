#include <stdio.h>

/**
 * main - program prints all possible combinataion
 * of three digits
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int iDigit1;
	int iDigit2;
	int iDigit3;

	iDigit1 = 0;
	while (iDigit1 <= 7)
	{
		iDigit2 = iDigit1 + 1;
		while (iDigit2 <= 8)
		{
			iDigit3 = iDigit2 + 1;
			while (iDigit3 <= 9)
			{
				putchar('0' + iDigit1);
				putchar('0' + iDigit2);
				putchar('0' + iDigit3);

				if (iDigit1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
				iDigit3++;
			}
			iDigit2++;
		}
		iDigit1++;
	}
	putchar('\n');
	return (0);
}
