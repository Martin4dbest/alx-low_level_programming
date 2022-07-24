#include<stdlib.h>

/**
 * free_grid - This function that frees a 2 dimensional grid previously created
 * by my alloc_grid function.
 * @grid: this is the array to free
 * @height: This is height of the array
 *
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
