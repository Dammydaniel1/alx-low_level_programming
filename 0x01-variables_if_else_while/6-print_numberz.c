/*
 * Filename: 6-print_numberz.c
 * Author: Damilola
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	/*using for statement for initiation and end*/
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	/*new line*/
	putchar('\n');

	/*always 0*/
	return (0);
}
