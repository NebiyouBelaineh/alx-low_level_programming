#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: (int) one dimension of the 2D array
 * @height: (int) one dimension of the 2D array
 *
 * Return: Pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int height, int width)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(width * sizeof(int *));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
		for (j = 0;  j < height; j++)
			ptr[i][j] = 0;
	return (ptr);
}
