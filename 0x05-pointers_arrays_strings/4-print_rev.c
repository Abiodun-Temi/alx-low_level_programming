#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: print reverse variable
 * Return: return nothing
 */
void print_rev(char *s)
{
	int revcount = 0;

	while (revcount >= 0)
	{
		if (s[revcount] == '\0')
			break;
		revcount++;
	}
	for (revcount--; revcount >= 0; revcount--)
	{
		_putchar(s[revcount]);
	}
	_putchar('\n');
}
