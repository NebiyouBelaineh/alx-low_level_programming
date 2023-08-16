#include "main.h"

/**
 * print_times_table - prints a times table of 'n' starting
 * from 0
 * @n: n is an integer
 *
 * Return: void
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n < 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z > 99)
				{
					_putchar(z / 100 + '0');
					_putchar((z / 10) % 10 + '0');
				}
				if (z > 9 && z <= 99)
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
				if (y == n)/*comma*/
					continue;
				_putchar(',');
				if (x * (y + 1) >= 100)/*spaces*/
					_putchar(' ');
				else if ((x * (y + 1) >= 10) && (x * (y + 1) <= 99))
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
