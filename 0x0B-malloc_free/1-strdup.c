#include <stdlib.h>

/**
 * _strdup - this returns a pointer to a newly allocated space in the memory
 * that contains a copy of the string given as a parameter.
 * @str: this is the input char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int a = 0;
	unsigned int b = 0;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a += 1;
	a += 1;
	dup = malloc(a * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (b < a)
	{
		dup[b] = str[b];
		b += 1;
	}
	return (dup);
}

