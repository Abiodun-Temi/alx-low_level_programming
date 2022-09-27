#include "main.h"
#include <stdio.h>
/**
 *  print_diagsums - function that prints the sum of 2 diag squarematrix of int
 * @a: integer variable
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{

	int t, add_a = 0, add_b = 0;

	for (t = 0; t < (size * size); t++)
	{
		if (t % (size + 1) == 0)
			add_a += *(a + t);
		if (t % (size - 1) == 0 && t != 0 && t < size * size - 1)
			add_b += *(a + t);
	}
	printf("%d, %d\n", add_a, add_b);
}
