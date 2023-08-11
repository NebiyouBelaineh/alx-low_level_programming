#include <stdio.h>

/**
 * main - prints Ascii lowercase alphabets
 * from 'a' to 'z' i.e - Ascii 33 to 58
 *
 * Return: 0 upon success
 */
int main(void)
{
	int c;

	c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
