#include "main.h"
/**
 * print_sign - prints sign of a number if pos or nega or greater than 0
 *@n: checks inout of method for n
 *Return: returns 1 and print + if n is greater than 0 and reuturns 0 if n is 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);

	}
}
