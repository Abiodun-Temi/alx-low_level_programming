#include "main.h"
/**
 * _strcat - the main function for the string
 * @dest: the string to be appended to
 * @src: the second dting variable
 * Return: return pointer
 */
char *_strcat(char *dest, char *src)
{
	int lent = 0, t;

	while (dest[lent])
		lent++;
	for (t = 0; src[t] ; t++)
	{
		dest[lent++] = src[t];
	}
	return (dest);

}
