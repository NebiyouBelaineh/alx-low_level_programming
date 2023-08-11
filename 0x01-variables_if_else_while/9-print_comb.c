#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit
 * numbers separated by a comma and space
 *
 * Return: 0, upon success
 */
int main(void)
{
	int digits, comma, space;

	digits = 48;
	comma = 44;
	space = 32;

	while (digits <= 57)
	{
		putchar(digits);
		digits++;
		if (digits != 58)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar(10);

	return (0);
}
