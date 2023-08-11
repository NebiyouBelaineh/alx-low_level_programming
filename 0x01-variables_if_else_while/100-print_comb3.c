#include <stdio.h>

/**
 * main - Prints all possible different combinations of
 * two digits separated by a comma and space
 *
 * Return: 0, upon success
 */

int main(void)
{
	int first_d, second_d;

	first_d = 0;

	for (; first_d <= 8; first_d++)
	{
		for (second_d = first_d + 1; second_d <= 9; second_d++)
		{
			/*prints 1st digit*/
			putchar((first_d % 10) + '0');
			/*prints 2nd digit*/
			putchar((second_d % 10) + '0');
			if (first_d == 8 && second_d == 9)
				continue;
			/*prints comma*/
			putchar(',');
			/*prints space*/
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
