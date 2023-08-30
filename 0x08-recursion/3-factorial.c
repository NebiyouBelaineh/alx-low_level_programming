#include "main.h"
/**
 * factorial - returns the factorial of a given number,
 *if the number is lower than 0, then it
 *returns -1 to indicate error.
 * @n: integer number
 *
 * Return: Factorial of 'n' or -1
 */
int factorial(int n)
{
	int num = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	return (num * factorial(n - 1));
}
