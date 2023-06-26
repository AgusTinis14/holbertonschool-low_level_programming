#include "main.h"
#include <stdio.h>

char
*_strcat(char *dest, char *src);
{
	int b, a;

	for (b = 0; dest[b] != NULL; b++)
		;
	for (a = 0; src[a] != NULL; a++)
	{
		dest[b] = src[a];
		b++
	}
	dest[b] = NULL;
	return (dest);
}
