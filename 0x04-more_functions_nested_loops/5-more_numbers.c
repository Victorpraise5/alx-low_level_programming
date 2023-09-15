#include "main.h"
/**
*more_numbers - prints 0-14 x10
*/
void more_numbers(void)
{
	int counter, num1, num2;

	for (counter = 0; counter < 10; counter++)
	{
		for (num1 = 48; num1 < 50; num1++)
		{
			for (num2 = 48; num2 < 58; num2++)
			{
				if (num1 > 48 && num2 > 52)
				{
					break;
				}
				if (num1 > 48)
				{
					_putchar(num1);
				}
				_putchar(num2);
			}
		}
	_putchar('\n');
	}
}
