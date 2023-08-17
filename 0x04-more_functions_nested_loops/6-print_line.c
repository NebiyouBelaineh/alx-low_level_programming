#include "main.h"

/**
 * print_line - prints a line 'n' times
 * @n: parameter for print_line function to specify
 * length of line
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');

		_putchar('\n');
	}
	else
		_putchar('\n');
}
