#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocating grid
 * @width: width
 * @height: height
 * Return: pointer on 2d array w*h
*/
int **alloc_grid(int width, int height)
{
	unsigned int size;

	int **arr_2d, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	size = width * sizeof(int *);
	if (size == 0)
	{
		return (NULL);
	}
	arr_2d = (int **)malloc(size);
	if (arr_2d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		arr_2d[i] = (int *)malloc(sizeof(int) * height);
		if (arr_2d[i] == NULL)
		{
			for (j = 0; j < i; i++)
			{
				free(arr_2d[j]);
			}
			free(arr_2d);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			arr_2d[i][j] = 0;
		}
	}
	return (arr_2d);
}
