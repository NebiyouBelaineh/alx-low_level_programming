#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: integer that is less than 0, 0,  or more than 0, respectively,
 * if string 1 is less, matches
 * or is more than string 2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	flag = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else if (s1[i] > s2[i])
		{
			flag += s1[i] - s2[i];
			return (flag);
		}
		else
		{
			flag -= s2[i] - s1[i];
			return (flag);
		}
	}
	return (0);
}
