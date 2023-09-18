#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program starts here
 *
 * Return: prints digits from 0 - 9; 0 otherwise
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);

	printf("\n");
	return (0);
}
