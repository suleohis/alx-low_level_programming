#include "main.h"

/**
 * checker - Finds the square root of two numbers
 *
 * @a: The number
 * @b: The number is used to find prime number
 *
 * Return: square root
 */

int checker(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	else
		return (checker(a, b + 1));
	return (1);
}



/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: int
 *
 * Return: prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checker(n, 2));
}
