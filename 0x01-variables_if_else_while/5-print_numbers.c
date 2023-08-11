#include <stdio.h>

/**
 * main - Prints all single digit base 10 numbers
 * from 0 to 10 (excluding 10)
 *
 * Return: 0 upon success
 */

int main(void)
{
	int single_digits;

	single_digits = 0;

	while (single_digits < 10)
	{
		printf("%d", single_digits);
		single_digits++;
	}
	printf("\n");

	return (0);
}
