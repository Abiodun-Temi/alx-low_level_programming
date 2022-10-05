#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *a_out;
	int t, e, m, i;

	if (ac == 0)
		return (NULL);

	for (t = e = 0; e < ac; e++)
	{
		if (av[e] == NULL)
			return (NULL);

		for (m = 0; av[e][m] != '\0'; m++)
			t++;
		t++;
	}

	a_out = malloc((t + 1) * sizeof(char));

	if (a_out == NULL)
	{
		free(a_out);
		return (NULL);
	}

	for (t = m = i = 0; i < t; m++, i++)
	{
		if (av[e][m] == '\0')
		{
			a_out[i] = '\n';
			e++;
			i++;
			m = 0;
		}
		if (i < t - 1)
			a_out[t] = av[e][m];
	}
	a_out[i] = '\0';

	return (a_out);
}
