#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of gile to be created
 * @text_content: content to be written of file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int txt_len = 0;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	while (text_content[txt_len] != '\0')
		txt_len++;
	if (text_content != NULL)
	{
		n_write = write(fd, text_content, txt_len);
		if (n_write == -1 || n_write != txt_len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
