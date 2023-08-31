#include "main.h"
#include <string.h>
/**
 * palindrome - supports is_palindrome function
 * @start: starting position
 * @end: string end point
 * @len: length of the string
 * @i: tracker
 *
 * Return: 1 for plaindrome, 0 otherwise (int)
 */
int palindrome(char *start, char *end, int len, int i)
{
	if (i < (len + 1) / 2)
	{
		if (*(start + i) != *(end - i) && *(start) != *(end))
		{
			return (0);
		}
		else
		{
		i++;
		palindrome(start, end, len, i);
		}
	}
	return (1);
}
/**
 * is_palindrome - checks for palindrome
 * @s: string to be checked
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s), res;
	char *start, *end;

	start = s;
	end = s + len - 1;

	if (*s == '\0')
		return (1);

	res = palindrome(start, end, len, 0);

	return (res);
}
