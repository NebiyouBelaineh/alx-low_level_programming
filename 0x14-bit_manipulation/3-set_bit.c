#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: address of the number we want to manupliate the bit at index position
 * @index: position of the number we want to manupliate
 *
 * Return: 1 for success or -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	size_t bin_num = (sizeof(*(n)) * 11);

	if (index < bin_num)
	{
		*(n) = ((1 << index) | *(n));
		return (1);
	}
	return (-1);
}
