#include "main.h"

/**
 * times_table - draws a times table up to 9x9
 *
 * Return: void
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			
			if (z > 9)
				_putchar(z/10 + '0');
			
			_putchar(z%10 + '0');
			
			if (y != 9)
			{
				_putchar(',');

				if (z <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		}
		_putchar ('\n');
	}
}
