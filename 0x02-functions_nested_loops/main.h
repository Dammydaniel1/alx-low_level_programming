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

/*a function that produces the english alphabet in lower case*/
void  print_alphabet_lower_case(void)
{
        char letter;

        /*each round of english alphabet in lower case*/
        for (letter = 'a'; letter<= 'z'; letter++)
        {
                putchar(letter);
        }
}

/*looping through the english alphabet ten times*/
void print_alphabet_x10(void)
{
        int i;

        /*iterating 10 times*/
        for (i = 0; i < 10; i++)
        {
                print_alphabet_lower_case();
                putchar('\n');
	}
}
