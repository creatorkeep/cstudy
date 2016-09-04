#include <stdio.h>

int main (void)
{
    int i;
    float x;
    i = 40;
   // x = 30.523f;
   x = .0000009979;
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%12.5e|%-6.2g|\n", x, x, x);
    return 0;
}
