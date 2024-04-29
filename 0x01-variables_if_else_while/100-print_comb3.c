#include <stdio.h>

/**
 * main - program that prints possible
 * combination of two digits 0 - 9
 *
 * Return: Always 0.
 */
int main(void)
{
	int ifirstNum;
	int isecondNum;

	ifirstNum = 0;
	while (ifirstNum <= 8)
	{
		isecondNum = ifirstNum + 1;
		while (isecondNum <= 9)
		{
			putchar('0' + ifirstNum);
			putchar('0' + isecondNum);

			if (ifirstNum != 8)
			{
				putchar(',');
				putchar(' ');
			}
			isecondNum++;
		}
		ifirstNum++;
	}
	putchar('\n');
	return (0);
}
