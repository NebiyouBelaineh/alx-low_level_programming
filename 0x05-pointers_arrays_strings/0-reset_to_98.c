#include "main.h"

/**
 * void reset_to_98 - updates the value it points to 98
 * @n: pointer to variable
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int *m = n;

	*m = 98;
}
