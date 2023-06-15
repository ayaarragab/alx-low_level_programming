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

	int numbers_length, i, k, n;

	if (min > max)
		return (NULL);
	numbers_length = 1;
	for (i = min; i <= max; i++)
		numbers_length++;
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
