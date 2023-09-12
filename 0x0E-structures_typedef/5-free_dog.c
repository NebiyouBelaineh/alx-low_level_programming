#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated for dog_t variable
 * @d: dog_t variable to be freed from memory
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
