#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of a string
 * @str: string parameter to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len;
	int half_len;

	len = strlen(str);

	if (len % 2 == 0)
		half_len = len / 2;
	else
		half_len = (len - 1) / 2;

	for (i = half_len; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
