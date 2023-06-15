#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc when checked
 * @b: num bytes
 * Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
	{
		return (NULL);
	}
	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
