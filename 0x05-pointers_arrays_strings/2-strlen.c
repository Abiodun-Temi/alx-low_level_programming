#include "main.h"
/**
 * _strlen - function to get the length of a string
 * @s - length of stirng is stored
 * Return: return length of string
 */
int _strlen(char *s)
{
	int lent;
	for(; *s != '\0'; s++)
		lent +=1;

	return (lent);
}
