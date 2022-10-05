#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string variable
 * @s2: second string variable
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *sout;
	unsigned int t, e, m, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (t = 0; s1[t] != '\0'; t++)
		;

	for (e = 0; s2[e] != '\0'; e++)
		;

	sout = malloc(sizeof(char) * (t + e + 1));

	if (sout == NULL)
	{
		free(sout);
		return (NULL);
	}

	for (m = 0; m < t; m++)
		sout[m] = s1[m];

	limit = e;
	for (e = 0; e <= limit; m++, e++)
		sout[m] = s2[e];

	return (sout);
}
