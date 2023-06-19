#include "main.h"

int
print_last_digit(int n)
{
int last_digit = n % 10;
_puchar(last_digit + '0');
return (last_digit);
}
