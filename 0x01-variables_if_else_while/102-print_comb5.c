#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program starts here
 * Description: prints all possible combos of two two digits
 * Prints only the smaller combination
 * Numbers printed in ascending order, with two digits
 * Should be separated by a comma
 * Should only use putchar, max of 8 times
 * Return: List of combinations; 0 otherwise
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
