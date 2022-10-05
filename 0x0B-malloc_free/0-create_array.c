#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: size of  array
 * @c: storaged character
 * Return: pointer of an array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *create;
	unsigned int t;

	if (size == 0)
		return (NULL);

	create = malloc(sizeof(c) * size);

	if (create == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		create[t] = c;

	return (create);
}
