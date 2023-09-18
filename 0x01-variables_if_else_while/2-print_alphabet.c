#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program starts here
 *
 * Return: prints alphabet in lowercase; 0 otherwise
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
