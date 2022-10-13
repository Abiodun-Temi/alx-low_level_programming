#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the method
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int t;
	char *string;

	va_start(valist, n);

	for (t = 0; t < n; t++)
	{
		string = va_arg(valist, char *);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (t < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
