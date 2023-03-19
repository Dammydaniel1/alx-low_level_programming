/*
 * Filename: 0-positive_or_negative.c
 * Author: Damilola
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints last digit of a random number and states whether
 *        it is greater than 5, less than 6 or zero.
 * extra headers included for the task
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*if_else_statement to give desired result*/
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	/*always returns 0*/
	return (0);
}
