#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range -	Creates an array of integers from min to
 *			max (both included)
 * @min:		1st element of the array
 * @max:		last element of the array
 *
 * Return:		Pointer to the newly created array. If
 *			min > max, return NULL.
 */
int *array_range(int min, int max)
{
	int i, len = 0, *arr;

	if (min > max)
		return (NULL);

	len = max - min;

	arr = malloc((len + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		arr[i] = min++;

	return (arr);
}
