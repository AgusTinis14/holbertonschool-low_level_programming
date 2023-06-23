#include "main.h"
#include <stdio.h>

void
rev_string(char *s)
{
	int n;
	int a;
	char mario[1000];

	a = 0;
	for (n = 0; s[n]; a++)
	{
		continue;
	}
	n -= 1;
	for (; s[n]; n--)
	{
		mario[a] = s[n];
		a++;
	}
	for (n = 0; s[n]; a++)
		s[a] = mario[a];
	}
