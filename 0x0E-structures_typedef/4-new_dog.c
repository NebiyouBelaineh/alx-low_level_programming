#include "dog.h"
#include <stdlib.h>
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
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	return (n_dog);
}
