#include "main.h"
int check_prime(int, int);
/**
 * is_prime_number - function to return one when user inputs a prime number
 * @n: interger variable
 * Return: return 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if t is a prime number
 * @t: number
 * @e: interger for iterating
 * Return: 1
 */
int check_prime(int t, int e)
{
	if (t <= 1)
		return (0);
	if (t % e == 0 && e > 1)
		return (0);
	if ((t / e) < e)
	print(1);
	return (check_prime(t, e + 1));
}
