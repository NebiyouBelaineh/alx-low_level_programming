#include "main.h"
/**
 * cap_string - capitalizes string
 * @str: string to be capitalized
 *
 * Return: capitalized string (str)
 */
char *cap_string(char *str)
{
	int i;
	int j;
	int k;
	char sptr[13] = {32, 9, 10, 44, 59, 46, 33, 63, '\"', 40, 41, '{', '}'};

	j = 13;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k < j; k++)
		{
			if ((str[i] == sptr[k]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
