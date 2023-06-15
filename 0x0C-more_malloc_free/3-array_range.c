#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - creats an array
 * @min: minimum
 * @max: maximum
 * Return: integer pointer on array
*/
int *array_range(int min, int max)
{
	int *array;

	int numbers_length, k, n;

	if ((unsigned int)(max - min) >= (unsigned int)((__SIZE_MAX__) / sizeof(int)))
	{
		return (NULL);
	}
	if (min > max)
		return (NULL);
	numbers_length = max - min + 1;
	array = (int *)malloc(numbers_length * sizeof(int));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	n = min;
	for (k = 0; k < numbers_length && n <= max; k++)
	{
		array[k] = n;
		n++;
	}
	return (array);
}
