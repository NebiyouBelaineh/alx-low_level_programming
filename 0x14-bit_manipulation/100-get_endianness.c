#include "main.h"
/**
 * get_endianness - checks for Little Endian or Big Endian of the system
 *
 * Return: 0 for big endian and 1 for little endian
 */

int get_endianness(void)
{
	size_t n = 1;

	char *num = (char *)&n;

	return ((int)*num);
}
