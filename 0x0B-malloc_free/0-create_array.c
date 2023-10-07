#include <stdlib.h>
#include "main.h"

/**
 * create_array - this function creates an array of chars
 * @size: the size of the space allocated
 * @c: the variable to search
 * Return: 0 or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
