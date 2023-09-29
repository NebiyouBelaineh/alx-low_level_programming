
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

	if (n >> 1)
		print_binary(n >> 1);
	bin_num = n & 1;
	_putchar(bin_num + 48);
}
