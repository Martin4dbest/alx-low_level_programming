#include "main.h"
#include <stdio.h>

/**
 * set_string - redirect.
 * @s: double pointer to address
 * @to: string to change pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
