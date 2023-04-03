#include "main.h"

/**
 * Filename: 9-times_table.c
 * Author: Damilola Tijani
 *
 * Description:
 *
 * a function that prints 9 times table
 *
 *
 */

/**
 *a function that detrmines the case using if statement and the storage value
 */
void times_table(void)
{
	int n1, n2, z, u, d;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			z = n1 * n2;

			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (n2 != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + '0');
			}
		}

		_putchar('\n');
	}
}
