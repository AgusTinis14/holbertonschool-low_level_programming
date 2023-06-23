#include "main.h"

void
print_rev(char *s)
{
	int a;

	for (a = 0; s[a]; a++)
	{
		continue;
	}
	a -= 1;
	for (; s[a]; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
