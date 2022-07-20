#include "main.h"

/**
 * prime_check - checks if a number, n is prime
 * @x: factor check which is same as n
 * @y: possible prime number which is number that iterates from 1 to n
 *
 * Return: 1 if prime, 0 if not
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime_check(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prime_check(x, y + 1));
}
/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, 2));
}
