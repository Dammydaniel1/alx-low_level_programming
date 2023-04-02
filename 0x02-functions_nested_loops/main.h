/**
 * Filename: main.h
 * Author: Damilola Tijani
 *
 * Adding all headers and functions
 */
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>


/*a function that produces the english alphabet in lower case ten times*/

void print_alphabet_x10(void)
{
	int i
	char letter

	/*iterating 10 times*/
	for (i = 0, i < 10, i++)
	{
		/*each round of alphabet*/
		for (letter >= 'a',letter <= 'z', letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
}
