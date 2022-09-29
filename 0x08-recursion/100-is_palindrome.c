#include "main.h"

/**
 * _strlen_recursion - checks for the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compares each character of the string.
 * @s: string
 * @t1: small iterator.
 * @t2: big iterator.
 * Return: 0 success
 */
int compare_string(char *s, int t1, int t2)
{
	if (*(s + t1) == *(s + t2))
	{
		if (t1 == t2 || t1 == t2 + 1)
			return (1);
		return (0 + compare_string(s, t1 + 1, t2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string variable
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
