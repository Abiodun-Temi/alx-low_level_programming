#include "main.h"
/**
 * _strcmp - function to compare 2 strings
 * @s1: first character array or string
 * @s2: second character array or string
 * Return: return result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
