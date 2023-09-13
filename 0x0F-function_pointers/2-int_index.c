#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index -	Searches for an integer
 * @array:	array to search an integer in
 * @size:	size of the array
 * @cmp:	pointer to a function to be used to compare values
 *
 * Return:	index of the first element found,
 *		or -1 if no match is found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, flag = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		flag = cmp(array[i]);

		if (flag)
			return (i);
	}

	if (!flag)
		return (-1);
	return (0);
}
