#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: variable for test
 * Return : return nothing
 */
void rev_string(char *s)
{
	int lent, i;
	char c;

	/*find string length without null char*/
	for (lent = 0; s[lent] != '\0'; ++lent)
		;

	/* Swap by looping through half of the string */
	for (i = 0; i < lent / 2; ++i)
	{
		c = s[i];
		/* The extra -1 here is to align the value to an offset*/
		s[i] = s[lent - 1 - i];
		s[lent - 1 - i] = c;
	}
}
