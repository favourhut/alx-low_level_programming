#include "main.h"

/**
 * _islower - checks if c is a lower case letter
 * @c: letter to be checked for lower case
 * Return: (1) if letter is lowercase, (0) if uppercase
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
