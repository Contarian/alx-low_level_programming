#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>

/**
 * read_textfile - read the  txt file and print it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: num of the  letters it should read and to be  printed
 *
 * Return:the actual num of the letters that  it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int jb;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	jb = open(filename, O_RDONLY);
	if (jb == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(jb);
		return (0);
	}
	lenr = read(jb, buffer, letters);
	close(jb);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
