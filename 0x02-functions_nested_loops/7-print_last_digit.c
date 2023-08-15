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
	
	ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
