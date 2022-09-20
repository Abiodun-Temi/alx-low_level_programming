#include "main.h"
/**
 * _puts - function to print string and new line
 * @str: variable to store string
 * Return: return nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
