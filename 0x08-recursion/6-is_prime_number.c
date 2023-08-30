#include "main.h"
/**
 * isprime - checks prime number
 * @num: number to be checked
 * @i: number counter
 * Return: 1 or 0 if prime or not, respectively.
 */
int isprime(int num, int i)
{
	if (i >= 3)
	{
		if (num % i == 0)
			return (0);
		i--;
		isprime(num, i);
	}
	return (1);
}
/**
 * is_prime_number - checks if input integer is a prime number
 * or not.
 * @n: number to be checked
 *
 * Return: 1 if n is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	int i = n - 1;

	if (n < 2 || n % 2 == 0)
		return (0);

	return (isprime(n, i));
}
