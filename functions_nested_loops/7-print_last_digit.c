#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
print_last_digit(int numero)
{
	int last_digit = numero % 10;

	if (numero < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar (last_digit + '0');
	return (last_digit);
}
