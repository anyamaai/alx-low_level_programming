#include "main.h"

/**
 * _isupper - function checks for upper character
 * @c: variable for character checks
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
