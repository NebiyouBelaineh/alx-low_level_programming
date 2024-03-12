#include "search_algos.h"
/**
* jump_search - searches for a value in a sorted array of integers using the
* Jump search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: the first index where value is located, -1 otherwise
*/
int jump_search(int *array, size_t size, int value)
{
	size_t index, block, high;

	if (array == NULL || size == 0 || value < array[0] || value >
	array[size - 1])
		return (-1);
	block = floor(sqrt(size));
	high = block;

	for (index = 0; index < size && high < size;)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		else if (array[index] < value && array[high] < value)
		{
			index += block;
			high += block;
		}
		/* Case where value is on the right side of the current index */
		else if ((array[index] < value) || array[index] > value)
		{
			break;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", index, high);
	while (index < size)/* Do linear search on the remaining index */
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
