#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: (0) Success
 */
int main(void)
{
	char base = '0';
	char alpha = 'a';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	while (alpha <= 'f')
	{
	putchar(alpha);
	alpha++;
	}
	putchar('\n');
	return (0);
}
