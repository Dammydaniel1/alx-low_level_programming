/*
 * Filename: 5-print_numbers.c
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
		printf("%d", num);

	/*new line*/
	printf("\n");
	
	/*always 0*/
	return (0);
}
