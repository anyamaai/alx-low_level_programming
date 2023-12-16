#include <stdio.h>

/**
 * main - program prints single digits numbers
 * separated by commas and space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int iDigits;

	iDigits = '0';
	while (iDigits <= '9')
	{
		putchar(iDigits);

		if (iDigits < '9')
		{
			putchar(',');
			putchar(' ');
		}
		iDigits++;
	}
	putchar('\n');

	return (0);
}
