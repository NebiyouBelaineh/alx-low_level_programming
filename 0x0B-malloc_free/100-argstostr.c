#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * argstostr - concatenantes all arugments passed with program
 * @ac: number of arugments
 * @av: array of arguments
 *
 * Return: Pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, bytes = ac, count = 0;
	char *s;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0';)
			j++;
		bytes += j;
	}

	s = (char *)malloc((bytes + 1));
	if (s != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; count++, j++)
				s[count] = av[i][j];
			s[count] = '\n';
			count++;
		}
	}
	else
	{
		free(s);
		return (NULL);
	}
	return (s);
}
