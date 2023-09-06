#include <stdio.h>
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

	while (str[i] != '\0' && str[i] != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * w_count - counts number of words separated by a space
 * @str: string parameter
 *
 * Return: (int) number of words
 */


int w_count(char *str)
{
	int i, wc = 0, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			wc++;
			i += find_length(str + i);
		}
	}
	return (wc);
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
	int i = 0, j, k, l, wc;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = w_count(str);
	if (wc == 0)
		return (NULL);

	s = (char **)malloc((wc + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < wc; j++)
	{
		while (str[i] == ' ')
			i++;
		l = find_length(str + i);

		s[j] = (char *)malloc((l + 1) * sizeof(char));

		if (s[j] == NULL)
		{
			for ( ; j >= 0; j--)
				free(s[j]);
			free(s);
			return (NULL);
		}
		for (k = 0; k < l; k++)
		{
			s[j][k] = str[i++];
		}
		s[j][k] = '\0';
	}
	s[j] = NULL;
	return (s);
}
