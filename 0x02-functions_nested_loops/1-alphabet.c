#include "main.h"

/**
 * print_alphabet - Prototype to notice while printing
 * Return: void
 */

void print_alphabet(void)

{
	char let = 'a';

		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
	_putchar('\n');
}
