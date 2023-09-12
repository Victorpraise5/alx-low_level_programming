#include "main.h"
/**
*print_times_table - prints the n times table, starting with 0
*
*@n: parameter integer
*/
void print_times_table(int n)
{
	int count, countIncrement, num, output, ref;

	countIncrement = 0;
	if (n < 0 || n > 15)
	{
	}
	else
	{
	for (count = 0; count <= n; count++)
	{
		_putchar(48);
		for (num = 0; num < n; num++)
		{
			_putchar(',');
			_putchar(32);
			ref = count;
			output = ref + (countIncrement * num);
			if (output <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(output + 48);
			}
			else if (output <= 99)
			{
				_putchar(32);
				_putchar((output / 10) + 48);
				_putchar((output % 10) + 48);
			}
			else
			{
				_putchar((output / 100) + 48);
				_putchar(((output % 100) / 10) + 48);
				_putchar((output % 10) + 48);
			}
		}
	countIncrement = countIncrement + 1;
	_putchar('\n');
	}
	}
}
