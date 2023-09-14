#include "variadic_functions.h"
/**
 * print_strings - prints strings seprated by strings
 * @separator: separates strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *var;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		var = va_arg(str, char*);
		if (var == NULL)
			printf("(nil)");
		else if (separator == NULL)
			printf("%s", var);
		else if (separator && i == 0)
			printf("%s", var);
		else
			printf("%s%s", separator, var);
	}

	printf("\n");
	va_end(str);
}
