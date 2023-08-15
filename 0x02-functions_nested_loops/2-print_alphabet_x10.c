#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * 10 times using _putchar()
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;

	/*prints alphabets with new line 10 times*/
	for (j = 0; j < 10; j++)
	{	/*prints the alphabets and adds new line*/
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
