#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this prints name
 * @name: this is for name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
