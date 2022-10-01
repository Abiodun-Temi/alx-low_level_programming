#include "main.h"
/**
 * _strstr - function to locate a substring
 * @haystack: string to find substring needle
 * @needle: substring to be searched for
 * Return: return pointer to substring beginning null if sub-s not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *t_stack;
	char *e_nedle;

	while (*haystack != '\0')
	{
		t_stack = haystack;
		e_nedle = needle;
		while (*haystack != '\0' && *e_nedle != '\0' && *haystack == *e_nedle)
		{
			haystack++;
			e_nedle++;
		}
		if (!*e_nedle)
			return (t_stack);
		haystack = t_stack + 1;
	}
	return (0);
}
