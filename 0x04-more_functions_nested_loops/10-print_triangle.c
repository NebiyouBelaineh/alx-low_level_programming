#include "main.h"

/**
 * print_triangle - prints a triangle of size n
 * @n: size for triangle
 * Return: void
 */

void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = n - 1 ; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i + 1; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
