#include "main.h"

/**
 * _abs - _abs(int) function computes the absolute value of an integer
 * @n: takes integer argument 'n' to have their absolute value computed
 *
 * Return: returns the absolute value of argument
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (n * (-1));
}
