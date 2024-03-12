#include "search_algos.h"
/**
* interpolation_search - searches for a value in a sorted array of integers
* using the Interpolation search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: the first index where value is located, -1 otherwise
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, position;

	if (array == NULL || size == 0)
		return (-1);
	low = 0, high = size - 1;
	position = (low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low])));

	while (position < size)
	{
		printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);
		else if (array[position] > value) /* search left half */
		{
			low = 0, high = position - 1;
			position = (low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low])));
		}
		else
		{
			low = position, high = size - 1;
			position = (low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low])));
		}
	}
	if (position > size)
		printf("Value checked array[%ld] is out of range\n", position);
	return (-1);
}
