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
		_putchar(43);
		return (1);
	}
	else if (i < 0)
        {
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
