#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - implementation of calloc
 * @nmemb : n.things
 * @size: size
 * Return: void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *space;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	space = malloc(nmemb * size);
	if (space == NULL)
	{
		free(space);
		return (NULL);
	}
	memset(space, 0, nmemb * size);
	return (space);
}
