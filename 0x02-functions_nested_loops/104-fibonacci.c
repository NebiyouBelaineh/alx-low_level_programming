#include <stdio.h>

/**
 * main - prints first 98 fibonacci series
 * starting from 1 and 2
 *
 * Return: 0 upon success
 */

int main(void)
{
	unsigned long i, x, y, s;
	unsigned long x1, x2, y1, y2;

	x = 0;
	y = 1;

	for (i = 0; i < 91; i++)
	{
		if (i == 0)
			s = 1;
		else if (i >= 1)
			s = x + y;

		printf("%lu", s);

		printf(", ");
		x = y;
		y = s;
	}

	x1 = x / 10000000000;
	x2 = x % 10000000000;
	y1 = y / 10000000000;
	y2 = y % 10000000000;

	for (i = 91; i < 99; i++)
	{
		printf ("%lu", y1 + (y2 / 10000000000));
		printf ("%lu", y2 % 10000000000);

		y1 = y1 + x1;
		x1 = y1 - x1;
		y2 = y2 + x2;
		x2 = y2 - x2;

		if (i == 98)
                        continue;
		printf(", ");
	}
	printf("\n");
	return (0);
}

