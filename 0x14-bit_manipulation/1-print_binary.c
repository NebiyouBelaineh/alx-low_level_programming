
#include "main.h"

/**
 * print_binary - prints binary representaion of a number
 *
 * @n: is the unsigned long number that we want to print in
 * binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	size_t bin_num;
	int index;

	for (index = 10; index >= 0; index--)
	{
		bin_num = n >> index;
		if (bin_num & 1)
			_putchar(1 + 48);
		else
			_putchar(0 + 48);
	}
}
