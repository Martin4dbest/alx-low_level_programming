#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print a character
 * @format: list of arg types
 * c = char, f = float, i = int, s = char * (if null print (nil))
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	char *str;
	char *sep = ", ";
	int n = 0, x = 0;
	va_list args;

	va_start(args, format);

	while (format && format[x])
		x++;

	while (format && format[n])
	{
		if (n  == (x - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), sep);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(args);
}

