#include "main.h"
/**
 * read_textfile - This function would read and print it to the POSIX STDOUT
 * @filename: The name of the actual file to read in txt
 * @letters: This is the number of letters it should read
 * Return: zero if the file could not be open
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedec;
	char *temp_mem;
	ssize_t size1, size2;

	if (filename == NULL)
		return (0);
	filedec = open(filename, O_RDONLY);
	if (filedec == -1)
		return (0);
	temp_mem = malloc(sizeof(char) * letters);
	if (temp_mem == NULL)
	{
		close(filedec);
		return (0);
	}
	size1 = read(filedec, temp_mem, letters);
	close(filedec);
	
	if (size1 == -1)
	{
		free (temp_mem);
		return(0);
	}

	size2 = write(STDOUT_FILENO, temp_mem, size1);
	free(temp_mem);

	if (size1 != size2)
	return (0);
	return (size2);	
}
