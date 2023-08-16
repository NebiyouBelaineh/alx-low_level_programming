#include <stdio.h>

/**
 * main - find the multiples of 3 or 5 and
 * adds them up
 *
 * Return: 0 upon success
 */

int main(void)
{
	int n, i, sum;

	n = 1024;
	i = n - 1;
	sum = 0;

	while (i > 0)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i--;
	}
	printf("%d\n", sum);
	return (0);
}
