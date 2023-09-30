#include "main.h"

/**
 * factorial - This returns the factoria; of a given number
 * @n: string
 * Return: -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n < 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
