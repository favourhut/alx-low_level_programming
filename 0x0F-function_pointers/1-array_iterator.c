#include "function_pointers.h"
/**
 * array_iterator - This  function that executes a function
 * given as a parameter on each element of an array.
 * @array: a pointer to an integer array
 * @size: size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
