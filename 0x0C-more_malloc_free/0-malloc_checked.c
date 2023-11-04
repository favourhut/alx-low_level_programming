#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - this program allocates memory using malloc
 * @b: varable to check for string
 * exit: 98
 * Return: a
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit (98);
	return (a);
}
