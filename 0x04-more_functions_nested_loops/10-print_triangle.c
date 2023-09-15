#include "main.h"
/**
*print_triangle -  prints a triangle, followed by a new line
*
*@size: size of triangle
*/
void print_triangle(int size)
{
	int counter1, counter2, counter3;

	if (size > 0)
	{
		for (counter1 = 1; counter1 <= size; counter1++)
		{
			for (counter2 = 1; counter2 <= (size - counter1); counter2++)
			{
				_putchar(32);
			}
			for (counter3 = 0; counter3 <= (size - counter2); counter3++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
