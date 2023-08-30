#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: string which we are looking to find the length of
 *
 * Return: length of the string (int)
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*(s) != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
