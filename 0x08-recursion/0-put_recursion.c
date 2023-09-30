#include "main.h"

/**
 * puts_recursion - function that prints a string
 * @s: variable that hold the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')

	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	return ('\n');
}
