#include "main.h"
#include <stdio.h>

char
*_strncat(char *dest, char *src, int n)
	{
		int c;
		
		for (c = 0; dest[c] != '\0'; c++)
				;
		for (n = 0; src[n] != '\0'; n++)
		{
			dest[c] = src[n];
			c++;
		}
		dest[c] = '\0';
		return (dest);
	}
