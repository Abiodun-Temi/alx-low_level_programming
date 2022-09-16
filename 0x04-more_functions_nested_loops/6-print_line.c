#include "main.h"
/**
 * print_line - function to pint line on the screen
 *@n: variable to store line
 * Return: no return
 */
void print_line(int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
