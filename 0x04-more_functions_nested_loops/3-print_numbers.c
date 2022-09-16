#include"main.h"

/**
 * print_numbers - print 0 - 9
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int nums = 0;

	do {
		_putchar(nums + 48);
		nums++;
	} while (nums >= 0 && nums <= 9);
	_putchar('\n');
}
