#include <stdio.h>
/**
 * main - This program prints all sinlge digit without char variable
 * Return: (0) Success
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
