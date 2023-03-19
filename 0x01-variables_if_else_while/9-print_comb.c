/*
 * Filename: 9-print_comb.c
 * Auth: Damilola
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers with , & ' '
 * 
 * Return: Always 0.
 */
int main(void)
{
	int num;
	
	/*using continue to skip , and space after 9*/
	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
			if (num == 9)
				continue;
		putchar(',');
		putchar(' ');
	}

	/*new line insertion post execution*/
	putchar('\n');

	/*always 0*/
	return (0);
}
