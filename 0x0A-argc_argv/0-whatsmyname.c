#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of program
 * @argc: (integer) argument count
 * @argv: (char) argument vector
 *
 * Return: 0 Always
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
