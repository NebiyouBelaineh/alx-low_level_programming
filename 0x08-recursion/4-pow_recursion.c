#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of
 * y
 * @x: base number
 * @y: power
 *
 * Return: integer x raised to the power of my
 */
int _pow_recursion(int x, int y)
{
	int power = y, base = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	if (power > 0)
	{
		power--;
		base *= _pow_recursion(x, power);
	}
	return (base);
}
