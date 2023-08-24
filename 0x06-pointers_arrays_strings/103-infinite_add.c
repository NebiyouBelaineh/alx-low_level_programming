#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer where result is stored
 * @size_r: size of the buffer/
 *
 * Return: 0 always
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, num1, num2, sum, of = 0;
	char temp;

	for (i = 0; n1[i] != '\0' || n2[j] != '\0';)
		i++, j++;
	i--, j--;
	for (k = 0; i >= 0 || j >= 0 || of == 1; i--, j--, k++)
	{
		if (i < 0)
			num1 = 0;
		else
			num1 = n1[i] - '0';
		if (j < 0)
			num2 = 0;
		else
			num2 = n2[j] - '0';
		sum = num1 + num2 + of;
		if (sum > 9)
			of = 1;
		else
			of = 0;
		if (k >= size_r - 1)
			return (0);
		r[k] = (sum % 10) + '0';
	}
	if (k == size_r)
		return (0);
	r[k] = '\0';
	for (i = 0; i < k / 2; i++)
	{
		temp = r[i];
		r[i] = r[k - 1 - i];
		r[k - 1 - i] = temp;
	}
	return (r);
}
