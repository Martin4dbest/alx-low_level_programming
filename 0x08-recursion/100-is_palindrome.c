#include "main.h"

/**
 * check_palindrome - obtains length of x
 * @x: string
 * @l: integer to count length
 *
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(char *x, int l)
{
	if (*x == 0)
		return (l - 1);
	return (check_palindrome(x + 1, l + 1));
}
/**
 * palind1 - compares string vs string reverse
 * @x: string
 * @l: length
 * Return: On success 1.
 */
int palind1(char *x, int l)
{
	if (*x != *(x + l))
		return (0);
	else if (*x == 0)
		return (1);
	return (palind1(x + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int l;

	l = check_palindrome(s, 0);
	return (palind1(s, l));
}
