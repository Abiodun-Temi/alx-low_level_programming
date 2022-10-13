#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between intergers
 * @n: number of integers passed to the function
 * Return: return nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int t;

	va_start(valist, n);

	for (t = 0; t < n; t++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && t < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
