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
	for (e = 0; e < t; e++)
	{
		if (c == s[e])
			s += e;
		return (s[e]);
	}
	return ('\0');
}
