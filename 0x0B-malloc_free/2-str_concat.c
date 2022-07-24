#include <stdlib.h>

/**
 * str_concat - This is the function that concatenates two strings.
 * @s1: The input char 1
 * @s2: The input char 2
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	char *nul = "";
	unsigned int a, b, c, d;

	a = b = c = d = 0;
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	while (s1[a] != '\0')
		a += 1;
	while (s2[b] != '\0')
		b += 1;
	b += 1;
	cat = malloc((a + b) * sizeof(*cat));
	if (cat == NULL)
		return (NULL);
	while (s1[c] != '\0')
	{
		cat[c] = s1[c];
		c += 1;
	}
	while (s2[d] != '\0')
	{
		cat[c] = s2[d];
		d += 1;
		c += 1;
	}
	cat[c] = '\0';
	return (cat);
}
