#include "main.h"
#include <stdio.h>

char
*_strncat(char *dest, char *src, int n)
	{
		int c;
		int s;
		
		for (c = 0; dest[c] != '\0'; c++)
				;
		for (n = 0; src[n] != '\0' && n > 0; s++, n--, c++)
		{
			dest[c] = src[n];
		}
		return (dest);
	}
