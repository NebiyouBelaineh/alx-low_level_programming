#include <stdio.h>

/**
 * main - prints first 98 fibonacci series
 * starting from 1 and 2
 *
 * Return: 0 upon success
 */

int main(void)
{
	long int i, x, y, s;

	x = 0;
	y = 1;

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
			s = 1;
		else if (i >= 1)
			s = x + y;

		printf("%ld", s);

		if (i == 98)
			continue;
		printf(", ");
		x = y;
		y = s;
	}
	printf("\n");
	return (0);
}

