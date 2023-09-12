#include "main.h"
/**
*jack_bauer - prints every minute of the day of Jack Bauer
*/
void jack_bauer(void)
{
	char char1, char2, char3, char4;

	for (char1 = '0'; char1 < '3'; char1++)
	{
		for (char2 = '0'; char2 <= '9'; char2++)
		{
			if (char1 == '2' && char2 == '4')
			{
				break;
			}
			for (char3 = '0'; char3 < '6'; char3++)
			{
				for (char4 = '0'; char4 <= '9'; char4++)
				{
					_putchar(char1);
					_putchar(char2);
					_putchar(':');
					_putchar(char3);
					_putchar(char4);
					_putchar('\n');
				}
			}
		}
	}
}
