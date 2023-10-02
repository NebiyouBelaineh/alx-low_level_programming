#include "main.h"

/**
 * create_file - creates file and fills it with a string
 *
 * @filename: string containing the name of the file we are creating
 * @text_content: string to be put in the file
 *
 * Return: 1 for success or -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count_write, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
		while (text_content[length])
			length++;

	count_write = write(fd, text_content, length);

	if (count_write == -1)
	{
		close(fd);
		return (-1);
	}

	return (1);
}

