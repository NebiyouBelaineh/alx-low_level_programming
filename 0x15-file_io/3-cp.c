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
	int file_from, file_to;
	ssize_t chrs, count_write;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(file_from, file_to, argv);

	chrs = 1024;
	while (chrs == 1024)
	{
		chrs = read(file_from, buf, 1024);
		if (chrs == -1)
			error_handler(-1, 0, argv);
		count_write = write(file_to, buf, chrs);
		if (count_write == -1)
			error_handler(0, -1, argv);
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

/**
 * error_handler - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_handler(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
