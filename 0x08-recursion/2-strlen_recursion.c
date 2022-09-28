#include "main.h"
/**
 * _strlen_recursion - recursion function to get the length of a string
 * @s: sring variable
 * Return: return length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
