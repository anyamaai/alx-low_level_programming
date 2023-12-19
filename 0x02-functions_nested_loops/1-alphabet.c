#include "main.h"

/**
 * main - program prints alphabets in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int iAlphabet;

	iAlphabet = 'a';
	while (iAlphabet <= 'z')
	{
		_putchar(iAlphabet);
		iAlphabet++;
	}
	return (0);
}
