#include "variadic_functions.h"

/**
 * print_all - prints anything at all
 * @format: a list of types of arguments passed to the method
 * Return: return nothing
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int t = 0, e, m = 0;
	char *string;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[t])
	{
		e = 0;
		while (t_arg[e])
		{
			if (format[t] == t_arg[e] && m)
			{
				printf(", ");
				break;
			} e++;
		}
		switch (format[t])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), m = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), m = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), m = 1;
			break;
		case 's':
			string = va_arg(valist, char *), m = 1;
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		} t++;
	}
	printf("\n"), va_end(valist);
}
