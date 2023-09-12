#include "main.h"
#include <stdio.h>
/**
*main -  prints the sum of the even-valued terms below 4000000
*
*Return: 0 (success)
*/
int main(void)
{
	int prev, curr, next, total, ref;

	prev = 1;
	curr = 2;
	next = prev + curr;
	ref = 4000000;
	total = 2;

	for (; next <= ref;)
	{
		next = prev + curr;
		if ((next % 2) == 0)
		{
			total = total + next;
		}
		prev = curr;
		curr = next;
	}
	printf("%d", total);
	printf("\n");
	return (0);

}
