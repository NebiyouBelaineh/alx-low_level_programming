#include "main.h"
/**
 * _memset - fills the first n bytes of memory
 * @s: buffer to manupilate
 * @b: constant to fill buffer
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
