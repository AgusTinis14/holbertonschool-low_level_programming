#include <stdio.h>

void print_alphabet_x10(void)
{
char c = 'a';
int n = 0;

while (n != 10)
{
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	c = 'a';
n++;
}
}

