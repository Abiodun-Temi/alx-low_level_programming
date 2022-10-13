#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of the argument
 * Return: return the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int t;
	int add = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (t = 0; t < n; t++)
		add += va_arg(valist, int);

	va_end(valist);

	return (add);
}
