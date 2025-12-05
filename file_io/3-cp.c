#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void error_97(void);
void error_98(char *file);
void error_99(char *file);
void error_100(int fd);

/**
 * error_97 - prints usage error and exits
 */
void error_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_98 - prints read error and exits
 * @file: file name
 */
void error_98(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * error_99 - prints write error and exits
 * @file: file name
 */
void error_99(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * error_100 - prints close error and exits
 * @fd: file descriptor
 */
void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_97();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_98(argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_99(argv[2]);

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
			error_99(argv[2]);
	}

	if (r == -1)
		error_98(argv[1]);

	if (close(fd_from) == -1)
		error_100(fd_from);

	if (close(fd_to) == -1)
		error_100(fd_to);

	return (0);
}
