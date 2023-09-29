#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: is the digit to be looked at
 *
 * @index: index at which the bit we want to return is
 *
 * Return: the value of the bit at the index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t bin_num;

	bin_num = (sizeof(n) * 11);

	if (index < bin_num)
	{
		return (((1 << index) & n) >> index);
	}
	return (-1);
}
