#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - select the correct function to perform an operation
 * @s: string operator to perform
 *
 * Return: If s is not one of the defined operators ('+', '-', '*', '/', '%'),
 * return NULL. If not, then return a pointer to the appropriate function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
		i++;
	}
	return (NULL);
}
