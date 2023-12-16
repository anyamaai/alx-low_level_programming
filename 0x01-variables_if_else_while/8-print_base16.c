#include <stdio.h>

/**
 * main - program prints all numbers in base 16
 * in lowercase using putchar()
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int iHexadecimal;

	iHexadecimal = '0';
	while (iHexadecimal <= '9')
	{
		putchar(iHexadecimal);
		iHexadecimal++;
	}
	iHexadecimal = 'a';
	while (iHexadecimal <= 'f')
	{
		putchar(iHexadecimal);
		iHexadecimal++;
	}
	putchar('\n');

	return (0);
}
