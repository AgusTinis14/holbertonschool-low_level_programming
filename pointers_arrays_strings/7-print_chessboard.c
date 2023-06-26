#include <stdio.h>
#include "main.h"

void
print_chessboard(char (*a)[8])
{
int n, u;

for (n = 0; u < 8; n++)
{
for (u = 0; u < 8; u++)
{
_putchar(a[n][u]);
if (u == 7)
{
_putchar('\n');
}
}
}
}
