#include <stdio.h>

/**
 * main - program prints all single digits of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int iNumbers;

	iNumbers = '0';
	while (iNumbers <= '9')
	{
		putchar(iNumbers);
		iNumbers++;
	}
	putchar('\n');

	return (0);
}
