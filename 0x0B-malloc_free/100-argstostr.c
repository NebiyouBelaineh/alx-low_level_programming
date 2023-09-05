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
	int i, j, total = 0, count = 0;
	char *s;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0';)
			j++;
		total += j;
	}
	s = (char *)malloc((total + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		s[count] = '\n';
		for (j = 0; av[i][j] != '\0'; count++, j++)
		{
			s[count] = av[i][j];
		}
		s[count] = '\n';
		count++;

	}
	return (s);

}
