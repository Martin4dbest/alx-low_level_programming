#include <stdio.h>
#include <stdlib.h>
/**
 * main - that adds positive numbers.
 * @argc: int.
 * @argv: char.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int u;
	int v;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (u = 1; u < argc; u++)
	{
		for (v = 0; argv[u][v] != '\0'; v++)
		{
			if (argv[u][v] < '0' || argv[u][v] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[u]);
	}
	printf("%d\n", sum);
	return (0);
}

