#include "main.h"
/**
 * _memcpy - function to copy memoory bytes
 * @dest: string variable to store memory area from src
 * @src: string variable memory area to be copied
 * @n: intger variable to store n bytes
 * Return: return pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		dest[t] = src[t];
	return (dest);
}
