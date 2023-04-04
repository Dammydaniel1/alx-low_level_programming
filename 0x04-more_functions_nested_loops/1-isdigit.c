#include "main.h"

/**
 * Description:
 * a function that checks for digits
 *
 * returns 1 i digit
 * returns 0 if otherwise
 */
int _isdigit(int c)
{
	/*using if statement to identify digits*/
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
