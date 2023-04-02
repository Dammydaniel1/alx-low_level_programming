
/*
 * filename: 1-alphabet.c
 * Author: Damilola Tijani
 *
 */
#include "main.h"

/*a function that produces the english alphabet in lower case*/
void  print_alphabet(void)
{
	char letter;

	/*each round of english alphabet in lower case*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	/*adding a new line*/
	putchar('\n');
}
