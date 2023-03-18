/*filename:101-quote.c*/
#include <unistd.h>

/**
 * prints a certain text to the standard error
 * always returns 1
 */
int main(void)
/*main*/
{
/*function to call:*/
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return(1);
/*always 1*/
}
