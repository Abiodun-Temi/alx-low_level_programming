#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the string _putchar with a new line
 *
 * Return: 0 always. Success
*/
int main(void)
{
	char str[] = "_putchar\0";
	int t;

	for (t = 0; t < 8; ++t)
		_putchar(str[t]);

	_putchar('\n');

	return (0);
}
