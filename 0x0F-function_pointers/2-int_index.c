#include "function_pointers.h"

/**
 * int_index - looks for an integer
 * @array: input int array
 * @size: Array size
 * @cmp: pointer to the function to be used
 * to compare values.
 * Return: index of the first eement for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size is less or equal to 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (t = 0; t < size; t++)
			if (cmp(array[t]))
				return (t);
	}

	return (-1);
}
