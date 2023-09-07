#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * send_error -	prints error message and exits process status 98
 */
void send_error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * _strlen -	finds the length of a string str
 * @str:	string to be measured
 *
 * Return:	Length of string
 */
int _strlen(char *str)
{
	int len = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}
/**
 * _isdigit -	checks if a string is composed of a digit or not
 * @c:		string to be checked
 *
 * Return:	1 if all characters are digits, 0 otherwise.
 */
int _isdigit(char *c)
{
	int i = 0, flag;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= '0' && c[i] <= '9')
			flag = 1;
		else
		{
			flag = 0;
			return (flag);
		}
	}
	return (flag);
}
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	char *d1 = argv[1], *d2 = argv[2];
	int l1, l2, lt, i, ovf, num1, num2, *product, ld = 0;

	if (!(argc == 3 && _isdigit(d1) && _isdigit(d2)))
		send_error();
	l1 = _strlen(d1);
	l2 = _strlen(d2);
	lt = l1 + l2 + 1;
	product = malloc(lt * sizeof(int));
	if (product == NULL)
		return (1);
	for (i = 0; i < lt; i++)
		product[i] = 0;

	for (l1 -= 1; l1 >= 0; l1--)
	{
		num1 = d1[l1] - '0';
		ovf = 0;
		for (l2 = _strlen(d2) - 1; l2 >= 0; l2--)
		{
			num2 = d2[l2] - '0';
			ovf += product[l1 + l2 + 1] + (num1 * num2);
			product[l1 + l2 + 1] = ovf % 10;
			ovf = ovf / 10;
		}
		if (ovf > 0)
			product[l1 + l2 + 1] += ovf;
	}
	for (i = 0; i < lt - 1; i++)
	{
		if (product[i])
			ld = 1;
		if (ld)
			_putchar(product[i] + '0');
	}
	if (!ld)
		_putchar('0');
	_putchar('\n');
	free(product);
	return (0);
}
