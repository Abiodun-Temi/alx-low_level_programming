#include "main.h"
/**
 * more_numbers - function to print 10 times the numbers from 0-14
 * Return: no reutrn type
 */
void more_numbers(void)
{
	int t, num;

	for (t = 0; t < 10; t++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
