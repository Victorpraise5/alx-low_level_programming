#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int ref, primeFactor;

	ref = 612852475143;
	for (primeFactor = 2; primeFactor <= ref; primeFactor++)
	{
		if (ref % primeFactor == 0)
		{
			ref = ref / primeFactor;
			primeFactor--;
		}
	}
	printf("%ld\n", primeFactor);
	return (0);
}
