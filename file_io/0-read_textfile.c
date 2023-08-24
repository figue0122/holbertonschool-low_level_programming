#include "main.h"

/**
 * read_textfile - function to read a text file
 * @filename: char *
 * @letters: size_t type value
 * Return: ssize_t type value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, bytes;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, buf, letters);
	buf[letters + 1] = '\0';

	write(STDOUT_FILENO, buf, bytes);

	free(buf);
	close(fd);

	return (bytes);
}
