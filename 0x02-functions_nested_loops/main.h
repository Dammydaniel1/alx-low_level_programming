#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * adding the standard headers
 * reassigning the function _putchar to write
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
