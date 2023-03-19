/*
 * Filename: 7-print_tebahpla.c
 * Author: Damilola
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 from 0 using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	/*using for statement for initiation and end*/
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	/*new line*/
	putchar('\n');

	/*always 0*/
	return (0);
}
