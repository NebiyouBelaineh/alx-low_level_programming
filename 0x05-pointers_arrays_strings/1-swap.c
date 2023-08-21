#include "main.h"

/**
 * swap_int - swaps two integers a and b
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *m;

	m = a;
	*a = *b;
	*b = *m;
}
