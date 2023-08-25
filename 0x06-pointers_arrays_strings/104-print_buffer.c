#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer of size bytes by 'b'
 * @b: buffer to be printed
 * @size: size of buffer to print
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, bytes = 0;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x :", i);

			for (j = 0; j < 10; j++)
			{
				if (j == 0)
					bytes = i;
				if (bytes >= size)
				{
					printf("  ");
				}
				else
				{
					printf("%02x", b[bytes]);
					bytes++;
				}
				if (j % 2)
					printf(" ");
			}
			for (j = 0; j < 10; j++, bytes++)
			{
				if (j == 0)
					bytes = i;
				if (bytes >= size)
					break;
				if ((b[bytes] < 32 || b[bytes] > 126))
					printf(".");
				else
					printf("%c", b[bytes]);
			}
			printf("\n");
		}
	}
}
