#include "holberton.h"
/**
 * create_file - check the code for Holberton School students.
 * @filename: pointer to file
 * @text_content: contain the chars
 * Return: 1 if is correct, -1 in fall.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int x;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		for (x = 0; text_content[x] != '\0'; x++)
		{
		}
		write(fd, text_content, x);
	}
	close(fd);
	return (1);
}
