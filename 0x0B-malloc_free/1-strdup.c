#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to duplicate
 * Return: NULL if str = NULL or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int b = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (b < i)
	{
		s[b] = str[b];
		b++;
	}

	s[b] = '\0';
	return (s);
}
