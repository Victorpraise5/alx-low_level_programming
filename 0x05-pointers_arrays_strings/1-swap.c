#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swapped with b
 * @b: integer to be swapped with a
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp; /*temporary variable to contain value of 1 pointer */

	temp = *a; /*value of *a saved in temp */
	*a = *b;   /*value of *b saved in *a */
	*b = temp; /*value of temp(initial value of *a) now saved in *b */
}
