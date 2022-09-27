#include "main.h"
/**
 * _strpbrk - function that searches for a string of any set of bytes
 * @s: string
 * @accept: string
 * Return: return byte in s to accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int t, e;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (e = 0; accept[e] != '\0'; e++)
		{
			if (s[t] == accept[e])
				return (s);
		}
	}
	return ('\0');

}
