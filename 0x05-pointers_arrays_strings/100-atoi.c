#include "main.h"
#include <string.h>
/**
 * _atoi - converts strings in to integers
 * @s: string to be converted to numbers
 *
 * Return: Integers converted if present, 0 otherwise
 */
int _atoi(char *s)
{
	int i;
	int len;
	unsigned num;
	int n_cnt;

	len = strlen(s);
	num = 0;
	n_cnt = 0;

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			n_cnt++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + s[i] - '0';
			if ((s[i + 1] < '0') || (s[i + 1] > '9'))
				break;
		}
	}
	if (num > 0)
	{
		if (n_cnt % 2)
			return (-1 * num);
		else
			return (num);
	}
		return (0);
}

