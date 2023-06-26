#include "main.h"
#include <stdio.h>

int
_strcmp(char *s1, char *s2)
{
int b;
for (b = 0; s1[b] == s2[b]; b++)
{
if (s1[b] == '\0' && s2[b] == '\0')
{
return (0);
}
}
return (s1[b] - s2[b]);
}
