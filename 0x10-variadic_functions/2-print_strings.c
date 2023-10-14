#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this function prints the stings
 * @separator: hold the strings separator charater
 * @n: hold the strings to print
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list fav;
	unsigned int i;
	char *str;

	va_start(fav, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(fav, char*);

		if (str == NULL)
		{
			printf("(nil)\n");
		}

		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(fav);
}
