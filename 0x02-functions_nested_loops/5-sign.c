#include "main.h"

/**
 * Filename: 5-sign.c
 * Author: Damilola Tijani
 *
 * Description:
 *
 * a function that prints sign in of a number
 *
 *
 */

/**
 *a function that detrmines the case using if statement and the storage value
 */
int print_sign(int i)
{
	if ((i > 0))
	{
		putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		putchar(0);
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
