#include "main.h"

/**
 * exit_error - function to print error message
 * @code: error code
 * @message: error message to display
 * Return: nothing void
 */

void exit_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument names
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int b_read, b_write;
	int o_from;
	int o_to;
	char *buf;

	if (argc != 3)
	{
		exit_error(97, "Usage: cp file_from file_to");
	}

	o_from = open(argv[1], O_RDONLY);
	if (o_from == -1)
	{
		exit_error(98, "Error: Can't read from file %s, argv[1]");
	}

	o_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (o_to == -1)
	{
		exit_error(99, "Error: Can't write to %s, argv[2]");
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		exit(99);

	while ((b_read = read(o_from, buf, 1024)) > 0)
	{
		b_write = write(o_to, buf, b_read);
		if (b_write == -1)
		{
			exit_error(99, "Error:Can't write to %s, file_to");
		}
	}
	if (close(o_from) == -1)
		exit_error(100, "Error:Can't close fd %d, 0_from");

	if (close(o_to) == -1)
		exit_error(100, "Error: Can't close fd %d, o_to");

	return (0);
}
