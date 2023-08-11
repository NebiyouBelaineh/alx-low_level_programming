#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 * starting from 0 and adds new line at the end
 *
 * Return: 0 upon success
 */
int main(void)
{
	int s_digits;

	s_digits = 48;

	while (s_digits <= 57)
	{
		putchar(s_digits);
		s_digits++;
	}
	putchar(10);
	return (0);
}
