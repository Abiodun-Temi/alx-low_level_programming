#include "main.h"

/**
 * puts2 - prints all characters in a string with even index
 *
 * @str: the character variable to use
 * Return: return nothing
*/

void puts2(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; ++t)
	{
		if (t % 2 == 0)
		{
			_putchar(str[t]);
		}
	}
	_putchar('\n');
}
