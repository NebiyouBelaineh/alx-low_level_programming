#include "main.h"
#include <stddef.h>
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
	int i, flag;

	flag = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			flag = i;
			break;
		}
	}
	if (flag != (-1))
		return ((s + flag));
	return (NULL);
}
