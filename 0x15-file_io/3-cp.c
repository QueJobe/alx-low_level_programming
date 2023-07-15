#include "main.h"

/**
 * c_buffer - function to allocate memory
 * @filename: file name
 * Return: buffer with allocate memory
 */

char *c_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_f - function to close files
 * @fd: file descriptor
 * Return: nothing void
 */

void close_f(int fd)
{
	int d;

	d = close(fd);
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument names
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int b_read, b_write, o_from, o_to;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	o_from = open(argv[1], O_RDONLY);

	o_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (o_to == -1 || o_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}
	buf = c_buffer(argv[2]);

	while ((b_read = read(o_from, buf, 1024)) > 0)
	{
		b_write = write(o_to, buf, b_read);
		if (b_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
	}
	if (b_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buf);
		exit(98);
	}
	close_f(o_from);
	close_f(o_to);

	return (0);
}
