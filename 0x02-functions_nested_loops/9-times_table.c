#include "main.h"
/**
*times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
	int count, countIncrement, num, output, ref;

	countIncrement = 0;

	for (count = 0; count <= 9; count++)
	{
		_putchar(48);
		for (num = 0; num < 9; num++)
		{
			ref = count;
			output = ref + (countIncrement * num);
			if (output <= 9)
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(output + 48);
			}
			else
			{
				_putchar(',');
				_putchar(32);
				_putchar((output / 10) + 48);
				_putchar((output % 10) + 48);
			}
		}
	countIncrement = countIncrement + 1;
	_putchar('\n');
	}
}
