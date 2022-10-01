#include "main.h"
#include <string.h>
/**
 * _strncpy - use to copy string
 * @dest: first character string
 * @src: second character string
 * @n: interger variable
 * Return: return string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
