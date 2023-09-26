#include "main.h"

/**
 * _memcpy - the function that copies a memory area
 * @n: variable to copy bytes from
 * @src: bytes from memory area
 * @dest: copy to memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
