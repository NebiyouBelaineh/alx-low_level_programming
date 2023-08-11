#include <stdio.h>

/**
 * main - prints out lowercase alphabets
 * except 'q' and 'e'
 *
 * Return: 0 upon success
 */
int main(void)
{
	int c;

	c = 97;

	while (c < 122)
	{
		if (c != 101 && c != 113)
			putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
