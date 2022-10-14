#include "function_pointers.h"

/**
 * array_iterator - executes a method given as a
 * parameter on each element of an array.
 * @array: input int array
 * @size: size of the array
 * @action: pointer to the function
 * Return: rerun nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int t;

	if (array && action)
		for (t = 0; t < size; t++)
			action(array[t]);
}
