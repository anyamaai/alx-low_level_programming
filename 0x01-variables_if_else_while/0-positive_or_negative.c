#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program tells if output is zero, positive
 * or negative number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	if (n == 0)
		printf("%d is zero\n", n);

	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
