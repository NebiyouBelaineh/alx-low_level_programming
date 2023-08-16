#include <stdio.h>

/**
 * main - adds fibonacci series starting from 1 and 2
 * to 4,000,000
 *
 * Return: 0 upon success
 */

int main(void)
{
	long int i, x, y, z, s;

	i = 0;
	x = 0;
	y = 1;
	z = 4000000;
	s = 0;

	while (s < z)
	{
		if (s == 0)
			s = 1;
		else if (s >= 1)
			s = x + y;

		/*printf("%ld", s);*/

		x = y;
		y = s;

		if (s % 2 == 0)
		{
			i += s;
		}
	}
	printf("%ld\n", i);
	return (0);

}
