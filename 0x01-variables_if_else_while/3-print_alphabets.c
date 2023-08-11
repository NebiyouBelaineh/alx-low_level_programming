#include <stdio.h>

/**
 * main - Prints aplhabets in lowercase
 * followed by uppercase then adds newline
 *
 * Return: 0 upon success
 */
int main(void)
{
	int c_lowerCase, c_upperCase;

	c_lowerCase = 97;
	c_upperCase = 65;

	while (c_lowerCase <= 122)
	{
		putchar(c_lowerCase);
		c_lowerCase++;
	}

	while (c_upperCase <= 90)
	{
		putchar(c_upperCase);
		c_upperCase++;
	}
	putchar(10);

	return (0);
}
