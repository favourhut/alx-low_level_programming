#include "variadic_functions.h"
#include "stdarg.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - prototype of a function that prints
 * numbers with separator, followed by a new line
 * @separator: character to separate numbers
 * @n: variable that hold the number to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list fav;
	unsigned int i;

	va_start(fav, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(fav, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(fav);
}
