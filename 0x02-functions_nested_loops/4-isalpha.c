#include "main.h"

/**
 * Filename: 4-isalpha.c
 * Author: Damilola Tijani
 *
 * Description:
 *
 * a function that checks for alphabetic character
 *
 * 
 */

/**
 *a function that detrmines the case using if statement and the storage value
 */
int _isalpha(int c)
{
	if ((c >= 97 && c  <= 122)||(c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
