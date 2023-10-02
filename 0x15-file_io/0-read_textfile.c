#include "main.h"

/**
 * read_textfile - reads a text file and prints to Standard output
 *
 * @filename: string containing the file name to be read
 * @letters: number of letters we want to read
 *
 * Return: the number of letters that could be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count_read = 0, count_write = 0;
	char buffer[2048];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count_read = read(fd, buffer, sizeof(buffer) - 1);

	if (count_read == -1)
		return (0);

	buffer[count_read] = '\0';

	if ((ssize_t)letters > count_read)
		letters = count_read;

	count_write = write(STDOUT_FILENO, buffer, letters);

	if (count_write < (ssize_t)letters || count_write == -1)
		return (0);

	return (count_write);

}
