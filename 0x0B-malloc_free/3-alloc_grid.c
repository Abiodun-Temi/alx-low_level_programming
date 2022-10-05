#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to  2 dimensional array of int
 * @width: width of the array
 * @height: height of the array
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gri_out;
	int t, e;

	if (width < 1 || height < 1)
		return (NULL);

	gri_out = malloc(height * sizeof(int *));
	if (gri_out == NULL)
	{
		free(gri_out);
		return (NULL);
	}

	for (t = 0; t < height; t++)
	{
		gri_out[i] = malloc(width * sizeof(int));
		if (gri_out[t] == NULL)
		{
			for (t--; t >= 0; t--)
				free(gri_out[t]);
			free(gri_out);
			return (NULL);
		}
	}

	for (t = 0; t < height; t++)
		for (e = 0; e < width; e++)
			gri_out[t][e] = 0;

	return (gri_out);
}
