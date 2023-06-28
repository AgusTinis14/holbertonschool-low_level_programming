#include "main.h"
#include <stdio.h>

int
_strlen_recursion(char *s)
{
	int len = 0;

	if (s != '\n')
	{
		len = _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
