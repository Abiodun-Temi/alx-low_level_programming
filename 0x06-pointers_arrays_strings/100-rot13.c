#include "main.h"

/**
* rot13 - Rotates each character in a string by 13 according to rot13 code
*
* @s: The string to encode in ROT-13
*
* Return: A pointer to @s after encoding it.
*/
char *rot13(char *s)
{
	char rotd[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM\0";

	char norm[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0";

	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		char c = s[i];

		for (j = 0; j < 52; j++)
		{
			if (norm[j] == c)
			{
				s[i] = rotd[j];
			}
		}
	}

	return (s);
}
