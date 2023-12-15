#include <stdio.h>

/**
 * main - program prints alphabets in lowercase
 * except e and q using putchar()
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int iAlphabets;

	iAlphabets = 'a';
	while (iAlphabets <= 'z')
	{
		if (iAlphabets == 'e')
			iAlphabets = 'f';
		if (iAlphabets == 'q')
			iAlphabets = 'r';
		putchar(iAlphabets);
		iAlphabets++;
	}
	putchar('\n');

	return (0);
}
