#include "main.h"

/**
 * create_file - function to create a file
 * @filename: name of the file
 * @text_content: content of the text
 * Return: 1 or -1 depending on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
		close(fd);
	}
	return (1);
}
