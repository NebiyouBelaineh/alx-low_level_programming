#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars and initalizes
 * it with a specific char
 * @size: (int) is the size of the array
 * @c: specific char to be filled in the array
 *
 * Return: NULL if size is 0 or if it fails, pointer to the
 * array otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * (sizeof(char)));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
