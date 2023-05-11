#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function to add text to a file
 * @filename: path to file
 * @text_content: text to add to the file
 * Return: 1 on success and -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_write;
	int len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
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
