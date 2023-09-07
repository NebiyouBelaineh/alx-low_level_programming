#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * malloc_checked - allocates memory using malloc()
 * @b: (unsigned int) size of the space to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
