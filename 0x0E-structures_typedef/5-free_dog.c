#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees a dog structure
 * @d: struct
 * Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d != NULL || d->name != NULL || d->owner != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
