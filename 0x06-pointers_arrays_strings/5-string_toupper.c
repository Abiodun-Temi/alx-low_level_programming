#include "main.h"
/**
 * string_toupper - change all lower case string to upper
 * @t: string type
 * Return: return string
 */
char *string_toupper(char *t)
{
	int i = 0;

	while (t[i])
	{
		if (t[i] >= 97 && t[i] <= 122)
			t[i] = t[i] - 32;
		i++;
	}
	return (t);
}
