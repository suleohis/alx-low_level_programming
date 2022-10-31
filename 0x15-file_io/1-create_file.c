#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: Name of File
 * @text_content: Content
 *
 * Return: Create File
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int s = 0, d;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd <= -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[s])
			s++;
		d = write(fd, text_content, s);
		if (d != s)
			return (-1);
	}

	close(fd);

	return (1);
}
