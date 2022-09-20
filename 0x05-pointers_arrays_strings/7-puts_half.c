#include "main.h"

/**
 * puts_half - prints half of the characters in a string
 *
 * @str: The character variable to print.
 *
 * Return:  return nothing
*/

void puts_half(char *str)
{
	int lent, i;

	for (lent = 0; str[lent] != '\0'; ++lent)
		;

	if (lent % 2 == 0)
	{
		for (n = lent / 2; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
	} else
	{
		for (i = ((lent - 1) / 2) + 1; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
