#include <stdio.h>
#include <stdlib.h>

/**
 * main - the beginging of the program compilation
 * @argc: argument count varaible
 * @argv: argument vector varable
 * Return: zero for succes
 */

int main(int argc, char *argv[])

{
	if (argc != 2)
	{
		fprintf(stderr, "%s\n", argv[0]);
		return 1;
	}
	printf("%s\n", argv[1]);
	return (0);
}

