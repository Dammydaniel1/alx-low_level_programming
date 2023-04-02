/**
 * Filename: 2-print_alphabet_x10.c
 * Author: Damilola Tijani
 */

#include "main.h"

/*a function that produces the english alphabet in lower case*/
void  print_alphabet_lower_case(void)
{
        char letter;

        /*each english alphabet*/
        for (letter = 'a'; letter <= 'z'; letter++)
        {
                putchar(letter);
        }
}

/*looping alphabet ten times*/
void print_alphabet_x10(void)
{
        int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet_lower_case();
		putchar('\n')
	}


int main(void)
{
	/*calling on the function from main*/
	print_alphabet_x10();

	/*always return zero*/
	return (0);
}
