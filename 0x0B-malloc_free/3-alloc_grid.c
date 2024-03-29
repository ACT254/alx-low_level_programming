#include <stdlib.h>

/**
  * alloc_grid - returns pointer to 2D array filled with zeroes
  * @width: the number of columns
  * @height: the number of rows
  *
  * Return: a pointer to the 2D array
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* allocating memory to the rows */
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	/* allocating memory for the columns */
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
			return (NULL);
		}
	}

	/* assign elements to the array */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
