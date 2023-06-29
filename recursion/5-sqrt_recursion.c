#include "main.h"
#include <stdio.h>

int
_sqrt_recursion(int n)
{
	return (halp(n, 1));
}


int halp(int c, int i)
{
	int square;

	square = i * i;
		if (square == c)
				return (i);
		else if (square < c)
				return (halp(c, i + 1));
		else
				return (-1);
}
