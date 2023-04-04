#include "main.h"

/**
 * Description:
 * a function that checks for digits
 *
 * returns 1 i digit
 * returns 0 if otherwise
 */

/*function proper*/
int _isdigit(int c)
{
	/*accounting for negative numbers*/
	if (c < 0)
	{
		c = c * -1
	
		
		/*using if statement to identify digits*/
		if ((c >= 49) && (c <= 57))
		{
			return (1);
        	}
		else
		{
			return (0);
		}
	}
	else
	{
		c = c
	
		/*using if statement to identify digits*/
		if ((c >= 49) && (c <= 57))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
