#include "main.h"

/**
 * prime - variable that hold the primes numbers
 * @a: interger variable
 * @b: integer varaible
 * Return: prime number
 */
int prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime(a, b + 1));
}

/**
 * is_prime_number - this function detectr the prime of a number
 * @n: the input number to detect
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
