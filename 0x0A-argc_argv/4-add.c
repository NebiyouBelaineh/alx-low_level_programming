#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: (int) argument count
 * @argv: (char *) argument vector
 *
 * Return: 0 for success, 1 for Error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, num = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc && *argv[i] != '\0'; i++)
	{
		if (*argv[i] < '0' && *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}

		num =  atoi(argv[i]);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
