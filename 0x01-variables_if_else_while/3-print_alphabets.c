#include <stdio.h>

/**
 * main - program prints alphabets in lowercase and
 * also in uppercase using putchar()
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
	iAlphabets = 'A';
	while (iAlphabets <= 'Z')
	{
		putchar(iAlphabets);
		iAlphabets++;
	}
	putchar('\n');

	return (0);
}
