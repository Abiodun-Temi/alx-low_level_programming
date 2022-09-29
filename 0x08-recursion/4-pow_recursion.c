#include "main.h"
/**
 * _pow_recursion - function to raise an int to the power of another int
 * @x: int variable to be raised
 * @y: int varaible to be used as raise
 * Return: return power raised
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
