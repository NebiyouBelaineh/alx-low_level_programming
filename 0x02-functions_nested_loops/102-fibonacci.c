#include <stdio.h>

/**
 * main - prints first 50 fibonacci series
 * starting from 1 and 2
 *
 * Return: 0 upon success
 */

int main(void)
{
	int i, x, y, s;
	
	x = 1;
	y = 2;

	for (i = 0; i < 50; i++)
	{
		s = x + y;
		printf("%d, ", s);
		
		x = y;
		y = s;
	}
	return(0);
}
