#include "main.h"
/**
 * print_chessboard - function to print chess board
 * @a: pointer
 * Return: return nothing
 */
void print_chessboard(char (*a)[8])
{
unsigned int t, e = 0;

	for (t = 0; t < 64; t++)
	{
		if (t % 8 == 0 && t != 0)
		{
			e = t;
			_putchar('\n');
		}
		_putchar(a[t / 8][t - e]);
	}
	_putchar('\n');
}
