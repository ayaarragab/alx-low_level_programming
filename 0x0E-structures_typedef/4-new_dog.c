#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - func return struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to a new struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int L1, L2;

	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	L1 = strlen(name);
	L2 = strlen(owner);
	new_dog->name = malloc(L1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(L2 + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;

	return (new_dog);
}
