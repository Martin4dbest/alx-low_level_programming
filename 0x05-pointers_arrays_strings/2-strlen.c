/*
 * File: 2-strlen.c
 */

#include "main.h"
#include <string.h>
/**
 *i_strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of string.
 */
int _strlen(char *s)
{
	int  len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}

	return (strlen(s));
}
