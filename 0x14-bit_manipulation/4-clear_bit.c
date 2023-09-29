#include "main.h"

/**
 * clear_bit - sets the bit at specified index to 0
 *
 * @n: address of the number we want to manupilate
 * @index: position at which we want to manupilate the number
 *
 * Return: 1 for success or -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t bin_num = (sizeof(*(n)) * 11);

	if (index < bin_num)
	{
		*(n) = (~(1 << index) & *(n));
		return (1);
	}
	return (-1);
}
