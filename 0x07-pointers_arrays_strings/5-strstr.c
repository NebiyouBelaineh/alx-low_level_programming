#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring 'needle'
 * in string haystack
 * @haystack: string where 'needle' is searched
 * @needle: string we are looking to find in 'haystack'
 *
 * Return: pointer where 'needle' is located
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, flag_index = -1, flag = 0;

	for (i = 0, j = 0; haystack[j] != '\0' && needle[i] != '\0';)
	{
		if (haystack[j] == needle[i])
		{
			if (i == 0)
				flag_index = j;
			flag = 1;
			i++;
			j++;
		}
		else
		{
			flag_index = -1;
			flag = 0;
			i = 0;
			j++;
		}
		if (flag && needle[i + 1] == '\0')
			return ((haystack + flag_index));
	}
	return ('\0');
}
