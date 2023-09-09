#include <stdio.h>
/**
 * main - alphabet in lowercase, and then in uppercase
 * Return: (0) Success
 */
int main(void)
{
	char letter = 'a';
	char uppercase = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
