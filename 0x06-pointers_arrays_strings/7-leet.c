#include "main.h"
/**
 * leet - converts/encodes string to leet
 * @s: string to be encoded
 *
 * Return: encoded string (s)
 */
char *leet(char *s)
{
	int i, j;
	char leet1[5] = {'a', 'e', 'o', 't', 'l'};
	char leet2[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == leet1[j])
				s[i] = leet2[j];
			else if (s[i] == leet1[j] - 32)
				s[i] = leet2[j];
		}
	}
	return (s);
}
