#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive intergers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int t, e, add = 0;

	for (t = 1; t< argc; t++)
	{
		for (e = 0; argv[t][e] != '\0'; e++)
		{
			if (!isdigit(argv[t][e]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[t]);
	}
	printf("%d\n", add);
	return (0);
}
