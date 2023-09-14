#include "variadic_functions.h"

/**
 * print_all - prints anything passed to the function
 * @format: types of arguments passed to the function
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list any_thing;
	char *str, *separator = "";
	int i = 0;

	va_start(any_thing, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(any_thing, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(any_thing, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(any_thing, double));
				break;
			case 's':
				str = va_arg(any_thing, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(any_thing);
}
