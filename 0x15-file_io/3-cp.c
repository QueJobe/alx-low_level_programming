#include "main.h"

/**
 * p_error -function to print error massage
 * @e_msg: the error massage to print
 * @filename: name of the file to print
 * @code: exit code
 * Return: nothing void
 */

void p_error(const char *e_msg, const char *filename, int code)
{
	dprintf(STDERR_FILENO, e_msg, filename);
	exit(code);
}

/**
 * close_file - function to close opened files
 * @fd: file descriptor of opened file
 * Return: nothing void
 */

void close_file(int fd)
{
	int f;

	f = close(fd);

	if (f == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buf[BUF_SIZE];
	int n_read, n_write;

	if (argc != 3)
	{
		p_error("Usage: %s file_from file_to\n", argv[0], 97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		p_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		p_error("Error: Can't write to %s\n", argv[2], 99);
	}

	while ((n_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		n_write = write(fd_to, buf, n_read);
		if (n_write != n_read)
		{
			p_error("Error: Can't write to %s\n", argv[2], 99);
		}
	}

	if (n_read == -1)
	{
		p_error("Error: Can't read from %s\n", argv[1], 98);
	}
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
