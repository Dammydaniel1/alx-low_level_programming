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
	if (i > 0)
	{
		return (1);
		putchar(43);
	}
	else if (i < 0)
        {
		return (-1);
		putchar(45);
	}
	else
	{
		return (0);
		putchar(48);
	}
}
