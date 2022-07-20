#include "main.h"

/**
 * wildcmp - this function compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @m: string to compare to
 * @n: string with wild character
 *
 * Return: if successful 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int wildcmp(char *m, char *n)
{
	if (*m == '\0' && *n == '\0')
		return (1);
	if (*m == *n)
		return (wildcmp(m + 1, n + 1));
	if (*n == '*')
	{
		if (*n == '*' && *(n + 1) != '\0' && *m == '\0')
			return (0);
		if (wildcmp(m, n + 1) || wildcmp(m + 1, n))
			return (1);
	}
	return (0);
}
