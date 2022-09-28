#include "main.h"
/**
 * factorial - return factiorial of number using recursion
 * @n: interger type
 * Return: return factoral of number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
