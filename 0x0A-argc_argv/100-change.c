#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program would prints the minimum number of coins
 * to make a change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cent;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		coins++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", coins);
	return (0);
}
