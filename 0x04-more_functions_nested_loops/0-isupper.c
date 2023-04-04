#include "main.h"

/**
 * Description:
 * a function that checks for uppercase character
 *
 * returns 1 if uppercase
 * returns 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
