#include "main.h"

/**
 * append_text_to_file - function to append a text to a file
 * @filename: filename
 * @text_content: text content to append
 * Return: 1 or -1 depending on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

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
