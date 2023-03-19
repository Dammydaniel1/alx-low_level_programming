/*
 * File: 2-print_alphabet.c
 * Auth: Damilola
 */

#include <stdio.h>

/**
 * main - Prints all letters of the alphabet in lowercase.except e & q
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	/*using nested if & for statement to exclude e & q*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}

	putchar('\n');

	/*always 0*/
	return (0);
}
