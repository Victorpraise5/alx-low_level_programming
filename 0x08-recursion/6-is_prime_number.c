#include "main.h"

/**
 * helper - prints 1 if the input integer is a prime number
 * @a: integer to be checked
 * @divisor: divisor for integer
 * Return: 1 if n is a prime number, 0 otherwise
 */

int helper(int divisor, int a)
{
	if (a < 2 || a % divisor == 0)
		return (0);

	else if (a == divisor)
		return (1);

	else if (a > divisor)
		helper(divisor + 1, a);

	return (1);

}

/**
 * is_prime_number - prints 1 if the input integer is a prime number
 * @n: integer to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	return (helper(2, n));
}
