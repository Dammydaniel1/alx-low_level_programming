/*a function that produces the english alphabet in lower case*/
#include <stdio.h>
#include "main.h"

/*a function that produces the english alphabet in lower case*/
void  print_alphabet(void)
{	char letter;
        	/*each round of english alphabet in lower case*/
        for (letter = 'a'; letter<= 'z'; letter++)
		putchar(letter);
	putchar('\n');
}
