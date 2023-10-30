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
	/* i need to declare a variable for looping */

	int i;

	for (i = 0; i < agrc; i++)
	{
		printf("%s\n", agrv[i]); 
		/*Only print one argument per line, ending with a new line*/
	}
	return (0);
}
