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
	int i, j, flag_index = -1;

	if (*needle == 0)
		return (haystack);
	for (i = 0, j = 0; haystack[j] != '\0' && needle[i] != '\0';)
	{
		if (haystack[j] == needle[i])
		{
			if (i == 0)
				flag_index = j;
			i++;
			j++;
		}
		else
		{
			flag_index = -1;
			i = 0;
			j++;
		}
		if (needle[i + 1] == '\0' && flag_index != -1)
			return ((haystack + flag_index));
	}
	return ('\0');
}
