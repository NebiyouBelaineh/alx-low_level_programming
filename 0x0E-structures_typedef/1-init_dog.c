#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type 'struct_dog'
 * @d: pointer to the address of the new variable 'my_dog'
 * @name: (string) name of dog
 * @age: (float) age of dog
 * @owner: (string) owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
