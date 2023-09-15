#include "main.h"

/**
 * _abas - Computes the value of an integer
 * @num: the value to be computed
 * Return: the absolute value of the number r zero
 */

int _abs(int num)

{
	if (num < 0)
	{
		int abs_val;

		abs_val = num * -1;
		return (abs_val);
	}
	return (num);
}
