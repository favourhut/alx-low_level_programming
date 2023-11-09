#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for whic
 * the cmp function does not return 0
 * @array: function pointer of an array
 * @size: size of the array by number
 * @cmp: a pointer to the function to be used to compare values
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

		if (size > 0)
		{
			if (array != NULL && cmp != NULL)
			{
				while (a < size)
				{
					if (cmp(array[a]))
						return (a);
					a++;
				}
			}
		}
	return (-1);
}
