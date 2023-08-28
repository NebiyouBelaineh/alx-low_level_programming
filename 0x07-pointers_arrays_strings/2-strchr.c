#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be examined for first apperance of character 'c'
 * @c: character of interest
 *
 * Return: 's' or NULL, depending on the occurrence or absence of
 * 'c'
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
			return ((s + i));
	}
	return ('\0');
}
