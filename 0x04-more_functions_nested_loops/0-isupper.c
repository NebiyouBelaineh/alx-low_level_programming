#include "main.h"
/**
 * _isupper - checks character if it's uppercase or lowercase
 * @c: character argument for _isupper function
 * Return: 1 for uppercase and 0 for lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
