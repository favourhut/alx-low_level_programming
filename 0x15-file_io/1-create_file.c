#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int filedec;
	int n;
	int creat;

	if (!filename)
		return (-1);

	filedec = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filedec == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	creat = write(filedec, text_content, n);

	if (creat == -1)
		return (-1);

	close(filedec);

	return (1);
}
