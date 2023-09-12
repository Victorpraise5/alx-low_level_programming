#include <stdio.h>
#include "main.h"
/**
*print_to_98 -  prints all natural numbers from n to 98
*
*@n: starting point parameter
*/
void print_to_98(int n)
{
	int num;

	if (n > 98)
	{
		for (num = n; num > 98; num--)
		{
			printf("%d, ", num);
		}
	printf("%d\n", 98);
	}
	else if (n < 98)
	{
		for (num = n; num < 98; num++)
		{
			printf("%d, ", num);
		}
	printf("%d\n", 98);
	}
	else
	{
		printf("%d\n", 98);
	}
}
