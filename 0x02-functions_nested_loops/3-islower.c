#include "main.h"

/**
 * _islower - _islower checks the parameter 'c' for lowercase character
 * @c: is an integer argument passed to _islower *
 *
 * Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 98 && c <= 122)
		return (1);
	else
		return (0);
}
