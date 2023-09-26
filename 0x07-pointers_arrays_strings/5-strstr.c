#include "main.h"

/**
 * _strstr - function tha locates a substring
 * @haystack: char pointer variable
 * @needle: first occurrence of the substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int dex;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		dex = 0;

		if (haystack[dex] == needle[dex])
		{
			do {
				if (needle[dex + 1] == '\0')
					return (haystack);
				dex++;
			} while (haystack[dex] == needle[dex]);
		}
		haystack++;
	}
	return ('\0');
}
