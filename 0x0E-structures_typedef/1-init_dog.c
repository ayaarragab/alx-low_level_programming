#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intitialize a struct dog variable
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
