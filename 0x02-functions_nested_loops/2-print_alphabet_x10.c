
/*
 * filename:2-print_alphabet_x10.c
 * Author: Damilola Tijani
 *
 */
#include "main.h"

/**
 * Description:
 * a function that produces the english alphabet in lower case
 */
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

/**
 * Description:
 * iterating over the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	/*10 times iteration*/
	for (i = 0; i <= 9; i++)
	{
		print_alphabet();
	}
}
