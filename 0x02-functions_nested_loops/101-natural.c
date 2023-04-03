#include <unistd.h>
#include "main.h"

/**
 * Description:
 * 
 * It prints natural numbers that are multiples of 3 or 5 below 1024
 *
 * Always return: 0.
 */

int main(void)
{
	int i, sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}

		i++;
	}

	printf("%d\n", sum);
	return (0);
}
