#include "main.h"

/**
 * *_memset - functions that fills memory with constant byte
 * @s: memory area to be filled
 * @b: character to be copied
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
