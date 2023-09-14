#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int var;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		var = va_arg(nums, int);

		if (separator == NULL)
			printf("%d", var);
		else if (separator && i == 0)
			printf("%d", var);
		else
			printf("%s%d", separator, var);
	}
	printf("\n");
	va_end(nums);
}
