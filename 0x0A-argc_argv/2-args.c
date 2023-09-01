#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: (int) argument count
 * @argv: (char *) argument vector
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
