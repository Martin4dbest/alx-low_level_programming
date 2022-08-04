#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print integers
 * @separator: the output separator
 * @n: the number of integers assed to the function  to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *sep;

	if (!separator)
		sep = "";
	else
		sep = (char *) separator;
	va_start(args, n);

	if (n > 0)
		printf("%d", va_arg(args, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(args, int));
	printf("\n");
	va_end(args);
}

