/*filename: 1-alphabet.c
 * Author: Damilola Tijani
 */
#include "main.h"

/*a function that produces the english alphabet in lower case*/
void  print_alphabet(void)/*proper position for description*/
	/*producesa english alphabeth*/
{
	char letter;

	/*each round of english alphabet in lower case*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
