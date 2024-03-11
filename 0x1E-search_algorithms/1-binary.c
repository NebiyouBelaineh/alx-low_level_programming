#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of integers using
* the Binary search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: the first index where value is located, -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, index;

	if (array == NULL)
		return (-1);
	left = 0, right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (index = left; index <= right; index++)
		{
			printf("%d", array[index]);
			if ((right - index) >= 1)
				printf(", ");
		}
		printf("\n");
		middle = floor((left + right) / 2);
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
