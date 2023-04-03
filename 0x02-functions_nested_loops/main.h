/**
 * Description: main header file
 * Filename: main.h
 * Author: Damilola Tijani
 *
 * Adding all headers and functions
 */
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

void _putchar(int ch);

/*a function that prints the alphabet in lower case followed by a new line*/
void print_alphabet(void);
/*proper positioning: function for alphabet*/

/*a function for printing alphabet 10 times*/
void print_alphabet_x10(void);

/*a function for checks for lowercase character*/
int _islower(int c);

/* a function that checks for alphabet */
int _isalpha(int c);

/* a function that prints the sign of a number*/
int print_sign(int n);

/* a function that computes absolute value*/
int _abs(int);

/* a function that prints last number of a digit */
int print_last_digit(int);

/* a function that prints every minute of the day*/
void jack_bauer(void);

/* 9-times table*/
void times_table(void);

/* prints all natural numbers from n to 98*/
void print_to_98(int n);

/*prints n times table*/
void print_times_tables(int n);
