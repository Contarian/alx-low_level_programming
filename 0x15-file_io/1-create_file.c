#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file with read/write permissions
 * @filename: name of the file
 * @text_content: the text to write inside the file
 * Return: 1 if  success and  -1 if unsuccessful
 */

int create_file(const char *filename, char *text_content)
{
	int len;
	int fd, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (len = 0; text_content[len]; len++)
	{}
	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
