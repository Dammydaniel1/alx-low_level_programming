#include "main.h"

/**
 * Filename: 11-print_to_98.c
 * Author: Damilola Tijani
 *
 * Description:
 *
 * a function that prints from n to 98
 *
 *
 */

/**
 *a function that detrmines the case using if statement and the storage value
 */
void print_to_98(int n)
{
	int u,d;

	while (n <= 98)
	{	if (n > 9)
		{
			u = n % 10;
			d = (n - u) / 10;

			_putchar(d + '0');
			_putchar(u + '0');
			_putchar(44);
			_putchar(32);
		}
		else
		{
			_putchar(n + '0');
			_putchar(44);
			_putchar(32);

		}
		n++;
	}
}
