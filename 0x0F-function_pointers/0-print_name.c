#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - This is the name of the program
 * @name: variable name
 * @f: pointer to fucntion
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
