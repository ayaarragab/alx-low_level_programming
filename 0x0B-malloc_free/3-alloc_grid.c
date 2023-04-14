#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - make two dimensional array
 * @width: rows
 * @height: columns
 * Return: pointer to pointer to first element
 */
int **alloc_grid(int width, int height)
{
	int **ptr;

	int i;

	int j;

	int k;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	ptr = (int **)malloc((width) * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * height);
		if (ptr[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(ptr[k]);
				return (NULL);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
