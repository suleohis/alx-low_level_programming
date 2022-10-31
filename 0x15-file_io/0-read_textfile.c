#include "main.h"

/**
 * read_textfile - hat reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: string
 * @letters: length
 *
 * Return: length
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int s, d;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);


	buff = malloc(sizeof(char) * letters);
	s = read(fd, buff, letters);
	if (s < 0)
	{
		free(buff);
		return (0);
	}
	buff[s] = '\0';

	close(fd);

	d = write(STDOUT_FILENO, buff, s);
	if (d < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (d);
}
