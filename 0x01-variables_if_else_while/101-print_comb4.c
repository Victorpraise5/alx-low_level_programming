#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program starts here
 * Description: prints all possible combos of three digits
 * Prints only the smaller combination of three digits
 * Numbers printed in ascending order, with three digits
 * Should be separated by a comma
 * Should only use putchar, max of 6 times
 * Return: List of combinations; 0 otherwise
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == 56 && k == 57)
					continue;

				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');
	return (0);
}
