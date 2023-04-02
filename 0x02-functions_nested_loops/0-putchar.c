#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	/*variable declarations*/
	char word = "_putchar";
	int i;

	/*looping through each character*/
	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	/*always 0*/
	return (0);
}
