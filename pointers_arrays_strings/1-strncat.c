#include "main.h"
#include <stdio.h>

char
*_strncat(char *dest, char *src, int n)
{
	int c;
	int s;

	for (c = 0; dest[c] != '\0'; c++)
		;
	for (s = 0; src[s] != '\0' && n > 0; s++, n--, c++)
	{
		dest[c] = src[s];
	}
	return (dest);
}
