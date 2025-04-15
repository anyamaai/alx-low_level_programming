#include <stdio.h>
/**
 * main - program to print numbers 1 through 100.
 *
 * Return: Always 0.
 */
int main(void)
{
	int iNumber;

	iNumber = 1;
	while (iNumber <= 100)
	{
		if (iNumber % 3 == 0 && iNumber % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (iNumber % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (iNumber % 5 == 0)
		{
			if (iNumber == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", iNumber);
		}
		iNumber++;
	}
	printf("\n");
	return (0);
}
