#include "main.h"

/**
 * print_last_digit - prints the last digit of
 * the argument passed to the function
 * @n: integer argument that will have its last digit printed out
 *
 * Return: last digit is returned
 */

int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
	{
		ld = n % 10;

	}
	else
	{
		ld = (n * (-1)) % 10;
	}

	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');

	return (ld);
}
