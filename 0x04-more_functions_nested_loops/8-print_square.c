#include "main.h"
/**
 * print_square - funtion to print a square followed by a new line
 * @size : to store the square
 * Return: No return
 */
void print_square(int size)
{

	int r, c;

	for (r = 1; r <= size; ++r)
	{
		for (c = 1; c <= size; ++c)
			_putchar('#');
		_putchar('\n');
	}
}
