#include <stdlib.h>

/**
  * free_grid - frees the pointer to a pointer called grid
  * @grid: the pointer to the 2D array to be freed
  * @height: the number of rows in the grid
  * Return: nothing
  */

void free_grid(int **grid, int height)
{
	int j;

	free(grid);
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
}
