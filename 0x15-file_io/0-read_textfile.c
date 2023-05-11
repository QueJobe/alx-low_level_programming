#include "main.h"

/**
 * read_textfile - function to read a text file and print it to
 * the standard output
 * @filename: pointers to pathname of the file
 * @letters: number of characters to be read
 * Return: numbers of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n_read, n_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		return (0);
	}

	n_write = write(STDOUT_FILENO, buffer, n_read);

	if (n_write == -1 || n_write != n_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (n_write);
}