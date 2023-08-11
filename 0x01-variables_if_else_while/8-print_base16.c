#include <stdio.h>

/**
 * main - Prints all number of hexadecimals
 * in lowercase
 *
 * Return: 0, upon success
 */
int main(void)
{
	int digits, alphas;

	digits = 48;
	alphas = 97;

	while (digits <= 57)
	{
		putchar(digits);
		digits++;
	}
	while (alphas <= 102)
	{
		putchar(alphas);
		alphas++;
	}
	putchar(10);

	return (0);
}
