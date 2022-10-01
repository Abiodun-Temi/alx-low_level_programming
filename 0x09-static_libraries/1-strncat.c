#include "main.h"
#include <string.h>
/**
 * _strncat - main function
 * @dest: first char array variable
 * @src: second char array variable
 * @n: integer variable to store bytes from src
 * Return: return string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
