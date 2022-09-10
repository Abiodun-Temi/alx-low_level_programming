#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int coma = 1;

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			if (num1 < num2)
			{
				if (coma == 0)
				{
					putchar(',');
					putchar(32);
				}
				coma = 0;
				putchar(num1 + '0');
				putchar(num2 + '0');
			}
			++num2;
		}
		++num1;
		num2 = 0;
	}
	putchar(10);

	return (0);
}
