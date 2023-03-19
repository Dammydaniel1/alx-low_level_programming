/*
 * File: 2-print_alphabet.c
 * Auth: Damilola
 */

#include <stdio.h>

/**
 * main - Prints all letters of the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	/*using 2 for statement to initiate, include endpoint; and update*/
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	/*always 0*/
	return (0);
}
