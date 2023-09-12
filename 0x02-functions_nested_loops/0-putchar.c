#include "main.h"
/**
*main - print _putchar
*
*Return: 0 (Success)
*/
int main(void)
	{
		char letter[] = {95, 112, 117, 116, 99, 104, 97, 114};
		int i;

			for (i = 0; i < 8; i++)
			{
				_putchar(letter[i]);
			}
		_putchar('\n');
		return (0);
	}
