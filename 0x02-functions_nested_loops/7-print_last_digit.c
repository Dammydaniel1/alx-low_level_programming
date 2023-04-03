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

	if (last_digit >= 0)
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = last_digit * -1;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
