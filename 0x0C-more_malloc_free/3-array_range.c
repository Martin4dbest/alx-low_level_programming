#include "main.h"
#include <stdlib.h>

/**
 * array_range -  Entry point
 * @min: int
 * *@max: int
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int a;
	int b;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	b = ((max - min) + 1);
	p = malloc((sizeof(int)) * b);

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < b ; a++)
	{
		p[a] = min;
		min++;
	}
	return (p);
}

