#include "main.h"

/**
 * create_file - create the  file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 when it is  successful. -1 if it is unsuccessful.
 */

int create_file(const char *filename, char *text_content)
{
	int jb;
	int nletter;
	int rwr;

	if (!filename)
		return (-1);

	jb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (jb == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletter = 0; text_content[nletter]; nletter++)
		;

	rwr = write(jb, text_content, nletter);

	if (rwr == -1)
		return (-1);

	close(jb);

	return (1);
}
