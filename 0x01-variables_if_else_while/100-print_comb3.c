#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program starts here
 * Description: prints all possible combos of two digits
 * Prints only the smaller combination of two digits
 * Numbers printed in ascending order, with two digits
 * Should be separated by a comma
 * Should only use putchar, max of 5 times
 * Return: List of combinations; 0 otherwise
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
				continue;

			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
