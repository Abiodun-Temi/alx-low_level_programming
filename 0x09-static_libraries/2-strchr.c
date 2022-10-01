#include "main.h"
/**
 * _strchr - main function
 * @s: string variable
 * @c: character variable
 * Return: return character
 */
char *_strchr(char *s, char c)
{
	unsigned int t = 0;

	for (; *(s + t) != '\0'; t++)
		if (*(s + t) == c)
			return (s + t);
	if (*(s + t) == c)
		return (s + t);
	return ('\0');
}
