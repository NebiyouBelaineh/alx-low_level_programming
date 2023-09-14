#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of the main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success. Exits with "Error" message
 * and status 1 if argc number is not correct, or exits
 * "Error" message and status 2 if bytes provided is negative.
 *
 */
int main(int argc, char *argv[])
{
	int op_arg, i;
	char *op_arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	op_arg = atoi(argv[1]);

	if (op_arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
	op_arr = (char *)main;

	for (i = 0; i < op_arg; i++)
	{
		if (i == (op_arg - 1))
		{
			printf("%02hhx", op_arr[i]);
			break;
		}
		printf("%02hhx\n", op_arr[i]);
	}
	return (0);
}
