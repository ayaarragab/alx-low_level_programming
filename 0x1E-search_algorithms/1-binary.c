#include "search_algos.h"
/**
 * binary_search - searches array using the Binary search algorithm
 * @array: array of integers
 * @size: size
 * @value: value to be searched for
 * Return: -1 if faliure and the index if success
*/
int binary_search(int *array, size_t size, int value)
{
	size_t r = size - 1, l = 0, mid, i;

	while (l <= r && array != NULL)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
			{
				printf("%d\n", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		mid = (r + l) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
