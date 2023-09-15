#include "main.h"
/**
*print_diagonal - print \ n times followed by a new line
*
*@n: number of times to print
*/
void print_diagonal(int n)
{
	int counter1, counter2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter1 = 1; counter1 <= n; counter1++)
		{
			for (counter2 = 0; counter2 < (counter1 - 1); counter2++)
			{
				_putchar(32);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
