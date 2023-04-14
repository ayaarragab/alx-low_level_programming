#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - ALLOCATES MEMORY FOR 2D array
 * @width: rows
 * @height: columns
 * Return: pointer to first element pointer
 */
int **alloc_grid(int width, int height)
{
	int i;

	int j;

	int k;

	int **grid;

	size_t __attribute__ ((unused)) size = width * height * sizeof(int);

	grid = (int **)malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
