#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * find_length - find length of a string
 * @str: string paramenter
 *
 * Return: (int) length of the string
 */
int find_length(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len++;
			i++;
		}
		else if (str[i] == ' ')
			i++;
	}
	len++;
	return (len);
}

/**
 * strtow - spilits a tring into words
 * @str: string to be splited
 *
 * Return: array of strings (words)
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, j, k, l, len = 0, track = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = find_length(str);
	s = (char **)malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0, l = 0; str[i] != '\0'; i++)
	{
		k = 0;
		if (str[i] != ' ')
		{
			track = i;
			while (str[track] != ' ')
			{
				k++;
				track++;
			}
			s[l] = malloc((k + 1) * sizeof(char));
			if (s[l] == NULL)
			{
				while (k--)
					free(s[l]);
				free(s);
				return (NULL);
			}
			for (track = i, j = 0; j < k; j++)
			{
				s[l][j] = str[track];
				track++;
			}
			i = track;
			if (j == k)
				l++;
		}
	}
	s[l] = NULL;
	return (s);
}
