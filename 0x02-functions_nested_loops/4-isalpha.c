#include "main.h"

/**
 * _isalpha - checks for uppercase or lowercase
 * @c: letter to check for
 * Return: (1) if c is a letter, upper or lowercase, (0) otherwise
 */

int _isalpha(int c)

{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
