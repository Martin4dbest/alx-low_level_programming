#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and  print the result of the multiplication,
 * @argc: int.
 * @argv: char.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;
	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else if (argc == 3)
	{
		for (a = 0 ; a < argc ; a++)
		{
			if (a == 1)
			{
				b = atoi(argv[a]);
			}
			else if (a == 2)
			{
				c = atoi(argv[a]);
			}
		}
	mult = b * c;
	printf("%d\n", mult);
	}
	return (0);
}

