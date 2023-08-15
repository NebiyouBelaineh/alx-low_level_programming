#include "main.h"

/**
 * print_sign - print_sign prints +, -, or 0
 * depending on the sign of the paramenter 'n'
 * @n: n is an integer argument that will have its
 * sign checked by print_sign() function *
 *
 * Return: 1 if its sign is +, 0 if the number is 0
 * and - if its sign is -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
