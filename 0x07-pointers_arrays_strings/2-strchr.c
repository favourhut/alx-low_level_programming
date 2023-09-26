#include "main.h"
/**
 * _strchr - function that locates a charcter in a string
 * @c: first occurrence of the character
 * @s:  contains the string
 * Return: c if the value is found, else NULL
 */
char *_strchr(char *s, char c)
{
	int find;

	for (find = 0; s[find] >= '\0'; find++)
	{
		if (s[find] == c)
			return (s + find);
	}
	return ('\0');
}
