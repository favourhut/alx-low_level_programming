#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - this function returns all the sum of its parameters
 * @n: variable of an unsigned integer
 * Return: zero if n = zero
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list fav;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(fav, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(fav, int);
	}

	va_end(fav);

	return (sum);
}
