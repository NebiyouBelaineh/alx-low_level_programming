#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: (int) - argument count
 * @argv: (char *) - argument vector
 *
 * Return: 0 Always
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
