#include <stdio.h>

/**
 * main - prints a11 possible different combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */
int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= 9; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
