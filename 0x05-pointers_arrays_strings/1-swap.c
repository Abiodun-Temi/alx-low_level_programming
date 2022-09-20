#include "main.h"
/**
 * swap_int - swap the value of 2 intergers
 * @a : interger variable to be swapped
 * @b : second interger to be swapped
 * Return: return nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
