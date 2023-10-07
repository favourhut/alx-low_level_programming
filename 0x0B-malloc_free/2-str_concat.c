#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - this function concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatnate
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[j])
		j++;
	l = a + j;

	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k <= l)
	{
		if (k <= a)
			s[k] = s1[k];
		if (k >= a)
		{
			s[k] = s2[j];
			j++;
		}
	}
	s[k] = '\0';
	return (s);
}
