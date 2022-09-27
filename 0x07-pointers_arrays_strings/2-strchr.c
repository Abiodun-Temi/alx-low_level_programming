#include "main.h"
/**
 * _strchr - main function
 * @s: string variable
 * @c: character variable
 * Return: return character
 */
char *_strchr(char *s, char c)
{
	int t = 0, e;

	while (s[t])
		t++;
	for (b = 0; b < t; b++)
	{
		if (c == s[e])
			s += e;
		return (s);
	}
	return ('\0');
}
