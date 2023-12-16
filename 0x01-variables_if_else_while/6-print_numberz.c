#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * using putchar
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
