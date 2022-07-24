#include <stdlib.h>

/**
 * argstostr - this function concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *ar, *str;
	int x, y, cont;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			y++;
			cont++;
		}
		cont++;
	}
	cont += 1;
	ar = malloc(cont * sizeof(char));
	if (ar == NULL)
		return (NULL);
	str = ar;
	for (x = 0; x < ac; x++)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			*ar = av[x][y];
			y++;
			ar++;
		}
		*ar = '\n';
		ar++;
	}
	return (str);
}

