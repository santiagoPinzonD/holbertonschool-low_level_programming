#include "holberton.h"

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: pointer to file
 * @letters: containd the n nums of chars
 * Return: n_bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];
	ssize_t n_bytes;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd < 0)
			return (0);

		n_bytes = read(fd, buf, letters);

		if (n_bytes == 0)
			return (0);

		n_bytes = write(STDOUT_FILENO, buf, n_bytes);

		if (n_bytes == 0)
			return (0);
		close(fd);
		return (n_bytes);
	}
	return (0);
}
