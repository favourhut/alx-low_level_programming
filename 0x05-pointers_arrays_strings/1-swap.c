#include <stdio.h>
/**
 * swap_int - function that swaps the value of two integers
 * @a: first value to swap
 * @b: second value to swap
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
