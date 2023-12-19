#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets
 * in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int iAlphabet;
	int iLine;

	iLine = '0';
	while (iLine <= '9')
	{
		iAlphabet = 'a';
		while (iAlphabet <= 'z')
		{
			_putchar(iAlphabet);
			iAlphabet++;
		}
		_putchar('\n');
		iLine++;
	}
}
