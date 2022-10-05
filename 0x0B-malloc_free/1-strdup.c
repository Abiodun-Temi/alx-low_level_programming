#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strup;
	unsigned int t, e;

	if (str == NULL)
		return (NULL);

	for (t = 0; str[t] != '\0'; t++)
		;

	strup = (char *)malloc(sizeof(char) * (t + 1));

	if (strup == NULL)
		return (NULL);

	for (e = 0; e <= i; e++)
		strup[e] = str[e];

	return (strup);
}
