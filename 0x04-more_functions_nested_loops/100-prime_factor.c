#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143 followed by newline
 * Return: 0 always
 */
int main(void)
{
	long num, i, mp;

	num = 612852475143;
	mp = 0;

	while (num % 2 == 0)
	{
		mp = 2;
		num = num / 2;
	}
	
	for (i = 3; i <= sqrt(num); i+=2)
	{
		while (num % i == 0)
		{
			mp = i;
			num = num / i;
		}
	}

	if (num > 2)
		mp = num;
	printf("%ld\n", mp);

	return (0);
}
