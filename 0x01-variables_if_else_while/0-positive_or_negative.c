#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints number is +ve,-ve or zero
 * depending on the value of random number 'n'*/

/* Return: 0 upon success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	
	return (0);
}
