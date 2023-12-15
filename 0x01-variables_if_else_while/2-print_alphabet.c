#include <stdio.h>

/**
 * main - program prints the alphabets in lowercase
 * using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int iAlphabets;

	iAlphabets = 'a';

	while (iAlphabets <= 'z')
	{
		putchar(iAlphabets);
		iAlphabets++;
	}
	putchar('\n');

	return (0);
}
