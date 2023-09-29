#include "main.h"

/**
 * flip_bits - finds the number of bits to be flipped to get from one number
 * to another
 *
 * @n: the number to start from
 * @m: the number to get to
 *
 * Return: number of bits flipped
 */

int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t change = 0, difference = 0;

	difference = n ^ m;

	while (difference)
	{
		if (difference & 1)
			change++;
		difference = difference >> 1;
	}
	return (change);
}
