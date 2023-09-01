#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two numbers
 * @argc: (int) argument count
 * @argv: (char *) argument vector
 *
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc > 1)
	{
		product = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", product);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
