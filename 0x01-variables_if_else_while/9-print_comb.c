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

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
