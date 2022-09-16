#include "main.h"
/**
 * print_diagonal - print diagonal line
 *@n: variable to store diagonal line test
 *Return: return nothing
 */
void print_diagonal(int n)
{
	int t, e;

	for (t = 0; t < n; t++)
	{
		for (e = 0; e < t; e++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (t < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
