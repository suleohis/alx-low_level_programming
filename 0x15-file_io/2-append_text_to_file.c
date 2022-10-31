#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: Name of file
 * @text_content: content
 *
 * Return: appends text at the end of a file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int s = 0, d;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
