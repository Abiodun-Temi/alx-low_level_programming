#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	int coma = 1;

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			while (num3 <= 9)
			{
				while (num4 <= 9)
				{
					if ((num3 * 10) + num4 > (num1 * 10) + num2)
					{
					if (coma == 0)
					{
						putchar(',');
						putchar(32);
					}
						putchar(num1 + '0');
						putchar(num2 + '0');
						putchar(32);
						putchar(num3 + '0');
						putchar(num4 + '0');
						coma = 0;
					}
					++num4;
				}
				++num3;
				num4 = 0;
			}
			++num2;
			num3 = 0;
		}
		++num1;
		num2 = 0;
	}

	putchar(10);

	return (0);
}
