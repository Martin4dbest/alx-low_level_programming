#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: This is the input row
 * @height: This is the input column
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int w, x, y, z;

	w = x = y = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	/*typecasting is used below*/
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		arr[w] = malloc(width * sizeof(int));
		if (arr[w] == NULL)
		{
			for (z = 0; z < w; z++)
				free(arr[z]);
			free(arr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
	arr[x][y] = 0;
	}
	return (arr);
}
