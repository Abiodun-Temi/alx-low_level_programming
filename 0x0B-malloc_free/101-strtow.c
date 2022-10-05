#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, i, e;

	flag = 0;
	e = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			e++;
		}
	}

	return (e);
}
/**
 * **strtow - splits a string into  one word each
 * @str: string to be splitted
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int t, m = 0, lent = 0, words, c = 0, strt, end;

	while (*(str + lent))
		lent++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (t = 0; t <= lent; t++)
	{
		if (str[t] == ' ' || str[t] == '\0')
		{
			if (c)
			{
				end = t;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (strt < end)
					*tmp++ = str[strt++];
				*tmp = '\0';
				matrix[m] = tmp - c;
				m++;
				c = 0;
			}
		}
		else if (c++ == 0)
			strt = t;
	}

	matrix[m] = NULL;

	return (matrix);
}
