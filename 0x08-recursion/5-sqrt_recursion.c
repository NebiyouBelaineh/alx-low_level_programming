#include "main.h"
/**
 * _sqrt_finder - calculates sqrt by checking i*i
 * @num: number we are looking the square root for
 * @i: possible square root of num
 *
 * Return: square root (int) or -1
 */
int _sqrt_finder(int num, int i)
{
	if ((i * i) > num)
		return (-1);
	else if ((i * i) == num)
		return (i);
	else
		return (_sqrt_finder(num, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of n
 * @n: number we are looking the square root for
 *
 * Return: square root (int) or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_finder(n, 1));
}
