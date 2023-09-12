#include "main.h"
/**
*print_alphabet_x10 - outputs alphabets x10
*/
void print_alphabet_x10(void)
{
	int count;
	char lower;

	for (count = 1; count <= 10; count++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
