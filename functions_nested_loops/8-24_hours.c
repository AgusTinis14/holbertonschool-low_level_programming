#include <stdio.h>
#include "main.h"

int
jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
putchar("%02:%02\n", hour, minute);
}
}
return (0);
}
