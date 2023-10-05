#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguent count
 * @argv: argument vector
 * Return: 1 if the program does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int i = 0, mul = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		mul = atoi(argv[2]);
		printf("%d\n", i * mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
