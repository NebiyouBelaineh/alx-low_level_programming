#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function creates dog struct variables
 * @name: (string) name of dog
 * @age: (float) age of dog
 * @owner: (string) owner of dog
 *
 * Return: 'dog_t' struct, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = malloc(strlen(name) + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(strlen(owner) + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog)
		return (NULL);
	}

	strcpy(n_dog->name, name);
	strcpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}
