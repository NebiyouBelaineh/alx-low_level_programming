#include "main.h"
/**
 * _memcpy - copies n bytes from memory area of 'src' to
 * memory area of 'dest'
 * @dest: pointer where copied memory will be saved
 * @src: source to copy memory from
 * @n: number of bytes to copy
 *
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
