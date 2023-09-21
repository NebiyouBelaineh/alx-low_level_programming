#include <stdio.h>

/**
 * print_first -	prints text before main function is executed
 *
 * Return: void.
 */


void __attribute__((constructor)) print_first(void)
{
	char *str;

	str = "You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n ";

	printf("%s", str);
}
