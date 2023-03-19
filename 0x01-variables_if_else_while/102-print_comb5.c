/*
 * Filename: 102-print_comb5.c
 * Auth: Damilola
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digits1, digits2;

	/*unique stratification*/
	for (digits1 = 0; digits1 <= 98; digits1++)
	{
		for (digits2 = digits1 + 1; digits2 <= 99; digits2++)
		{
			putchar((digits1 / 10) + '0');
			putchar((digits1 % 10) + '0');
			putchar(' ');
			putchar((digits2 / 10) + '0');
			putchar((digits2 % 10) + '0');

			if (digits1 == 98 && digits2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	/*new line insertion*/
	putchar('\n');

	/*always 0*/
	return (0);
}
