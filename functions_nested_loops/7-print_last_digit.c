#include "main.h"

int
print_last_digit(int n)
{
int last_digit = n % 10;
_putchar(last_digit + '0');
if (last_digit < 0)
last_digit *= -1;
return (last_digit);
}
