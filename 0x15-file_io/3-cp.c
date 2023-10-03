#include "main.h"
/**
 * main - copies content of a file to another file
 *
 * @argc: number of arguments passed to main
 * @argv: array of strings passed as argument to main
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int count_write = 0, file_from, file_to, count_read = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	count_read = read(file_from, buffer, sizeof(buffer));

	if (file_from == -1 || count_read == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	count_write = write(file_to, buffer, count_read);

	if (file_to == -1 || count_write == -1)
	{
		close(file_to);
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", file_to);
		exit(100);
	}
	return (0);
}
