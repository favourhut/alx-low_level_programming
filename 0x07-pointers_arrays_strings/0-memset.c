#include "main.h"

/**
 * _memset - functions that fills memory with constant byte
 * @s: memory area to be filled
 * @b: character to be copied
 * @n: number of times to copy b
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
