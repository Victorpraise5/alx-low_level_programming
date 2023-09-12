#include "main.h"
#include <stdio.h>
/**
*main - prints first 98 Fibonacci numbers
*
*Return: 0 (Success)
*/
int main(void)
{
	long int prev, curr, next;
	int counter;

	prev = 1;
	curr = 2;
	next = prev + curr;

	printf("%ld, %ld", prev, curr);

	for (counter = 2; counter < 98; counter++)
	{
		if (next > 7540113804746346429)
		{		
			next = prev + curr;
			printf(", %ld", next);
			prev = curr;
			curr = next;
		}
	}
	printf("\n");
	return (0);
}
