#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _puts - prints a string followed by newline to stdout
 * @str: string parameter
 *
 * Return: void
 */
void _puts(char *str)
{
	int len;
	int output;

	len = strlen(str);
	output = 1;

	write(output, str, len);

	_putchar('\n');
}
