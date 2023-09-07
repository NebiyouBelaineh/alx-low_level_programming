#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * fillmem -	fills memory of the array pointed to by str
 * @str:	array to be filled by the byte 'c'
 * @n:		number of elements to be filled by the byte 'c'
 * @c:		char to fill the elements in the array
 *
 * Return:	pointer to the array after memory fill
 */

char *fillmem(char *str, unsigned int n, char c)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		*(str + count) = c;

	return (str);
}

/**
 * _calloc -	Allocates memory for an array of 'nmemb' element
 *		of 'size' bytes using malloc()
 * @nmemb:	number of elements in the array
 * @size:	size of each element in the array
 *
 * Return:	If nmemb or size is zero, NULL is returned.
 *		Otherwise pointer to the array is returned.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	fillmem(arr, (nmemb * size), 0);

	return (arr);
}
