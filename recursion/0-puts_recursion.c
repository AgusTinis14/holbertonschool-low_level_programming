#include "main.h"

void
_puts_recursion(char *s)
{
	if (* != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n') 
	}
}
