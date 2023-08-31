#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if they are
 * identical, 0 other wise
 * @s1: string 1
 * @s2: string 2
 * Return: 1 for identical and or 0 otherwise, (int)
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
