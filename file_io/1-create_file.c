#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	int length = 0;

	if (filename == NULL)
		return (-1);

	/* Open file: create if not exists, truncate if exists */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL → empty file, success */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Compute length manually (no strlen allowed in this project) */
	while (text_content[length])
		length++;

	w = write(fd, text_content, length);
	if (w == -1 || w != length)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
