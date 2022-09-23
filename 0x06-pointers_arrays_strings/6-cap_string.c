#include "main.h"
/**
 * cap_string - function to captialize strings
 * @t: string type
 * Return: return string
 */
char *cap_string(char *t)
{
	int i = 0;

	while (t[i] != '\0')
	{
		if (t[i] >= 97 && t[i] <= 122)
		{
			if (i == 0)
			{
				t[i] -= 32;
			}

			if (t[i - 1] == 32 || t[i - 1] == 9 || t[i - 1] == 10 ||
				t[i - 1] == 44 || t[i - 1] == 59 || t[i - 1] == 46 ||
				t[i - 1] == 33 || t[i - 1] == 63 || t[i - 1] == 34 ||
				t[i - 1] == 40 || t[i - 1] == 41 || t[i - 1] == 123 ||
				t[i - 1] == 124)
			{
				t[i] -= 32;
			}
		}
		i++;
	}
	return (t);
}
