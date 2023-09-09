#include <stdio.h>
/**
 * main - this program omits characters
 * Return: (0) Success
 */
int main(void)

{
	char upper = 'a';

	while (upper <= 'z')
		upper++;
	{
		if (upper != 'e' && upper != 'q')
		{
			putchar(upper);
		}
		putchar('\n');
	}
	return (0);
}
