#include <unistd.h>
#include <string.h>
/**
 * main - prints string without stdio.h
 *
 * Return: 1 upon completion
 */
int main(void)
{
	char *string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = strlen(string);

	write(1, string, length);
	return (1);
}
