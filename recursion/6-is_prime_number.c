#include "main.h"
#include <stdio.h>

int
is_prime_number(int n)
{
	if (n < 0)
		n = n * -1;
	if (n == 1)
		return (0);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
	{
		if (n == 2)
			return (1);
		return (0);
	}
	else
		return (1);
}
