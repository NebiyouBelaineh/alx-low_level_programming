#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: concatenated string
 * @src: string to be concatenated
 *
 * Return: Char dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
		dest[len + i + 1] = '\0';
	}
	return (dest);
}
