#include "main.h"

/**
 * _isalpha - checks if character is in lower case or upper case
 *@c: checks input of method
 * Return: returns 1 if 'c' is in lowercase or uppercase else return 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
