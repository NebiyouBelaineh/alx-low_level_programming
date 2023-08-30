#include "main.h"
#include <string.h>

/**
 * prt_rstr - prints a string a string
 * @s: string to be printed
 * @len: length of string
 * @i: index to monitor postion of characters inside
 * the string
 */

void prt_rstr(char *s, int len, int i)
{
	if (*(s + 1) != '\0' && i < len)
	{
		_putchar(*(s + len - i));
		i++;
		prt_rstr(s, len, i);
	}
	else
	{
		_putchar('\n');
		return;
	}
}

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	int len, i = 1;

	if (*s == '\0')
		return;

	len = strlen(s);
	prt_rstr(s, len, i);
}
