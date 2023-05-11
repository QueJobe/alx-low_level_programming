#include "main.h"

/**
 * create_file - function to create a file
 * @filename: pointers to filename to be created
 * @text_content: content to be write on the file
 * Return: 1 on success and -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, n_write;
	int len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	while (*text_content != '\0')
	{
		len++;
		text_content++;
	}

	if (text_content != NULL)
	{
		n_write = write(fd, text_content, len);
		if (n_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
