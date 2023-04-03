#include "main.h"

/**
 * Filename: 8-24_hours.c
 * Author: Damilola Tijani
 *
 * Description:
 *
 * a function that prints every minutes of the day
 *
 *
 */

/**
 *a function that detrmines the case using if statement and the storage value
 */
void jack_bauer(void)
{
	int h2, h1, m2, m1;

	for h2 = 0; h2 <= 2; h2++)
	{
		for (h1 = 0; h1 <= 9; h1++)
		{
			if ((h2 <= 1 && h1 <= 9) || (h2 <= 2 && h1 <= 3))
			{
				for (m2 = 0; m2 <= 5; m2++)
				{
					for (m1 = 0; m1 <= 9; m1++)
					{
						_putchar(h2 + '0');
						_putchar(h1 + '0');
						_putchar(58);
						_putchar(m2 + '0');
						_putchar(m1 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
