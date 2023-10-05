#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments
 * @agrc: argument count
 * @agrv: argumwnt vector
 * Return: zero for succes
 */

int main(int agrc, char *agrv[])

{
	(void) agrv;

	printf("%d\n", agrc - 1);
	return (0);
}
