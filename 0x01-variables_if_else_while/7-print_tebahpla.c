#include <stdio.h>

/**
 * main - Prints lowercase alphabets in reverse order
 *
 * Return - 0, upon success
 */
int main(void)
{
	int c_low;

	c_low = 122;

	while (c_low >= 97)
	{
		putchar(c_low);
		c_low--;
	}
	putchar(10);

	return (0);
}
