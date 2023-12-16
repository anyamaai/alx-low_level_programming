#include <stdio.h>

/**
 * main - program prints lowercase alphabets in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char cAlphabets;

	cAlphabets = 'z';
	while (cAlphabets >= 'a')
	{
		putchar(cAlphabets);
		cAlphabets--;
	}
	putchar('\n');

	return (0);
}
