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

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (k = 0; k <= i; k++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
/**
 * free_grid - frees a grid
 * @grid: grid
 * @height: number of columns
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
