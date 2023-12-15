#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program checks for the value of the last
 * digit of a random number
 * @n: variable containing random numbers
 * @srand(time(0): random number function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int iRem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	iRem = n % 10;

	if (iRem > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, iRem);

	if (iRem == 0)
		printf("Last digit of %d is %d and is 0\n", n, iRem);

	if (iRem < 6 && iRem != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, iRem);

	return (0);
}
