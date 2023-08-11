#include <stdio.h>

/**
 * main - Print all possible different combinations
 * of three digits
 *
 * Return: 0, upon success
 */
int main(void)
{
	int d1, d2, d3;

	for (d1 = 0; d1 <= 7; d1++)
	{
		for (d2 = d1 + 1; d2 <= 8; d2++)
		{
			for (d3 = d2 + 1; d3 <= 9; d3++)
			{	/*prints first digit*/
				putchar((d1 % 10) + '0');
				/*prints second digit*/
				putchar((d2 % 10) + '0');
				/*prints third digit*/
				putchar((d3 % 10) + '0');
				if (d1 == 7 && d2 == 8 && d3 == 9)
					continue;
				/*prints Comma and Space*/
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
