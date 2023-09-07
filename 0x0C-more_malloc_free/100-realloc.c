#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc -	reallocates a memory block using malloc and free
 * @ptr:	pointer to the memory previously allocated with
 *		a call to malloc: malloc(old_size)
 * @old_size:	size in bytes of allocated space for ptr
 * @new_size:	new size in bytes of new memory bloack
 *
 * Return:	NULL, if new_size is 0 and ptr is not NULL,
 *		Pointer to newly allocated memory if new_size >
 *		old_size,
 *		if new_size == old_size, returns ptr,
 *		or if ptr is NULL, returns malloc(new_size)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		free(ptr);
		return (mem);
	}

	mem = ptr;
	mem = malloc(new_size);
	free(ptr);
	return (mem);
}
