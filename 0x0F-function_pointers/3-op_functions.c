#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - 5 functions
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - 5 functions
 * @a: first variable input
 * @b: second variable input
 *
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - 5 functions
 * @a: first variable input
 * @b: second variable input
 *
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - 5 functions
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
int op_div(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - 5 functions
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
