#include "main.h"
#include <stdio.h>
/**
*main - prints the sum of all the multiples of 3 or 5 below 1024
*
*Return: 0 (Success)
*/
int main(void)
{
	int total, ref, num;

	ref = 1024;
	total = 0;

	for (num = 0; num < ref; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			total = total + num;
		}
	}
	printf("%d\n", total);
	return (0);
}
