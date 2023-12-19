#include "main.h"

/**
 * print_alphabet - program prints alphabets in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int iAlphabet;

	iAlphabet = 'a';
	while (iAlphabet <= 'z')
	{
		_putchar(iAlphabet);
		iAlphabet++;
	}
	_putchar('\n');
}
