#include "main.h"
/**
 * _puts - function to print string and new line
 * @str: variable to store string
 * Return: return nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
