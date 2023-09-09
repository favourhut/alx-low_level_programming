#include <stdio.h>
/**
 * main - this program omits characters
 * Return: (0) Success
 */
int main(void)

{
	char upper = 'a';

	while (upper <= 'z')

	{
		if (upper != 'e' && upper != 'q')
		{
			putchar(upper);
		}
		upper++;
	}
	putchar('\n');
	return (0);
}
