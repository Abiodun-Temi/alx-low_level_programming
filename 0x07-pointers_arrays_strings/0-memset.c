#include "main.h"
/**
 * _memset - function for memory byte
 * @s: string variable
 * @b: character variable
 * @n: interger variable
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		s[t] =  b;

	return (s);
}
