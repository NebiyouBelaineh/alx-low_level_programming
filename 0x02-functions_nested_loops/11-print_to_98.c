#include <stdio.h>

/**
 * print_to_98 - prints natural number from 'n' to 98
 * @n: n is a natural number from which the function
 * starts printing
 *
 * Return: void.
 */

void print_to_98(int n)
{
	if (n > 98)
	{	int i;
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i == 98)
				continue;
			else
			{
				printf(", ");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{	int i;
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i == 98)
				continue;
			else
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
