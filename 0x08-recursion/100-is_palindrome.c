#include "main.h"
#include <string.h>
#include <stdio.h>
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
	int result;

	if (i < (len / 2))
	{
		if (*(start + i) != *(end - i))
		{
			printf("Different: %c vs %c \n", *(start + i), *(end - i));
			return (0);
		}
		printf("Similar: %c vs %c \n", *(start + i), *(end + i));
		i++;

		result = palindrome(start, end, len, i);
	}
	return (result);
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
