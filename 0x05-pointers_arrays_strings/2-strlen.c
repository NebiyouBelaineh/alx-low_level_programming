#include "main.h"

/**
 * _strlen - returns the length of the string str
 * @s: string argument(pointer)
 *
 * Return: string length
 */
int _strlen(char *s)
{
	char c;
	int i;

	c = s[0];
	i = 1;

	while (c != '\0')
	{
		c = s[i];
		i++;
	}
	return (i - 1); /* i - 1 since we don't count the '\0' character*/
}
