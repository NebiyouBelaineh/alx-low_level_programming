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
	i = n;
	sum = 0;

	while (i > 0)
	{
		if (i % 3 || i % 5)
			sum +=i;
		i--;
	}
	printf("%d\n", sum);
	return (0);
}
