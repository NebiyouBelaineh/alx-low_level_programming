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
	int i, j, flag = -1, flag_index = -1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				flag++;
				flag_index = i;
			}
			else
			{
				flag = -1;
				flag_index = -1;
				break;
			}
			return ((haystack + flag_index));
		}
	}
	return ('\0');
}
