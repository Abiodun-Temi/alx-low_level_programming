#include "main.h"
/**
 * _puts - function to print string and new line
 * @str: variable to store string
 * Return: return nothing
 */
void _puts(char *str)
{
	int t = 0;

	while (str[t])
	{
		_puts(str[t]);
		t++;
	}
	_puts('\n');
}
