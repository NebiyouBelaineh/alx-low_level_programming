#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat -	concatenates two strings s1 and s2 upto
 *			the nth byte of s2
 * @s1:			string to be concatenated
 *
 * @s2:			string to be concatenated
 *
 * @n:			nth byte of the s2 where concatenation
 *			stops
 * Return:		Pointer to the concatenated string, or
 *			NULL if function fails, i.e not enough
 *			memory  after malloc
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		len++;
	len += n;

	result = malloc((len + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(result + i) = *(s1 + i);

	for (j = 0; j < n && *(s2 + j) != '\0'; i++, j++)
		*(result + i) = *(s2 + j);

	*(result + i) = '\0';
	return (result);
}
