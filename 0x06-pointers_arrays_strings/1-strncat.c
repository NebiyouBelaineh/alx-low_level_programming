#include "main.h"
#include <string.h>
/**
 * _strncat - concactenates two strings with n bytes from src
 * @dest: concactenated string
 * @src: string to be concatenated
 * @n: specifies the number of bytes from src to be concatenate
 *
 * Return: Char (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	len = strlen(dest);

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
