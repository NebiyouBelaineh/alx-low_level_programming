#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 while fizz is printed for
 * multipes of 3 and buzz of multiples of both 3 and 5.
 * Return: 0 always.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
