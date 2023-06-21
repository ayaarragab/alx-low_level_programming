#include "function_pointers.h"
/**
 * int_index - searches for a number
 * @array: array
 * @size: size
 * @cmp: compare
 * Return: index of the first element if cmp have not returned 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	res = 0;
	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
	}
	if (res == 0)
		return (-1);
	return (-1);
}
