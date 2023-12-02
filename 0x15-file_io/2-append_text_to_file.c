#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename to the file created.
 * @text_content: added content with a new terminating string.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedec;
	int n;
	int creat;

	if (!filename)
		return (-1);

	filedec = open(filename, O_WRONLY | O_APPEND);

	if (filedec == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		creat = write(filedec, text_content, n);

		if (creat == -1)
			return (-1);
	}

	close(filedec);

	return (1);
}
