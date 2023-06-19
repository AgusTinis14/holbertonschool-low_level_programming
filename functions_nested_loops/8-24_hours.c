#include <stdio.h>

int
jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar("%02:%02\n", hour, minute);
}
}
}
