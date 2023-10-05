#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @agrc: argument count
 * @agrv: argument vector
 * Return: nothing
 */

 int main(int agrc, char *agrv[])

{
	int i;

	for (i = 0; i < agrc; i++)
	{
		printf("%s\n", agrv[i]);
	}
	return (0);
}
