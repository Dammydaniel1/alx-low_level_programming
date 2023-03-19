/*
 * Filename: 8-print_base16.c
 * Author: Damilola
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 16.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	/*using for statement for initiation and end*/
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	/*new line*/
	printf("\n");

	/*always 0*/
	return (0);
}
