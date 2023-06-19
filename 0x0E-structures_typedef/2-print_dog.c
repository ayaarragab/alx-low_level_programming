#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints dog
 * @d: struct
 * Return: Nothing
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);
	if (d->owner == NULL)
		printf("owner: (nil)");
	else
		printf("owner: %s", d->name);
	printf("Age: %f", d->age);
}
}
