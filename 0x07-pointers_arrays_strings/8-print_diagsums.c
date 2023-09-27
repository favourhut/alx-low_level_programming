#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: a variable pointer of matrix
 * @size: int variable and size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int cal, sum1 = 0, sum2 = 0;

	for (cal = 0; cal < size; cal++)
	{
		sum1 += a[cal];
		a += size;
	}

	a -= size;

	for (cal = 0; cal < size; cal++)
	{
		sum2 += a[cal];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
