#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion - function to return the squareroot of a number
 * @n: interger variable to be squarerooted
 * Return: return root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square root function to be used in the sqrtrecursion func.
 * @t: integer
 * @e: number to be used as square root for int t
 * Return: number
 */
int _sqrt(int t, int e)
	{
		int square = e * e;

		if (square > t)
			return (-1);
		if (square == t)
			return (e);
		return (_sqrt(t, e + 1));
	}
