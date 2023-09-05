#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: (int) one dimension of the 2D array
 * @height: (int) one dimension of the 2D array
 *
 * Return: Pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	ptr = (int **)malloc(width * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0;  j < height; j++)
			ptr[i][j] = 0;
	return (ptr);
}
