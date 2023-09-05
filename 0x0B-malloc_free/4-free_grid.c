#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees a 2D array from memory
 * @grid: pointer to a 2D array
 * @height: one dimension of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
