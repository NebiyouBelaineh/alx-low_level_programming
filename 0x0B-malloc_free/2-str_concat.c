#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings s1 and s2. Newly formed string memory
 * is allocated using malloc.
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to the newly allocated memory of the concatenated string,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, len1 = 1, len2 = 1;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	str = malloc((len1 + len2) * (sizeof(char)));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < len2; i++)
		str[len1 + i] = s2[i];

	str[len1 + i] = '\0';

	return (str);
}
