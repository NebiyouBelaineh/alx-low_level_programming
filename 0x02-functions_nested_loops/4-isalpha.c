#include "main.h"

/**
 * _isalpha - _isalpha checks parameter for alphabetic character
 * @c: is an integer argument to be checked as an alphabetic character *
 *
 * Return: 1 if c is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
