#include "main.h"
#include <math.h>
/**
 * get_position - returns the binary number decimal after
 * multiplying it by the 2 base position
 *
 * @bin_num: decimal number to be returned after multiplication
 * by base of 2
 * @position: base 2 position
 *
 * Return: unsigned integer decimal number multiplied by base 2 position
 */
unsigned int get_position(size_t bin_num, size_t position)
{
	size_t index;

	if (position == 1)
		return (1 * bin_num);
	for (index = 1; index < position; index++)
		bin_num *= 2;
	return (bin_num);

}
/**
 *binary_to_uint - converts a number to an unsigned integer
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	size_t bin_num = 0, position = 1;
	int index;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] == '0' || b[index] == '1')
			continue;
		else
			return (0);
	}
	for (index -= 1; index >= 0; index--)
	{
		bin_num += get_position((size_t)(b[index] - 48), position);
		position++;
	}
	return (bin_num);
}
