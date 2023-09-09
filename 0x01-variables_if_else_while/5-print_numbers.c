#include <stdio.h>
/**
 * main - prints base 10 from 0
 * Return: (0) Success
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
