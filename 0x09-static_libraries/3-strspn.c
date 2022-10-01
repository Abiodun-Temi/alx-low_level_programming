#include "main.h"
/**
 *  _strspn - function  to get length of substring prefix
 * @s: intial segment
 * @accept: bytes from accept string
 * Return: return number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int t, e, bool;

	for (t = 0; *(s + t) != '\0'; t++)
	{
		bool = 1;
		for (e = 0; *(accept + e) != '\0'; e++)
		{
			if (*(s + t) == *(accept + e))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (t);
}
