#include "main.h"
/**
 * cal_two_num - return the natural square root of a number
 * @a: guess number
 * @b: guess number
 * Return: square root or -1
 */


int cal_two_num(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (cal_two_num(a, b + 1));
}

/**
 * _sqrt_recursion - calculates the natural squareroot of a number
 * @n: the varable holding the number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (cal_two_num(n, 0));
	}
}
