#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read the  txt file and print it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: num of the  letters it should read and to be  printed
 *
 * Return:the actual num of the letters that  it could read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

