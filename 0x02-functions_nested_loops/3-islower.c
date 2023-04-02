#include "main.h"

/**
 * Filename: 3-islower.c
 * Author: Damilola Tijani
 *
 * Description:
 *
 * a function that checks for lowercase character
 *
 * always return 0
 */

/**
 *a function that detrmines the case using if statement and the storage value
 */
int _islower(int c)
{
	if (c >= 97 && c  <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
