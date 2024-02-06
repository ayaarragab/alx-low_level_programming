#include "search_algos.h"
/**
 * linear_search - searches array using the Linear search algorithm
 * @array: array of integers
 * @size: size
 * @value: value to be searched for
 * Return: -1 if faliure and the index if success
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
				return (i);
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
