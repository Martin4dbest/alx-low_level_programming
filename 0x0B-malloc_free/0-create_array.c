#include <stdlib.h>

/**
 * create_array - create an array of chars, with a specific char.
 * @size: this is input for size
 * @c: input char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int x = 0;

	if (size != 0)
		ar = malloc(size * sizeof(char));
	else
		return (NULL);
	if (ar == NULL)
		return (NULL);
	while (x < size)
	{
		ar[x] = c;
		x += 1;
	}
	return (ar);
}
