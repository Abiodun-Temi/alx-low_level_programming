#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; --alpha)
		putchar(alpha);

	putchar(10);
	return (0);
}
