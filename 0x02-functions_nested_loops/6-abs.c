#include "main.h"

/**
 * Filename: 6-abs.c
 * Author: Damilola Tijani
 *
 * Description:
 *
 * a function that prints value of an integer
 *
 *
 */

/**
 *a function that detrmines the case using if statement and the storage value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
