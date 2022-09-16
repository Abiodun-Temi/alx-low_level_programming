#include "main.h"
/**
 * _isupper - checks if letter is in upper case character
 *@c: variable to use for the if condition
 *Return: 1 if is in upper case and 0 other wise
*/
int _isupper(int c)
{

	if (c >= 'A' && c >= 'Z')
		return (1);

	else
		return (0);

}
