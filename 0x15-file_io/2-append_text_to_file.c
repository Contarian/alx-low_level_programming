#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file already exist, -1 if the file doesn't exist
 * or if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int jb;
	int nletter;
	int rwr;

	if (!filename)
		return (-1);

	jb = open(filename, O_WRONLY | O_APPEND);

	if (jb == -1)
		return (-1);

	if (text_content)
	{
		for (nletter = 0; text_content[nletter]; nletter++)
			;

		rwr = write(jb, text_content, nletter);

		if (rwr == -1)
			return (-1);
	}

	close(jb);

	return (1);

