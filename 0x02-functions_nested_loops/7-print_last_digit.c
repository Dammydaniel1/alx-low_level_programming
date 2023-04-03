#include "main.h"

/**
 * Filename: 7-print_last_digit.c
 * Author: Damilola Tijani
 *
 * Description:
 *
 * a function that prints last digit of a number
 *
 *
 */

/**
 *a function that detrmines the case using if statement and the storage value
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;
	_putchar(last_digit);
	return (last_digit);
}
