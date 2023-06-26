#include "main.h"
#include <stdio.h>

char
*_strcat(char *dest, char *src)
{
	int b, a;

	for (b = 0; dest[b] != '\0'; b++)
		;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
