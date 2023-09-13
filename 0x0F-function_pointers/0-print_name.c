#include "function_pointers.h"

/**
 * print_name - prints name based on string and printing method
 * @f: function paramenter passed to print_name
 * @name: string to be printed that is passed to f function
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
