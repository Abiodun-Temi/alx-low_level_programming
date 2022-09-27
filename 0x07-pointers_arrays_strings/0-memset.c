#include "main.h"
/**
 * _memset - this is a memory set function
 * @s: string
 * @b: character variable
 * @n: an interger variable
 * Return: return string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
