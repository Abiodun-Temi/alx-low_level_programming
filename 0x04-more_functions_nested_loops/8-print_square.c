#include "main.h"
/**
 * print_square - funtion to print a square followed by a new line
 * @size : to store the square
 * Return: No return
 */
void print_square(int size)
{
nt t, e;

	for (t = 0; t < size; t++)
	{
		for (e = 0; e < size; e++)
		{
			_putchar(35);
		}
		if (t != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
