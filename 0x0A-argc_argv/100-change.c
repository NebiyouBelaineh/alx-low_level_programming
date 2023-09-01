#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make a change
 * for an amount of money
 *
 * @argc: (int) argument count
 * @argv: (char *) argument vector
 *
 * Return: 0 success, 1 Error
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if (cents - 25 >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if (cents - 10 >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if (cents - 5 >= 0)
		{
			cents = cents - 5;
			continue;
		}
		if (cents - 2 >= 0)
		{
			cents = cents - 2;
			continue;
		}
		if (cents - 1 >= 0)
		{
			cents = cents - 1;
			continue;
		}
	}
	printf("%d\n", coins);
	return (0);
}
