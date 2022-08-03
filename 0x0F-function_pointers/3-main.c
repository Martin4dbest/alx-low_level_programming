#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the  basic calculator
 * @argc: arguments size
 * @argv: the argument vector
 * Descrition: This program takes two numbers and an operator.
 * It performs the specified operation and prints the result to
 * standard output followed by a newline.
 * if not 4 arguments, return Error & exit 98
 * if op is null, return Error & exit 99
 * if div or mod 0, return Error & exit 100
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);

	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
