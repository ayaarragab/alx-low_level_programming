#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - func
 * @size: size of the array
 * @action: func doing sth with size
 * @array: array
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
