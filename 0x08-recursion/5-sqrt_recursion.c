#include "main.h"

/**
 * sqrt_check - checks for the square root of v
 * @u: same number as n
 * @v: number that iterates from 1 to n
 *
 * Return: -1 or sqrt of v
 */
int sqrt_check(int u, int v)
{
	if (v * v == u)
		return (v);
	else if (v * v > u)
		return (-1);
	return (sqrt_check(v + 1, u));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Number Integer
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt_check(1, n));
}
