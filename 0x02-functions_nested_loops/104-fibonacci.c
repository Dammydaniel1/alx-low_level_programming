#include <unistd.h>
#include "main.h"

/**
 * Description:
 * It prints first 52 fibonacci numbers
 *
 * Always return: 0.
 */


int main(void)
{
	int i = 0;
	long long int j = 1, k = 2, l = j + k;

	while (i < 98)
	{
		if (i == 0)
			printf("%lli", j);
		else if (i == 1)
			printf(", %lli", k);
		else
		{
			l = j + k;
			printf(", %lli",l);
			j = k;
			k = l;
		}

		++i;
	}

	printf("\n");
	return (0);
}
