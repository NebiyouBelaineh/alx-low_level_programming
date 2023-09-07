#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc -	Allocates memory for an array of 'nmemb' element
 *		of 'size' bytes using malloc()
 * @nmemb:	number of elements in the array
 * @size:	size of each element in the array
 *
 * Return:	If nmemb or size is zero, NULL is returned.
 * 		Otherwise pointer to the array is returned.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i += size)
		*(arr + i) = '\0';
	return (arr);
}
