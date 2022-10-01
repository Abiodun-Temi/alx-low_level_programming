#include "main.h"
#include <string.h>
/**
 * _strlen - function to get the length of a string
 * @s: length of stirng is stored
 * Return: return length of string
 */
int _strlen(char *s)
{
	int lent;
	for (lent = 0; *s != '\0'; ++s)
		++lent;
	return (lent);
}
