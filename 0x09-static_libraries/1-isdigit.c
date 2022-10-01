#include "main.h"

/**
 * _isdigit - checks if parameter inouted by user is a number between 0-9
 * @c: varaible to use to carry out the check
 * Return: return 1 if number is falls bettwen 0-9 otherwise return 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
